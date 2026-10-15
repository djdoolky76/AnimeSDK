#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMiscConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMISCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69B000)
#define RPG_GAMECORE_FIVEDIMMISCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69AD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMiscConfig_TypeDefinitionIndex = 16674;

	class FiveDimMiscConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EmptyViewPath; // 0x10
		::System::String* DynamicSurfaceTemplatePath; // 0x18
		::System::Single PhantomPlayerDefaultDither; // 0x20
		::System::Single ForceExitDeathInterval; // 0x24
		::System::Int32 ForceExitDeathCount; // 0x28
		::System::Boolean AcceptInputWhenTimeStop; // 0x2C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::HoyoTagContainer* TriggerBorderPlatEntity; // 0x30
		::RPG::GameCore::HoyoTagContainer* DashSweepExtraEntity; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMiscConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMiscConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
