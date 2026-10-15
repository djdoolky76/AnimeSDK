#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define OKPOIJDJFFD___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C57AD80)
#define OKPOIJDJFFD___C__DISPLAYCLASS0_0__APPLY_B__0_OFFSET UNITYSDK_OFFSET(0x1C57B040)

inline static constexpr unsigned int OKPOIJDJFFD___c__DisplayClass0_0_TypeDefinitionIndex = 41662;

	class OKPOIJDJFFD___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector2Int pivot; // 0x10
		::RPG::Client::MechCraft::MechCraftRotationType rotation; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPOIJDJFFD___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2Int _Apply_b__0(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + OKPOIJDJFFD___C__DISPLAYCLASS0_0__APPLY_B__0_OFFSET))(this, a1);
		}

	};
