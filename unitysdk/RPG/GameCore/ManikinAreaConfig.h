#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ManikinAreaConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MANIKINAREACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D1970)
#define RPG_GAMECORE_MANIKINAREACONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7D1600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinAreaConfig_TypeDefinitionIndex = 18966;

	class ManikinAreaConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* AreaPrefabPath; // 0x18
		::System::String* EnviroProfile; // 0x20
		::System::String* CameraAnchorRootPath; // 0x28
		::System::String* ModelAnchorRootPath; // 0x30
		::System::String* LookAnchorRootPath; // 0x38
		::System::String* AreaAnimatorPath; // 0x40
		::System::Single MainLightDirOffsetX; // 0x48
		::System::Single MainLightDirOffsetY; // 0x4C
		::System::Single EidolonShadowDistance; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINAREACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ManikinAreaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ManikinAreaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINAREACONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
