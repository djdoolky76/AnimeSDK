#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshMoveCalcType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }

#define FCPLIDBPDHJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x156D01A0)
#define FCPLIDBPDHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x156D0200)

	class FCPLIDBPDHJ : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* FMBKMMFOPIL; // 0x10
		::RPG::GameCore::AdventureMoveOnNavMeshFaceToType OGMHHHNEEGI; // 0x18
		::System::Single GCJMFBKLGHI; // 0x1C
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x20
		::RPG::GameCore::AdventureMoveOnNavMeshMoveCalcType HPOPKKLENGD; // 0x2C
		::System::Single IEHPFADHJFD; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLIDBPDHJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLIDBPDHJ_CLEAR_OFFSET))(this);
		}

	};
