#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetBillboardInfo; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RESETBILLBOARDINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98A6F0)
#define RPG_GAMECORE_RESETBILLBOARDINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D98A700)
#define RPG_GAMECORE_RESETBILLBOARDINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98A6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetBillboardInfo_TypeDefinitionIndex = 20461;

	class ResetBillboardInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::EntityType TargetEntityType; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 GroupID; // 0x28
		::System::UInt32 MapIconType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETBILLBOARDINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetBillboardInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetBillboardInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETBILLBOARDINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetBillboardInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetBillboardInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETBILLBOARDINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
