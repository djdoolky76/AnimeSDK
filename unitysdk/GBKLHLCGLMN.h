#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int GBKLHLCGLMN_TypeDefinitionIndex = 69008;

enum class GBKLHLCGLMN : ::System::Byte
{
	TagMark = 15,
	ChineseWord = 6,
	Ignored = 3,
	INVALID = 255,
	Word = 2,
	TagRuby = 16,
	TAG_BEGIN = 7,
	TOKEN_MASK = 127,
	TagTextLink = 14,
	NotInHeadIfAfterTextMask = 128,
	TAG_PAIRED_END = 18,
	LineBreak = 4,
	TagRt = 17,
	TagSize = 10,
	TagColor = 11,
	TagUnderline = 13,
	NotInHead_NotInEnd = 96,
	TAG_RIGHT_MASK = 128,
	TagBold = 8,
	TagLink = 12,
	TagQuad = 19,
	SpecialWord = 5,
	Chars = 1,
	SPECIAL_MASK = 128,
	NotInEnd = 32,
	NotInHead = 64,
	PLAIN_TOKEN_MASK = 31,
	Space = 0,
	TAG_END = 20,
	NotInHeadIfAfterText = 192,
	TagItalic = 9,
};
