#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }

#define IDMGCEJLKLL_CTOR_OFFSET UNITYSDK_OFFSET(0x15ED0120)

inline static constexpr unsigned int IDMGCEJLKLL_TypeDefinitionIndex = 60836;

	class IDMGCEJLKLL : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* HNJDDEBIPBK; // 0x10
		::UnityEngine::Vector3 ACGINICEHML; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMGCEJLKLL_CTOR_OFFSET))(this);
		}

	};
