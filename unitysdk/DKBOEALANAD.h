#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimGarbageBinBakedMoveConfig; }
namespace UnityEngine { class BoxCollider; }

#define DKBOEALANAD_OLCEGJIKDAL_OFFSET UNITYSDK_OFFSET(0xF24FE50)

inline static constexpr unsigned int DKBOEALANAD_TypeDefinitionIndex = 77177;

	class DKBOEALANAD : public ::System::Object
	{
	public:
		static ::System::Void OLCEGJIKDAL(::UnityEngine::BoxCollider* a1, ::System::Single a2, ::System::Boolean a3, ::RPG::GameCore::FiveDimGarbageBinBakedMoveConfig* a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::UnityEngine::BoxCollider*, ::System::Single, ::System::Boolean, ::RPG::GameCore::FiveDimGarbageBinBakedMoveConfig*, ::System::Single))((::PBYTE)hIl2Cpp + DKBOEALANAD_OLCEGJIKDAL_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
