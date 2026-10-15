#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityEvolveGearForgeMaterialRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D32D940)
#define RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D32C290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEvolveGearForgeMaterialRow_TypeDefinitionIndex = 11406;

	class ActivityEvolveGearForgeMaterialRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CostGearList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* MaterialGearList; // 0x18
		::System::UInt32 ForgeGearID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEGEARFORGEMATERIALROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
