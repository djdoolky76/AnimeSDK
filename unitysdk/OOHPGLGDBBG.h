#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OOHPGLGDBBG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF848D0)

inline static constexpr unsigned int OOHPGLGDBBG_TypeDefinitionIndex = 57049;

	class OOHPGLGDBBG : public ::System::Object
	{
	public:
		::System::Single HMBJNEIEIJK; // 0x10
		::System::Single HBAMPJPOOLM; // 0x14
		::System::Single BNPNLEADONP; // 0x18
		::System::Single DNPKFCEKLHJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHPGLGDBBG_CTOR_OFFSET))(this);
		}

	};
