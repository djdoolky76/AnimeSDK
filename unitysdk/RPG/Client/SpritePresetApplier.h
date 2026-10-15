#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpritePresetStrategyType.h"
#include "unitysdk/System/Object.h"
class BCCNOOJJPCD;
namespace System { class String; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_SPRITEPRESETAPPLIER_CTOR_OFFSET UNITYSDK_OFFSET(0xE102940)
#define RPG_CLIENT_SPRITEPRESETAPPLIER_GET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0xE102920)
#define RPG_CLIENT_SPRITEPRESETAPPLIER_GLCGLICFJAK_OFFSET UNITYSDK_OFFSET(0xE102660)
#define RPG_CLIENT_SPRITEPRESETAPPLIER_IPPIHFPKBOC_OFFSET UNITYSDK_OFFSET(0xE1026F0)
#define RPG_CLIENT_SPRITEPRESETAPPLIER_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xE1023F0)
#define RPG_CLIENT_SPRITEPRESETAPPLIER_SET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0xE102930)

namespace RPG::Client
{
	class SpritePresetApplier : public ::System::Object
	{
	public:
		::UnityEngine::Component* _ComponentRef; // 0x10
		::System::String* _PresetName; // 0x18
		::RPG::GameCore::SpritePresetStrategyType _StrategyType; // 0x20
		::System::Byte _padding0[0x4];
		::BCCNOOJJPCD* _StrategyCache; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Void IPPIHFPKBOC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER_IPPIHFPKBOC_OFFSET))(this, a1);
		}

		::System::String* get_PresetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER_GET_PRESETNAME_OFFSET))(this);
		}

		::System::Void set_PresetName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER_SET_PRESETNAME_OFFSET))(this, a1);
		}

		::BCCNOOJJPCD* GLCGLICFJAK()
		{
			return ((::BCCNOOJJPCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER_GLCGLICFJAK_OFFSET))(this);
		}

	};
}
