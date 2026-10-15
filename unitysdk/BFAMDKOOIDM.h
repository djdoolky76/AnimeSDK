#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define BFAMDKOOIDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B88B0)

inline static constexpr unsigned int BFAMDKOOIDM_TypeDefinitionIndex = 43787;

	class BFAMDKOOIDM : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceCellType GDIGGOLJIBJ; // 0x10
		::UnityEngine::Vector3Int GOOAMHHLHPJ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAMDKOOIDM_CTOR_OFFSET))(this);
		}

	};
