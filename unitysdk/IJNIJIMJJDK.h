#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define IJNIJIMJJDK_CTOR_OFFSET UNITYSDK_OFFSET(0x16464110)
#define IJNIJIMJJDK_GET_ISFADEIN_OFFSET UNITYSDK_OFFSET(0x16464120)
#define IJNIJIMJJDK_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x16464140)
#define IJNIJIMJJDK_GET_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x16464160)
#define IJNIJIMJJDK_SET_ISFADEIN_OFFSET UNITYSDK_OFFSET(0x16464130)
#define IJNIJIMJJDK_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x16464150)
#define IJNIJIMJJDK_SET_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x16464170)

inline static constexpr unsigned int IJNIJIMJJDK_TypeDefinitionIndex = 79016;

	class IJNIJIMJJDK : public ::System::Object
	{
	public:
		::System::Action* _OnComplete_k__BackingField; // 0x10
		::System::Boolean _IsFadeIn_k__BackingField; // 0x18
		::System::Boolean _IsWin_k__BackingField; // 0x19
		::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IJNIJIMJJDK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNIJIMJJDK_GET_ISFADEIN_OFFSET))(this);
		}

		::System::Void set_IsFadeIn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJNIJIMJJDK_SET_ISFADEIN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNIJIMJJDK_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJNIJIMJJDK_SET_ISWIN_OFFSET))(this, a1);
		}

		::System::Action* get_OnComplete()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNIJIMJJDK_GET_ONCOMPLETE_OFFSET))(this);
		}

		::System::Void set_OnComplete(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IJNIJIMJJDK_SET_ONCOMPLETE_OFFSET))(this, a1);
		}

	};
