#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenPickingGoodsNPCConfig; }
namespace RPG::GameCore { class HipplenRequireGoodsConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENPICKINGGOODSNPCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76F640)
#define RPG_GAMECORE_HIPPLENPICKINGGOODSNPCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76F260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenPickingGoodsNPCConfig_TypeDefinitionIndex = 16798;

	class HipplenPickingGoodsNPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsLocalPlayer; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* NPCID; // 0x18
		::Il2CppArray<::RPG::GameCore::HipplenRequireGoodsConfig*>* RequireGoods; // 0x20
		::System::Boolean OverrideBubbleOffset; // 0x28
		::System::Byte _padding1[0x3];
		::RPG::MVector3 BubbleOffset; // 0x2C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoaded; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSucc; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFail; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENPICKINGGOODSNPCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenPickingGoodsNPCConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenPickingGoodsNPCConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENPICKINGGOODSNPCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
