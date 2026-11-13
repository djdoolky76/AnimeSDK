#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class BMNBIGCFJJB;
class FCOEMCEDLNL;
namespace RPG::GameCore { class SummonUnitChildEffectConfig; }
namespace System { class String; }

#define BMNBIGCFJJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF1D00)
#define BMNBIGCFJJB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EAF1D10)
#define BMNBIGCFJJB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EAF1BB0)

inline static constexpr unsigned int BMNBIGCFJJB_TypeDefinitionIndex = 21398;

	class BMNBIGCFJJB : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SummonUnitChildEffectConfig* OAEIPEJAOOL; // 0x10
		::System::String* LKNGDBPBGAN; // 0x18
		::RPG::GameCore::SummonUnitChildEffectConfig* HEPHPHMILOB; // 0x20
		::System::Single PBIILFIGNBK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNBIGCFJJB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BMNBIGCFJJB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BMNBIGCFJJB*))((::PBYTE)hIl2Cpp + BMNBIGCFJJB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BMNBIGCFJJB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BMNBIGCFJJB*))((::PBYTE)hIl2Cpp + BMNBIGCFJJB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
