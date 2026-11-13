#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DrinkMakerCheersTagUIState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class DrinkMakerTag; }
namespace RPG::GameCore { class DrinkMakerTagCombinationRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_CLEARINGREDIENTS_OFFSET UNITYSDK_OFFSET(0x17BAD920)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_CTOR_OFFSET UNITYSDK_OFFSET(0x17BACE00)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GETALLSUBTAGFINISHSTATE_OFFSET UNITYSDK_OFFSET(0x17BADA00)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GETCHEERSUISTATE_OFFSET UNITYSDK_OFFSET(0x17BADA50)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_HASHINT_OFFSET UNITYSDK_OFFSET(0x17BADE60)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_HINTICONPATH_OFFSET UNITYSDK_OFFSET(0x17BADF30)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_HINTTEXT_OFFSET UNITYSDK_OFFSET(0x17BADD90)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ID_OFFSET UNITYSDK_OFFSET(0x17BADE00)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISINGREDIENTSTAG_OFFSET UNITYSDK_OFFSET(0x17BAE0F0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISSUCCESSLASTACTION_OFFSET UNITYSDK_OFFSET(0x17BADE40)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x17BAD550)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_MIXTAG_OFFSET UNITYSDK_OFFSET(0x17BADE20)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_REQUESTDESC_OFFSET UNITYSDK_OFFSET(0x17BADEB0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_RESET_OFFSET UNITYSDK_OFFSET(0x17BAD970)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ID_OFFSET UNITYSDK_OFFSET(0x17BADE10)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISINGREDIENTSTAG_OFFSET UNITYSDK_OFFSET(0x17BAE100)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISSUCCESSLASTACTION_OFFSET UNITYSDK_OFFSET(0x17BADE50)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x17BAD8C0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_MIXTAG_OFFSET UNITYSDK_OFFSET(0x17BADE30)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION_VERIFY_OFFSET UNITYSDK_OFFSET(0x17BAD1E0)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION__HASHINT_OFFSET UNITYSDK_OFFSET(0x17BADC90)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION__INIT_OFFSET UNITYSDK_OFFSET(0x17BACE40)
#define RPG_CLIENT_DRINKMAKERTAGCOMBINATION__VERIFYSUBTAGS_OFFSET UNITYSDK_OFFSET(0x17BAD590)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerTagCombination_TypeDefinitionIndex = 65080;

	class DrinkMakerTagCombination : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerTagCombinationRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::System::Boolean>* _IsSubTagRequestFinished; // 0x18
		::RPG::Client::DrinkMakerTag* _MixTag_k__BackingField; // 0x20
		::System::Boolean _IsSuccessLastAction_k__BackingField; // 0x28
		::System::Boolean CanPlayFinishEff; // 0x29
		::System::Byte _padding0[0x2];
		::System::UInt32 _ID_k__BackingField; // 0x2C
		::System::Boolean _IsIngredientsTag_k__BackingField; // 0x30
		::System::Boolean _IsSuccess; // 0x31
		::System::Boolean _HasAnyAction; // 0x32
		::System::Boolean _IsShownTag; // 0x33
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_CTOR_OFFSET))(this, a1);
		}

		::System::Void Verify(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_VERIFY_OFFSET))(this, a1, a2);
		}

		::System::Void ClearIngredients()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_CLEARINGREDIENTS_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_RESET_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Boolean>* GetAllSubTagFinishState()
		{
			return ((::System::Collections::Generic::List_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GETALLSUBTAGFINISHSTATE_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerCheersTagUIState GetCheersUIState()
		{
			return ((::RPG::Client::DrinkMakerCheersTagUIState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GETCHEERSUISTATE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION__INIT_OFFSET))(this);
		}

		::System::Void _VerifySubTags(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION__VERIFYSUBTAGS_OFFSET))(this, a1);
		}

		::System::Boolean _HasHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION__HASHINT_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerTag* get_MixTag()
		{
			return ((::RPG::Client::DrinkMakerTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_MIXTAG_OFFSET))(this);
		}

		::System::Void set_MixTag(::RPG::Client::DrinkMakerTag* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_MIXTAG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Void set_IsSuccess(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISSUCCESS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSuccessLastAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISSUCCESSLASTACTION_OFFSET))(this);
		}

		::System::Void set_IsSuccessLastAction(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISSUCCESSLASTACTION_OFFSET))(this, a1);
		}

		::System::Boolean get_HasHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_HASHINT_OFFSET))(this);
		}

		::RPG::Client::TextID get_RequestDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_REQUESTDESC_OFFSET))(this);
		}

		::System::String* get_HintText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_HINTTEXT_OFFSET))(this);
		}

		::System::String* get_HintIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_HINTICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsIngredientsTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_GET_ISINGREDIENTSTAG_OFFSET))(this);
		}

		::System::Void set_IsIngredientsTag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAGCOMBINATION_SET_ISINGREDIENTSTAG_OFFSET))(this, a1);
		}

	};
}
