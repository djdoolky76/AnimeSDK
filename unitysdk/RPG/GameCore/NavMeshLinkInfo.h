#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NavMeshLinkInfo; }

#define RPG_GAMECORE_NAVMESHLINKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D5770)
#define RPG_GAMECORE_NAVMESHLINKINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8D5510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NavMeshLinkInfo_TypeDefinitionIndex = 17313;

	class NavMeshLinkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 StartPoint; // 0x10
		::RPG::MVector3 EndPoint; // 0x1C
		::System::Single Width; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMESHLINKINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NavMeshLinkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NavMeshLinkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMESHLINKINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
