#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KDFPMEOOBCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D890320)

inline static constexpr unsigned int KDFPMEOOBCA_TypeDefinitionIndex = 37135;

	class KDFPMEOOBCA : public ::System::Object
	{
	public:
		::System::Single PDOPIECLDBM; // 0x10
		::System::Single NPIDLCCPPNI; // 0x14
		::System::Single OHFGACAOOJI; // 0x18
		::System::Single EHOIKFCAIKP; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFPMEOOBCA_CTOR_OFFSET))(this);
		}

	};
