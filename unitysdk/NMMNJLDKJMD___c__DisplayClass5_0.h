#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NMMNJLDKJMD;
namespace System { class Action; }
namespace System { class String; }

#define NMMNJLDKJMD___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBC8E3B0)
#define NMMNJLDKJMD___C__DISPLAYCLASS5_0__SWITCHAREA_B__0_OFFSET UNITYSDK_OFFSET(0xBC8F270)

inline static constexpr unsigned int NMMNJLDKJMD___c__DisplayClass5_0_TypeDefinitionIndex = 75471;

	class NMMNJLDKJMD___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::NMMNJLDKJMD* __4__this; // 0x10
		::System::Action* onFinish; // 0x18
		::System::String* areaPath; // 0x20
		::UnityEngine::Vector3 position; // 0x28
		::UnityEngine::Quaternion rotation; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _SwitchArea_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD___C__DISPLAYCLASS5_0__SWITCHAREA_B__0_OFFSET))(this);
		}

	};
