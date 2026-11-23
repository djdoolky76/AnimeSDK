#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace TMPro { class TextMeshProUGUI; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }

#define ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY_A5A7D061264AC576_OFFSET UNITYSDK_OFFSET(0x2352780)
#define ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x23529D0)
#define ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY_B1287F8F3A77C202_OFFSET UNITYSDK_OFFSET(0x2352920)
#define ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY_E1FE518F7ECD939B_OFFSET UNITYSDK_OFFSET(0x2352E10)
#define ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY_E4F007ACC2CEE58B_OFFSET UNITYSDK_OFFSET(0x2352ED0)
#define ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY_EABBBCEA43676FED_OFFSET UNITYSDK_OFFSET(0x2352800)
#define ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x2352BF0)
#define ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY_F3DEAA7A57A186E6_OFFSET UNITYSDK_OFFSET(0x2352860)
#define ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x2353000)

namespace ABC::Debugging
{
	inline static constexpr unsigned int MonoExceptionAlertDisplay_TypeDefinitionIndex = 3243;

	class MonoExceptionAlertDisplay : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* DisplayInfo; // 0x20
		::TMPro::TextMeshProUGUI* DisplayText; // 0x28
		::UnityEngine::UI::Button* CancelButton; // 0x30
		::UnityEngine::UI::Button* CopyButton; // 0x38
		::UnityEngine::UI::Button* NeverShowAgainButton; // 0x40
		::UnityEngine::GameObject* NeverShowAgainChecked; // 0x48
		::System::Boolean F808BAEBBD6FB8E2; // 0x50
		::System::Byte _padding0[0x7];
		::System::String* E624EBF1E9977D40; // 0x58
		::System::Boolean E55738AC888BCA98; // 0x60

		::System::Void A5A7D061264AC576()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY_A5A7D061264AC576_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY__CTOR_OFFSET))(this);
		}

		::System::Void EABBBCEA43676FED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY_EABBBCEA43676FED_OFFSET))(this);
		}

		::System::Void E1FE518F7ECD939B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY_E1FE518F7ECD939B_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void E4F007ACC2CEE58B(::System::String* BD28320BB53AB798)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY_E4F007ACC2CEE58B_OFFSET))(this, BD28320BB53AB798);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void F3DEAA7A57A186E6(::System::Boolean A3E26351629B9EF8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY_F3DEAA7A57A186E6_OFFSET))(this, A3E26351629B9EF8);
		}

		::System::Void B1287F8F3A77C202(::System::Boolean E18BE0BAB1EAE4AB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_DEBUGGING_MONOEXCEPTIONALERTDISPLAY_B1287F8F3A77C202_OFFSET))(this, E18BE0BAB1EAE4AB);
		}
	};
}
