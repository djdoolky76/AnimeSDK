#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KADCLBEPFPL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define KADCLBEPFPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D05D590)
#define KADCLBEPFPL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D05D5A0)
#define KADCLBEPFPL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D05D560)

	class KADCLBEPFPL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* BPMLAGEHDPE; // 0x18
		::Il2CppArray<::System::String*>* GCLBNEHOIDD; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::Boolean DIOGHDMOLBA; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADCLBEPFPL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KADCLBEPFPL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KADCLBEPFPL*))((::PBYTE)hIl2Cpp + KADCLBEPFPL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KADCLBEPFPL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KADCLBEPFPL*))((::PBYTE)hIl2Cpp + KADCLBEPFPL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
