#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DrinkMakerCheersFormulaRow; }

#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD6AB730)
#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_CUPID_OFFSET UNITYSDK_OFFSET(0xD6AF670)
#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_DECOID_OFFSET UNITYSDK_OFFSET(0xD6AF7B0)
#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_ICEID_OFFSET UNITYSDK_OFFSET(0xD6AF6C0)
#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_INGREDIENTLIST_OFFSET UNITYSDK_OFFSET(0xD6AF710)
#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_MIXLAYER_OFFSET UNITYSDK_OFFSET(0xD6AF760)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersDisplayData_TypeDefinitionIndex = 65059;

	class DrinkMakerCheersDisplayData : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerCheersFormulaRow* _Row; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_CupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_CUPID_OFFSET))(this);
		}

		::System::UInt32 get_IceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_ICEID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_IngredientList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_INGREDIENTLIST_OFFSET))(this);
		}

		::System::UInt32 get_MixLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_MIXLAYER_OFFSET))(this);
		}

		::System::UInt32 get_DecoId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_DECOID_OFFSET))(this);
		}

	};
}
