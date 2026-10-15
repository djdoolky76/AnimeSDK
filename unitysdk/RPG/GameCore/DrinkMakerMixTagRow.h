#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerMixTagRow; }

#define RPG_GAMECORE_DRINKMAKERMIXTAGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F5090)
#define RPG_GAMECORE_DRINKMAKERMIXTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5F4B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerMixTagRow_TypeDefinitionIndex = 13160;

	class DrinkMakerMixTagRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x10
		::System::UInt32 TagID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERMIXTAGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerMixTagRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerMixTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERMIXTAGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
