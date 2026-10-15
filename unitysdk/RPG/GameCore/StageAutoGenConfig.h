#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageAutoGenConfig; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEAUTOGENCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD79E0)
#define RPG_GAMECORE_STAGEAUTOGENCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD7740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageAutoGenConfig_TypeDefinitionIndex = 19144;

	class StageAutoGenConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean CullingDataIsNew; // 0x10
		::System::Boolean UseIRIVolumeReuse; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 LightBlockSceneHash; // 0x14
		::System::String* PVSMetaDataPath; // 0x18
		::System::Int32 PVSSamplerVersion; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* IRILodConfigPath; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEAUTOGENCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageAutoGenConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageAutoGenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEAUTOGENCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
