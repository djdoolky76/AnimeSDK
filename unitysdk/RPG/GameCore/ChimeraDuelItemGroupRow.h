#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelItemGroupRow; }

#define RPG_GAMECORE_CHIMERADUELITEMGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5756D0)
#define RPG_GAMECORE_CHIMERADUELITEMGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D575590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelItemGroupRow_TypeDefinitionIndex = 11143;

	class ChimeraDuelItemGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ItemIDList; // 0x10
		::System::UInt32 ItemGroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELITEMGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelItemGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelItemGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELITEMGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
