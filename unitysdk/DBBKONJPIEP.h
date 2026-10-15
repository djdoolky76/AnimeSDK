#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEDAPLLONJD.h"

#define DBBKONJPIEP_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0xDFCCE60)
#define DBBKONJPIEP_CTOR_OFFSET UNITYSDK_OFFSET(0xDFCCEB0)

inline static constexpr unsigned int DBBKONJPIEP_TypeDefinitionIndex = 57118;

	class DBBKONJPIEP : public ::PEDAPLLONJD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBKONJPIEP_CTOR_OFFSET))(this);
		}

		::System::Void BKHKBEJCGJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBKONJPIEP_BKHKBEJCGJK_OFFSET))(this);
		}

	};
