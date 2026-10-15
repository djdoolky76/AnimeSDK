#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKFGFDBMKHL;
class FCOEMCEDLNL;
namespace RPG::GameCore { class GMAccountConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GMACCOUNTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F9290)
#define RPG_GAMECORE_GMACCOUNTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6F8ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GMAccountConfigRow_TypeDefinitionIndex = 13338;

	class GMAccountConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ItemGroupIDList; // 0x10
		::Il2CppArray<::System::UInt32>* EquipmentGroupIDList; // 0x18
		::System::String* Name; // 0x20
		::Il2CppArray<::DKFGFDBMKHL*>* AvatarList; // 0x28
		::Il2CppArray<::System::UInt32>* FinishMainMissionList; // 0x30
		::Il2CppArray<::System::UInt32>* RelicGroupIDList; // 0x38
		::System::Boolean IsFinishTutorial; // 0x40
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x44
		::System::UInt32 PlayerLevel; // 0x48
		::System::UInt32 FinishMainMissionUntil; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GMACCOUNTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GMAccountConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GMAccountConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GMACCOUNTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
