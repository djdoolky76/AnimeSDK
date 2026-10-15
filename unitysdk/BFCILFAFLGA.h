#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OANLHANJEII.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelSpatialIntVec2; }

#define BFCILFAFLGA_CTOR_OFFSET UNITYSDK_OFFSET(0xB15F9D0)
#define BFCILFAFLGA_GET_COOKEDGRIDLIST_OFFSET UNITYSDK_OFFSET(0xB15FC50)
#define BFCILFAFLGA_GET_LOWERUPPERBOUNDS_OFFSET UNITYSDK_OFFSET(0xB15FC70)
#define BFCILFAFLGA_JPEADKICOKB_OFFSET UNITYSDK_OFFSET(0xB15F9E0)
#define BFCILFAFLGA_SET_COOKEDGRIDLIST_OFFSET UNITYSDK_OFFSET(0xB15FC60)
#define BFCILFAFLGA_SET_LOWERUPPERBOUNDS_OFFSET UNITYSDK_OFFSET(0xB15FC80)

inline static constexpr unsigned int BFCILFAFLGA_TypeDefinitionIndex = 62076;

	class BFCILFAFLGA : public ::System::Object
	{
	public:
		::OANLHANJEII LCPBNMNGFDG; // 0x10
		::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>* _CookedGridList_k__BackingField; // 0x20
		::RPG::GameCore::LevelSpatialIntVec2* _LowerUpperBounds_k__BackingField; // 0x28
		::System::Void _ctor(::OANLHANJEII a1)
		{
			return ((::System::Void(*)(::PVOID, ::OANLHANJEII))((::PBYTE)hIl2Cpp + BFCILFAFLGA_CTOR_OFFSET))(this, a1);
		}

		::System::Void JPEADKICOKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCILFAFLGA_JPEADKICOKB_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>* get_CookedGridList()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCILFAFLGA_GET_COOKEDGRIDLIST_OFFSET))(this);
		}

		::System::Void set_CookedGridList(::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>*))((::PBYTE)hIl2Cpp + BFCILFAFLGA_SET_COOKEDGRIDLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelSpatialIntVec2* get_LowerUpperBounds()
		{
			return ((::RPG::GameCore::LevelSpatialIntVec2*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCILFAFLGA_GET_LOWERUPPERBOUNDS_OFFSET))(this);
		}

		::System::Void set_LowerUpperBounds(::RPG::GameCore::LevelSpatialIntVec2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSpatialIntVec2*))((::PBYTE)hIl2Cpp + BFCILFAFLGA_SET_LOWERUPPERBOUNDS_OFFSET))(this, a1);
		}

	};
