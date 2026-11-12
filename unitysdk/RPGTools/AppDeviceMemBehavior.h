#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/AppMemoryLevel.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xB6E0DB0)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_GETCURRENTCOLOR_OFFSET UNITYSDK_OFFSET(0xB6E08B0)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_GETCURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0xB6E0870)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_ONDRAG_OFFSET UNITYSDK_OFFSET(0xB6E0930)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_RESETTAG_OFFSET UNITYSDK_OFFSET(0xB6E0C60)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_SETUPUI_OFFSET UNITYSDK_OFFSET(0xB6DF820)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_START_OFFSET UNITYSDK_OFFSET(0xB6DF810)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_SWITHBTNCLICK_OFFSET UNITYSDK_OFFSET(0xB6E0D40)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_TAGBTNCLICK_OFFSET UNITYSDK_OFFSET(0xB6E0BF0)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_UPDATECRITICALIMAGESTATE_OFFSET UNITYSDK_OFFSET(0xB6E08F0)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xB6E0110)

namespace RPGTools
{
	inline static constexpr unsigned int AppDeviceMemBehavior_TypeDefinitionIndex = 47951;

	class AppDeviceMemBehavior : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single updateInterval; // 0x1C
		::System::Int32 MemNormal; // 0x20
		::System::Int32 MemWarning; // 0x24
		::System::Int32 MemUrgent; // 0x28
		::System::Int32 MemCritical; // 0x2C
		::System::Int32 _currentMemoryInMB; // 0x30
		::System::Single _updateTimer; // 0x34
		::UnityEngine::UI::Text* _textAppTotalMem; // 0x38
		::UnityEngine::UI::Image* _imageCritical; // 0x40
		::UnityEngine::Color _disableColor; // 0x48
		::Il2CppArray<::UnityEngine::Color>* _memLevelColor; // 0x58
		::System::Int32 _maxMemoryInMB; // 0x60
		::System::Int32 _minMemoryInMB; // 0x64
		::System::Int32 _tagTotalMemoryInMB; // 0x68
		::System::Int32 _tagMemoryFlag; // 0x6C
		::UnityEngine::UI::Text* _textTagMemInfo; // 0x70
		::UnityEngine::UI::InputField* _inputUpdateInterval; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_UPDATE_OFFSET))(this);
		}

		::System::Void SetupUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_SETUPUI_OFFSET))(this);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void TagBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_TAGBTNCLICK_OFFSET))(this);
		}

		::System::Void ResetTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_RESETTAG_OFFSET))(this);
		}

		::System::Void SwithBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_SWITHBTNCLICK_OFFSET))(this);
		}

		::RPGTools::AppMemoryLevel GetCurrentLevel(::System::Int32 a1)
		{
			return ((::RPGTools::AppMemoryLevel(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_GETCURRENTLEVEL_OFFSET))(this, a1);
		}

		::System::Void UpdateCriticalImageState(::RPGTools::AppMemoryLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::AppMemoryLevel))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_UPDATECRITICALIMAGESTATE_OFFSET))(this, a1);
		}

		::UnityEngine::Color GetCurrentColor(::RPGTools::AppMemoryLevel a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::RPGTools::AppMemoryLevel))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_GETCURRENTCOLOR_OFFSET))(this, a1);
		}

	};
}
