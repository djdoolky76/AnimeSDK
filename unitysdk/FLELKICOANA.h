#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIJLENHLAIJ.h"

#define FLELKICOANA_CTOR_OFFSET UNITYSDK_OFFSET(0x1895E3F0)
#define FLELKICOANA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1895E430)

inline static constexpr unsigned int FLELKICOANA_TypeDefinitionIndex = 62723;

	class FLELKICOANA : public ::IIJLENHLAIJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLELKICOANA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLELKICOANA_KPJGDHLENIP_OFFSET))(this);
		}

	};
