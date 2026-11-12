#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define MDJKOJJFBNA_CLEAR_OFFSET UNITYSDK_OFFSET(0xC15C690)
#define MDJKOJJFBNA_CTOR_OFFSET UNITYSDK_OFFSET(0xC15C6E0)

inline static constexpr unsigned int MDJKOJJFBNA_TypeDefinitionIndex = 58291;

	class MDJKOJJFBNA : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* OICNIIBMFLK; // 0x10
		::RPG::GameCore::GameEntity* FMBKMMFOPIL; // 0x18
		::RPG::GameCore::AdventureMoveOnNavMeshFaceToType OGMHHHNEEGI; // 0x20
		::System::Single GCJMFBKLGHI; // 0x24
		::System::Single MLINDPFAGFJ; // 0x28
		::System::Single JMPPNFDHDPJ; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJKOJJFBNA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJKOJJFBNA_CLEAR_OFFSET))(this);
		}

	};
