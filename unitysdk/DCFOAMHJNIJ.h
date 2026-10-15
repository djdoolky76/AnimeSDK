#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"

#define DCFOAMHJNIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE23AFD0)
#define DCFOAMHJNIJ_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0xE23A0D0)

inline static constexpr unsigned int DCFOAMHJNIJ_TypeDefinitionIndex = 59717;

	class DCFOAMHJNIJ : public ::LJKHPOHKIIF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFOAMHJNIJ_CTOR_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFOAMHJNIJ_GNLKPJHAKHM_OFFSET))(this);
		}

	};
