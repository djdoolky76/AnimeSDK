#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BNFNPBDKFCG.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING_ASSIGN_OFFSET UNITYSDK_OFFSET(0x130E2730)
#define MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING_GET_LOCATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x130E2690)
#define MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING_GET_ROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x130E26B0)
#define MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING_HASVALIDDATA_OFFSET UNITYSDK_OFFSET(0x130E2810)
#define MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0x130E2890)
#define MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x130E2880)

namespace MoleMole::LevelPerform
{
	inline static constexpr unsigned int DirectKillShakeSetting_TypeDefinitionIndex = 62174;

	class DirectKillShakeSetting : public ::System::Object
	{
	public:
		static ::MoleMole::LevelPerform::DirectKillShakeSetting** StaticGet_Fallback()
		{
			return (::MoleMole::LevelPerform::DirectKillShakeSetting**)Il2CppClass::FromTypeDefinitionIndex(DirectKillShakeSetting_TypeDefinitionIndex)->GetStaticField(0x34AC0);
		}
		::System::String* sharedShakeCurve; // 0x10
		::System::String* rollShakeCurve; // 0x18
		::System::Single upShakeOffset; // 0x20
		::System::Single pitchShakeOffset; // 0x24
		::System::Single rollShakeOffset; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 get_locationOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING_GET_LOCATIONOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_rotationOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING_GET_ROTATIONOFFSET_OFFSET))(this);
		}

		::System::Void Assign(::BNFNPBDKFCG& config)
		{
			return ((::System::Void(*)(::PVOID, ::BNFNPBDKFCG&))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING_ASSIGN_OFFSET))(this, config);
		}

		::System::Boolean HasValidData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING_HASVALIDDATA_OFFSET))(this);
		}
	};
}
