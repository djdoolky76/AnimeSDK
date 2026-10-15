#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define BFAMDKOOIDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88A740)

inline static constexpr unsigned int BFAMDKOOIDM_TypeDefinitionIndex = 43787;

	class BFAMDKOOIDM : public ::System::Object
	{
	public:
		::UnityEngine::Vector3Int GOOAMHHLHPJ; // 0x10
		::RPG::GameCore::CakeRaceCellType GDIGGOLJIBJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAMDKOOIDM_CTOR_OFFSET))(this);
		}

	};
