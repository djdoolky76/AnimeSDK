#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFindNpc.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PhotoGraphSetSingleTargetUniqueName; }

#define RPG_GAMECORE_PHOTOGRAPHSETSINGLETARGETUNIQUENAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E31A0)
#define RPG_GAMECORE_PHOTOGRAPHSETSINGLETARGETUNIQUENAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E31B0)
#define RPG_GAMECORE_PHOTOGRAPHSETSINGLETARGETUNIQUENAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E4D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphSetSingleTargetUniqueName_TypeDefinitionIndex = 21626;

	class PhotoGraphSetSingleTargetUniqueName : public ::RPG::GameCore::PhotoGraphFindNpc
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETSINGLETARGETUNIQUENAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETSINGLETARGETUNIQUENAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETSINGLETARGETUNIQUENAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
