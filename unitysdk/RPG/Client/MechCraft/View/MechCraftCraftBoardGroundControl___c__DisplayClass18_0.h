#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE0506D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS18_0___ONTUTORIALTARGETCELLSCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0xE053840)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS18_0___ONTUTORIALTARGETCELLSCHANGED_B__1_OFFSET UNITYSDK_OFFSET(0xE053980)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftBoardGroundControl___c__DisplayClass18_0_TypeDefinitionIndex = 82623;

	class MechCraftCraftBoardGroundControl___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* oldCells; // 0x10
		::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* newCells; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnTutorialTargetCellsChanged_b__0(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS18_0___ONTUTORIALTARGETCELLSCHANGED_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __OnTutorialTargetCellsChanged_b__1(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___C__DISPLAYCLASS18_0___ONTUTORIALTARGETCELLSCHANGED_B__1_OFFSET))(this, a1);
		}

	};
}
