#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ShieldFormulaType.h"
class FCOEMCEDLNL;
class NGGLPLKJKMM;
namespace RPG::GameCore { class DynamicFloat; }

#define NGGLPLKJKMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D9420)
#define NGGLPLKJKMM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1D9020)

inline static constexpr unsigned int NGGLPLKJKMM_TypeDefinitionIndex = 18156;

	class NGGLPLKJKMM : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MDFKCMGPPDM; // 0x10
		::RPG::GameCore::DynamicFloat* MJPLMGPIMHA; // 0x18
		::RPG::GameCore::DynamicFloat* PIBDDOGGDKL; // 0x20
		::RPG::GameCore::DynamicFloat* GKLLOMFGMBI; // 0x28
		::RPG::GameCore::DynamicFloat* HDKGKHCCEGI; // 0x30
		::RPG::GameCore::FinalDamageFormulaType NAGHIJIMOKL; // 0x38
		::RPG::GameCore::HealFormulaType PEBICIMMFMK; // 0x3C
		::RPG::GameCore::AttackFormulaType OHIAHBOOGII; // 0x40
		::RPG::GameCore::ShieldFormulaType BCCLOHGGLCH; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGLPLKJKMM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NGGLPLKJKMM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NGGLPLKJKMM*))((::PBYTE)hIl2Cpp + NGGLPLKJKMM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
