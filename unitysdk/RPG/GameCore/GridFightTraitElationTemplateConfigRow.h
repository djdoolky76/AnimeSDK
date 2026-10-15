#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitElationTemplateConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTTRAITELATIONTEMPLATECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D747800)
#define RPG_GAMECORE_GRIDFIGHTTRAITELATIONTEMPLATECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7475D0)

namespace RPG::GameCore
{
	class GridFightTraitElationTemplateConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FirstRecommendEquipList; // 0x10
		::Il2CppArray<::System::UInt32>* SecondRecommendEquipList; // 0x18
		::Il2CppArray<::System::UInt32>* PreEquipList; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 Weight; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITELATIONTEMPLATECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTraitElationTemplateConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTraitElationTemplateConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITELATIONTEMPLATECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
