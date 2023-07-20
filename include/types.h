#ifndef TYPES_H
#define TYPES_H

#include <string>
#include <vector>

class ReadResult
{
public:
    std::vector<TokenRow> token_data;
};

class TokenRow
{
public:
    std::string xtkn;
    std::string itkn;
    std::string issuing_bank;
    std::string issuer_country_code;
    std::string card_type;
    std::string card_brand;
    uint bin_range;

    TokenRow(std::string xtkn,
             std::string itkn,
             std::string issuing_bank,
             std::string issuer_country_code,
             std::string card_type,
             std::string card_brand,
             uint bin_range) : xtkn(xtkn),
                               itkn(itkn),
                               issuing_bank(issuing_bank),
                               issuer_country_code(issuer_country_code),
                               card_type(card_type),
                               card_brand(card_brand),
                               bin_range(bin_range) {}
};

class XTkn
{
public:
    std::string token;

    XTkn(std::string token) : token(token) {}
};

class MetaData
{
public:
    std::string token;
    std::string issuing_bank;
    std::string issuer_country_code;
    std::string card_type;
    std::string card_brand;
    uint bin_range;

    MetaData(std::string token,
             std::string issuing_bank,
             std::string issuer_country_code,
             std::string card_type,
             std::string card_brand,
             uint bin_range) : token(token),
                               issuing_bank(issuing_bank),
                               issuer_country_code(issuer_country_code),
                               card_type(card_type),
                               card_brand(card_brand),
                               bin_range(bin_range) {}
};

#endif