#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDMGLFNMFBD;
namespace UnityEngine { class GameObject; }

#define BDMGLFNMFBD___C__DISPLAYCLASS25_0_CTOR_OFFSET UNITYSDK_OFFSET(0x163019E0)
#define BDMGLFNMFBD___C__DISPLAYCLASS25_0___PLAYEFFECTONBRICK_B__0_OFFSET UNITYSDK_OFFSET(0x16302230)

	class BDMGLFNMFBD___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::BDMGLFNMFBD* __4__this; // 0x10
		::UnityEngine::GameObject* effect; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMGLFNMFBD___C__DISPLAYCLASS25_0_CTOR_OFFSET))(this);
		}

		::System::Void __PlayEffectOnBrick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMGLFNMFBD___C__DISPLAYCLASS25_0___PLAYEFFECTONBRICK_B__0_OFFSET))(this);
		}

	};
