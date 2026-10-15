#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KDFPMEOOBCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E0680)

inline static constexpr unsigned int KDFPMEOOBCA_TypeDefinitionIndex = 36207;

	class KDFPMEOOBCA : public ::System::Object
	{
	public:
		::System::Single NPIDLCCPPNI; // 0x10
		::System::Single OHFGACAOOJI; // 0x14
		::System::Single EHOIKFCAIKP; // 0x18
		::System::Single PDOPIECLDBM; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFPMEOOBCA_CTOR_OFFSET))(this);
		}

	};
