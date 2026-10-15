#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Button; }

#define JKMPIOCHLNN___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB21E800)
#define JKMPIOCHLNN___C__DISPLAYCLASS0_0__BIND_B__0_OFFSET UNITYSDK_OFFSET(0xB21F030)

inline static constexpr unsigned int JKMPIOCHLNN___c__DisplayClass0_0_TypeDefinitionIndex = 73027;

	class JKMPIOCHLNN___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Button* button; // 0x10
		::System::Action_1<::System::Object*>* cb; // 0x18
		::System::Object* cbp; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMPIOCHLNN___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _Bind_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMPIOCHLNN___C__DISPLAYCLASS0_0__BIND_B__0_OFFSET))(this);
		}

	};
