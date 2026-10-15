#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightStageRouteConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D717900)
#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D717230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightStageRouteConfigRow_TypeDefinitionIndex = 13613;

	class GridFightStageRouteConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 NodeTemplateID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 ChapterID; // 0x18
		::System::UInt32 SectionID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightStageRouteConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightStageRouteConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
