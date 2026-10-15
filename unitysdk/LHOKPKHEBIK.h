#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
class LHOKPKHEBIK;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define LHOKPKHEBIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F4800)
#define LHOKPKHEBIK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0F4810)
#define LHOKPKHEBIK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0F47C0)

	class LHOKPKHEBIK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::String* FCGFFNKCLNJ; // 0x20
		::RPG::GameCore::TargetEvaluator* BLEOLOJJFDA; // 0x28
		::RPG::GameCore::FormatString ECNKCCNJNPJ; // 0x30
		::RPG::MVector3 MPFLMHPNOOB; // 0x38
		::System::Single MOAPMBBKJAK; // 0x44
		::RPG::MVector3 HAIBFNMDPKE; // 0x48
		::System::Boolean BGNCHHNAHEJ; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOKPKHEBIK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LHOKPKHEBIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LHOKPKHEBIK*))((::PBYTE)hIl2Cpp + LHOKPKHEBIK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LHOKPKHEBIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LHOKPKHEBIK*))((::PBYTE)hIl2Cpp + LHOKPKHEBIK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
