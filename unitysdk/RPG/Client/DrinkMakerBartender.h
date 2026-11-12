#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JALACKKFDEG;
class JPDFANKBJNO;
namespace RPG::Client { class DrinkMakerBartender_Cup; }
namespace RPG::Client { class DrinkMakerBartender_Decoration; }
namespace RPG::Client { class DrinkMakerBartender_Ice; }
namespace RPG::Client { class DrinkMakerBartender_Ingredient; }
namespace RPG::GameCore { class DrinkMakerLevelRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBARTENDER_CTOR_OFFSET UNITYSDK_OFFSET(0xD69E1B0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GETCUPS_OFFSET UNITYSDK_OFFSET(0xD69EEE0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GETCUP_OFFSET UNITYSDK_OFFSET(0xD69F480)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GETDECORATION_OFFSET UNITYSDK_OFFSET(0xD69F780)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GETICES_OFFSET UNITYSDK_OFFSET(0xD69F1B0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GETICE_OFFSET UNITYSDK_OFFSET(0xD69F580)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GETINGREDIENT_OFFSET UNITYSDK_OFFSET(0xD69F680)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_CUREXP_OFFSET UNITYSDK_OFFSET(0xD69F990)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_CURLEVELROW_OFFSET UNITYSDK_OFFSET(0xD69FB50)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_CURLEVEL_OFFSET UNITYSDK_OFFSET(0xD69F9B0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_LASTEXP_OFFSET UNITYSDK_OFFSET(0xD69F950)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_LASTLEVELROW_OFFSET UNITYSDK_OFFSET(0xD69FAF0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_LASTLEVEL_OFFSET UNITYSDK_OFFSET(0xD69F970)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xD69F9D0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_SET_CUREXP_OFFSET UNITYSDK_OFFSET(0xD69F9A0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_SET_CURLEVEL_OFFSET UNITYSDK_OFFSET(0xD69F9C0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_SET_LASTEXP_OFFSET UNITYSDK_OFFSET(0xD69F960)
#define RPG_CLIENT_DRINKMAKERBARTENDER_SET_LASTLEVEL_OFFSET UNITYSDK_OFFSET(0xD69F980)
#define RPG_CLIENT_DRINKMAKERBARTENDER_UPDATEDATA_1_OFFSET UNITYSDK_OFFSET(0xD69F8E0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xD69F880)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CREATECHEERSINGREDIENTS_OFFSET UNITYSDK_OFFSET(0xD69EC70)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CREATECUPS_OFFSET UNITYSDK_OFFSET(0xD69E270)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CREATEDECORATIONS_OFFSET UNITYSDK_OFFSET(0xD69E770)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CREATEICES_OFFSET UNITYSDK_OFFSET(0xD69E4F0)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CREATEINGREDIENTS_OFFSET UNITYSDK_OFFSET(0xD69E9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartender_TypeDefinitionIndex = 65043;

	class DrinkMakerBartender : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _AllDecorations; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _AllIngredients; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* _AllIces; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* _AllCups; // 0x28
		::System::UInt32 _CurExp_k__BackingField; // 0x30
		::System::UInt32 _LastExp_k__BackingField; // 0x34
		::System::UInt32 _LastLevel_k__BackingField; // 0x38
		::System::UInt32 _CurLevel_k__BackingField; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetCups()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GETCUPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetIces()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GETICES_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBartender_Cup* GetCup(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBartender_Cup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GETCUP_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBartender_Ice* GetIce(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBartender_Ice*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GETICE_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBartender_Ingredient* GetIngredient(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBartender_Ingredient*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GETINGREDIENT_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBartender_Decoration* GetDecoration(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBartender_Decoration*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GETDECORATION_OFFSET))(this, a1);
		}

		::System::Void UpdateData(::JPDFANKBJNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPDFANKBJNO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_UPDATEDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateData_1(::JALACKKFDEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JALACKKFDEG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_UPDATEDATA_1_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GET_LASTEXP_OFFSET))(this);
		}

		::System::Void set_LastExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_SET_LASTEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GET_LASTLEVEL_OFFSET))(this);
		}

		::System::Void set_LastLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_SET_LASTLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GET_CUREXP_OFFSET))(this);
		}

		::System::Void set_CurExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_SET_CUREXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GET_CURLEVEL_OFFSET))(this);
		}

		::System::Void set_CurLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_SET_CURLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GET_MAXLEVEL_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerLevelRow* get_LastLevelRow()
		{
			return ((::RPG::GameCore::DrinkMakerLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GET_LASTLEVELROW_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerLevelRow* get_CurLevelRow()
		{
			return ((::RPG::GameCore::DrinkMakerLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GET_CURLEVELROW_OFFSET))(this);
		}

		::System::Void _CreateCups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER__CREATECUPS_OFFSET))(this);
		}

		::System::Void _CreateIces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER__CREATEICES_OFFSET))(this);
		}

		::System::Void _CreateIngredients()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER__CREATEINGREDIENTS_OFFSET))(this);
		}

		::System::Void _CreateDecorations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER__CREATEDECORATIONS_OFFSET))(this);
		}

		::System::Void _CreateCheersIngredients()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER__CREATECHEERSINGREDIENTS_OFFSET))(this);
		}

	};
}
