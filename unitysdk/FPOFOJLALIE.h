#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MoveOffsetCoordType.h"
#include "unitysdk/RPG/GameCore/RtBattleAnimMoveOption.h"
class FCOEMCEDLNL;
class FPOFOJLALIE;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define FPOFOJLALIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA41020)
#define FPOFOJLALIE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA409C0)

inline static constexpr unsigned int FPOFOJLALIE_TypeDefinitionIndex = 24544;

	class FPOFOJLALIE : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* KJIOHLANNHA; // 0x10
		::RPG::GameCore::DynamicFloat* GJOLEJOOEIG; // 0x18
		::RPG::GameCore::DynamicFloat* GHFFPEIHHKG; // 0x20
		::RPG::GameCore::DynamicFloat* HODCCEFFCEJ; // 0x28
		::RPG::GameCore::DynamicFloat* FMHMAHCNDGB; // 0x30
		::RPG::GameCore::DynamicFloat* DLOECBHBAGB; // 0x38
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x40
		::System::String* GBIOGILHAHO; // 0x48
		::RPG::GameCore::DynamicFloat* EKOHAKKJLFL; // 0x50
		::RPG::GameCore::DynamicFloat* NALEDFKPFLD; // 0x58
		::RPG::GameCore::DynamicFloat* NNNAGHMNFKB; // 0x60
		::RPG::GameCore::RtBattleAnimMoveOption ALEGIFEHGLH; // 0x68
		::RPG::GameCore::MoveOffsetCoordType OLFKAMLFJLH; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOFOJLALIE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FPOFOJLALIE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FPOFOJLALIE*))((::PBYTE)hIl2Cpp + FPOFOJLALIE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
