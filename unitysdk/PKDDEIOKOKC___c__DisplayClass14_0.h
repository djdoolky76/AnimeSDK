#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }

#define PKDDEIOKOKC___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC2AB110)
#define PKDDEIOKOKC___C__DISPLAYCLASS14_0___OFFSETMODELWHENREADY_B__0_OFFSET UNITYSDK_OFFSET(0xC2ABA50)

inline static constexpr unsigned int PKDDEIOKOKC___c__DisplayClass14_0_TypeDefinitionIndex = 60208;

	class PKDDEIOKOKC___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 offset; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKDDEIOKOKC___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Void __OffsetModelWhenReady_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PKDDEIOKOKC___C__DISPLAYCLASS14_0___OFFSETMODELWHENREADY_B__0_OFFSET))(this, a1);
		}

	};
