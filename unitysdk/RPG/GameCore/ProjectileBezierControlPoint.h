#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ProjectileBezierControlPoint; }

#define RPG_GAMECORE_PROJECTILEBEZIERCONTROLPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9156A0)
#define RPG_GAMECORE_PROJECTILEBEZIERCONTROLPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D915570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProjectileBezierControlPoint_TypeDefinitionIndex = 15652;

	class ProjectileBezierControlPoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Ratio; // 0x10
		::System::Single Height; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILEBEZIERCONTROLPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ProjectileBezierControlPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ProjectileBezierControlPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILEBEZIERCONTROLPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
