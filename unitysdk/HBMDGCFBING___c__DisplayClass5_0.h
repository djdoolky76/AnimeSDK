#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBMDGCFBING;
class KHPOKIKCOFO;
class PLAGENLANML;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define HBMDGCFBING___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A22B0)
#define HBMDGCFBING___C__DISPLAYCLASS5_0__LOADASSETASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B7A2AD0)

inline static constexpr unsigned int HBMDGCFBING___c__DisplayClass5_0_TypeDefinitionIndex = 78825;

	class HBMDGCFBING___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::HBMDGCFBING* __4__this; // 0x10
		::PLAGENLANML* contexts; // 0x18
		::System::String* asset; // 0x20
		::KHPOKIKCOFO* entity; // 0x28
		::System::Action* callback; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMDGCFBING___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _LoadAssetAsync_b__0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HBMDGCFBING___C__DISPLAYCLASS5_0__LOADASSETASYNC_B__0_OFFSET))(this, a1);
		}

	};
