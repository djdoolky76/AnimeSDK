#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"

#define DCFOAMHJNIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE2427E0)
#define DCFOAMHJNIJ_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0xE2418E0)

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
