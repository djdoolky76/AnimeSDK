#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderTestModule_DJIICLIILAM_TestStatus.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class Text; }

#define HIPPLENBUILDERTESTLINECONTROLLER_ACPJOLFKMGF_OFFSET UNITYSDK_OFFSET(0x15DF2890)
#define HIPPLENBUILDERTESTLINECONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x15DF3520)
#define HIPPLENBUILDERTESTLINECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x15DF1C90)
#define HIPPLENBUILDERTESTLINECONTROLLER_ONPIN_OFFSET UNITYSDK_OFFSET(0x15DF2D90)
#define HIPPLENBUILDERTESTLINECONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x15DF34E0)

	class HipplenBuilderTestLineController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Text* TestTitleText; // 0x18
		::UnityEngine::UI::HorizontalLayoutGroup* TestItemLayout; // 0x20
		::UnityEngine::GameObject* TestItemPrefab; // 0x28
		::System::Boolean isPinned; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Color YetColor; // 0x34
		::UnityEngine::Color PassColor; // 0x44
		::UnityEngine::Color LockedColor; // 0x54
		::UnityEngine::Color FailedColor; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTLINECONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::String* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTLINECONTROLLER_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void OnPin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTLINECONTROLLER_ONPIN_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTLINECONTROLLER_REFRESH_OFFSET))(this);
		}

		::System::Void ACPJOLFKMGF(::UnityEngine::GameObject* a1, ::HipplenBuilderTestModule_DJIICLIILAM_TestStatus a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::HipplenBuilderTestModule_DJIICLIILAM_TestStatus))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTLINECONTROLLER_ACPJOLFKMGF_OFFSET))(this, a1, a2);
		}

	};
