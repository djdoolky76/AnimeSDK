#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeviceInfo; }
namespace RPG::GameCore { class GraphicsSettingRequirements; }
namespace RPG::GameCore { class RenderResolution; }

#define RPG_GAMECORE_DEVICEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FE600)
#define RPG_GAMECORE_DEVICEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FE140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceInfo_TypeDefinitionIndex = 18268;

	class DeviceInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GraphicsSettingRequirements*>* requirements; // 0x10
		::Il2CppArray<::RPG::GameCore::RenderResolution*>* renderResolutions; // 0x18
		::System::Int32 defaultVolatileGrade; // 0x20
		::System::Boolean Support120FPS; // 0x24
		::System::Boolean enterBattleSwitchHLODAdvScene; // 0x25
		::System::Byte _padding0[0x2];
		::System::Int32 PersistentLayerHighestLodLevel; // 0x28
		::System::Boolean DynamicLoadBattleArea; // 0x2C
		::System::Boolean DynamicUnloadBattleArea; // 0x2D
		::System::Boolean EnableStoryStreamingSource; // 0x2E
		::System::Byte _padding1[0x1];
		::System::Int32 TextureStreamingMemoryBudget; // 0x30
		::System::Boolean SupportMetalFX; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
