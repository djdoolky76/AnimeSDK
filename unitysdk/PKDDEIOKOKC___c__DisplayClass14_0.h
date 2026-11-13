#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }

#define PKDDEIOKOKC___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0x147B6740)
#define PKDDEIOKOKC___C__DISPLAYCLASS14_0___OFFSETMODELWHENREADY_B__0_OFFSET UNITYSDK_OFFSET(0x147B70C0)

inline static constexpr unsigned int PKDDEIOKOKC___c__DisplayClass14_0_TypeDefinitionIndex = 61492;

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
