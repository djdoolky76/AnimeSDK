#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

#define CFABNEAPFPG_CTOR_OFFSET UNITYSDK_OFFSET(0xC9F9A70)
#define CFABNEAPFPG_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC9F99F0)
#define CFABNEAPFPG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC9F9A30)

	class CFABNEAPFPG : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFABNEAPFPG_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFABNEAPFPG_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFABNEAPFPG_PAGKOAEOLKA_OFFSET))(this);
		}

	};
