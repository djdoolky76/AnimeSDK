#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CRPVirtualCameraConfigList; }
namespace RPG::GameCore { class ElationConfig; }
namespace RPG::GameCore { class ElationUIConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ELATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D632550)
#define RPG_GAMECORE_ELATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D632260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationConfig_TypeDefinitionIndex = 16542;

	class ElationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SkillName; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::CRPVirtualCameraConfigList*>* ElationCameraConfig; // 0x18
		::System::Boolean ForceUseCRPCamera; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* ElationCameraCenterAttachPoint; // 0x28
		::System::String* ReadyAnim; // 0x30
		::System::String* ReadyLoopAnim; // 0x38
		::System::String* ElationTexturePath; // 0x40
		::RPG::GameCore::ElationUIConfig* UIConfig; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
