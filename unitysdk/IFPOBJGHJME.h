#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/SmartObjectState.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectSlotGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define IFPOBJGHJME_CTOR_OFFSET UNITYSDK_OFFSET(0x1CADE9A0)

inline static constexpr unsigned int IFPOBJGHJME_TypeDefinitionIndex = 42080;

	class IFPOBJGHJME : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 NMELCPIOKNO; // 0x10
		::RPG::GameCore::LittleGameSmartObjectSlotGroup DBALOLNOLGL; // 0x1C
		::RPG::GameCore::LittleGameEntityType FJMDDKCCPMM; // 0x20
		::RPG::Client::LittleGame::SmartObjectState MEPFOEEGBEA; // 0x24
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPOBJGHJME_CTOR_OFFSET))(this);
		}

	};
