#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityMoveTrack; }

#define RPG_GAMECORE_ENTITYMOVETRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D64B900)
#define RPG_GAMECORE_ENTITYMOVETRACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D64B7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityMoveTrack_TypeDefinitionIndex = 20170;

	class EntityMoveTrack : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Offset; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMOVETRACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityMoveTrack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityMoveTrack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMOVETRACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
