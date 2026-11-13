#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSurfacePoint; }

#define RPG_GAMECORE_FIVEDIMSURFACEPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A6990)
#define RPG_GAMECORE_FIVEDIMSURFACEPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F7A5DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSurfacePoint_TypeDefinitionIndex = 16888;

	class FiveDimSurfacePoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Position; // 0x10
		::RPG::MVector3 Rotation; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACEPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSurfacePoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSurfacePoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACEPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
