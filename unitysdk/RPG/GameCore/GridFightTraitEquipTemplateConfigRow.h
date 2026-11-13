#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitEquipTemplateConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTTRAITEQUIPTEMPLATECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA68C10)
#define RPG_GAMECORE_GRIDFIGHTTRAITEQUIPTEMPLATECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA68A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitEquipTemplateConfigRow_TypeDefinitionIndex = 13840;

	class GridFightTraitEquipTemplateConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EquipList; // 0x10
		::System::UInt32 TemplateID; // 0x18
		::System::UInt32 Weight; // 0x1C
		::System::UInt32 TraitID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITEQUIPTEMPLATECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTraitEquipTemplateConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTraitEquipTemplateConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITEQUIPTEMPLATECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
