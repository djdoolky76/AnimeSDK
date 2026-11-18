#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class UIColorTweakerTargetGroup; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOUICOLORTWEAKER_AWAKE_OFFSET UNITYSDK_OFFSET(0x139FA0A0)
#define MOLEMOLE_MONOUICOLORTWEAKER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x139FA140)
#define MOLEMOLE_MONOUICOLORTWEAKER_SETGROUPTARGETCOLOR_OFFSET UNITYSDK_OFFSET(0x139F9F00)
#define MOLEMOLE_MONOUICOLORTWEAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x139FA380)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIColorTweaker_TypeDefinitionIndex = 76800;

	class MonoUIColorTweaker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::MoleMole::UIColorTweakerTargetGroup*>* groups; // 0x18
		::Il2CppArray<::UnityEngine::Animation*>* watchAnims; // 0x20
		::UnityEngine::Transform* rootNode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUICOLORTWEAKER__CTOR_OFFSET))(this);
		}

		::System::Void SetGroupTargetColor(::System::String* MCOHLHMKLIP, ::UnityEngine::Color JBBFCGAMDHI)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUICOLORTWEAKER_SETGROUPTARGETCOLOR_OFFSET))(this, MCOHLHMKLIP, JBBFCGAMDHI);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUICOLORTWEAKER_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUICOLORTWEAKER_LATEUPDATE_OFFSET))(this);
		}
	};
}
