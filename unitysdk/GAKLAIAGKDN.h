#pragma once
#include "unitysdk/unitysdk.h"
class GAKLAIAGKDN;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceEnterStatePredicateConfig; }

#define GAKLAIAGKDN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C629100)
#define GAKLAIAGKDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C629190)
#define GAKLAIAGKDN_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x1C6291B0)

	class GAKLAIAGKDN
	{
	public:
		::System::UInt32 MJMPDKNIBJI; // 0x20
		::System::Void _ctor(::RPG::GameCore::CakeRaceEnterStatePredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceEnterStatePredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + GAKLAIAGKDN_CTOR_OFFSET))(this, a1, a2);
		}

		static ::GAKLAIAGKDN* BPLPBPMEODA(::RPG::GameCore::CakeRaceEnterStatePredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::GAKLAIAGKDN*(*)(::RPG::GameCore::CakeRaceEnterStatePredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + GAKLAIAGKDN_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean IsMatchImpl(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + GAKLAIAGKDN_ISMATCHIMPL_OFFSET))(this, a1);
		}

	};
