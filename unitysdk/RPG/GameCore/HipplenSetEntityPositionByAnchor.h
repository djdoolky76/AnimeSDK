#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameTargetType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenSetEntityPositionByAnchor; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENSETENTITYPOSITIONBYANCHOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D741FB0)
#define RPG_GAMECORE_HIPPLENSETENTITYPOSITIONBYANCHOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D741FC0)
#define RPG_GAMECORE_HIPPLENSETENTITYPOSITIONBYANCHOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D741F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenSetEntityPositionByAnchor_TypeDefinitionIndex = 21317;

	class HipplenSetEntityPositionByAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::HipplenGameTargetType Target; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* Param; // 0x20
		::System::String* AnchorName; // 0x28
		::System::Boolean ToGround; // 0x30
		::System::Byte _padding1[0x3];
		::RPG::MVector3 Offset; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENSETENTITYPOSITIONBYANCHOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenSetEntityPositionByAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenSetEntityPositionByAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENSETENTITYPOSITIONBYANCHOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenSetEntityPositionByAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenSetEntityPositionByAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENSETENTITYPOSITIONBYANCHOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
