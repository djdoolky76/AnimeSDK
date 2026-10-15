#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T> class Action_1; }

#define BANMMCONAFC___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15E7DA40)
#define BANMMCONAFC___C__DISPLAYCLASS14_0___DRAWLASER_B__0_OFFSET UNITYSDK_OFFSET(0x15E7DB80)

inline static constexpr unsigned int BANMMCONAFC___c__DisplayClass14_0_TypeDefinitionIndex = 77900;

	class BANMMCONAFC___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffect* effectInstance; // 0x10
		::System::Action_1<::UnityEngine::Vector3>* onHit; // 0x18
		::UnityEngine::Vector3 targetPos; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANMMCONAFC___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Void __DrawLaser_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANMMCONAFC___C__DISPLAYCLASS14_0___DRAWLASER_B__0_OFFSET))(this);
		}

	};
