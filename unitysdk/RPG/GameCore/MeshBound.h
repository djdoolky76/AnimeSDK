#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MeshBound; }

#define RPG_GAMECORE_MESHBOUND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D873BF0)
#define RPG_GAMECORE_MESHBOUND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D873970)

namespace RPG::GameCore
{
	class MeshBound : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 BoundType; // 0x10
		::RPG::MVector3 Center; // 0x14
		::RPG::MVector3 Size; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESHBOUND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MeshBound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MeshBound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESHBOUND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
