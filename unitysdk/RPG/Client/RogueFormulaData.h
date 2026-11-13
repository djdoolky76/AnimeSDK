#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaCategory.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NDMAAFGJMJH.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class LEJFIEPMMGG;
class PBKPJIEKKDN;
namespace RPG::Client { class IRogueFormulaBuffCountItem; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueTournFormulaAeonIconRow; }
namespace RPG::GameCore { class RogueTournFormulaDisplayRow; }
namespace RPG::GameCore { class RogueTournFormulaRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define RPG_CLIENT_ROGUEFORMULADATA_CHECKISACTIVEWITHBUFFCHANGE_OFFSET UNITYSDK_OFFSET(0x1C7D5AD0)
#define RPG_CLIENT_ROGUEFORMULADATA_CREATEDISPLAYDATA_1_OFFSET UNITYSDK_OFFSET(0x1C7D5380)
#define RPG_CLIENT_ROGUEFORMULADATA_CREATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1C7D5220)
#define RPG_CLIENT_ROGUEFORMULADATA_CREATEGAMEPREVIEWDATA_OFFSET UNITYSDK_OFFSET(0x1C7CD5B0)
#define RPG_CLIENT_ROGUEFORMULADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C7D4E50)
#define RPG_CLIENT_ROGUEFORMULADATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D50E0)
#define RPG_CLIENT_ROGUEFORMULADATA_GETFORMULASORTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C7D5930)
#define RPG_CLIENT_ROGUEFORMULADATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C7D58A0)
#define RPG_CLIENT_ROGUEFORMULADATA_GETRARITYBGPATH_OFFSET UNITYSDK_OFFSET(0x1C7D61C0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1C7D5440)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_DESCPARAM_OFFSET UNITYSDK_OFFSET(0x1C7D65C0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C7D64A0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x1C7D6620)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_FORMULAID_OFFSET UNITYSDK_OFFSET(0x1C7D6230)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x1C7D59B0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_MAINAEONICONPATH_OFFSET UNITYSDK_OFFSET(0x1C7D53C0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_MAINBUFFCOUNTITEM_OFFSET UNITYSDK_OFFSET(0x1C7D5EC0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_MAINBUFFTYPE_OFFSET UNITYSDK_OFFSET(0x1C7D57E0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C7D6340)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_SHORTDESC_OFFSET UNITYSDK_OFFSET(0x1C7D6530)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_STORYJSONPATH_OFFSET UNITYSDK_OFFSET(0x1C7D69A0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_STORYTEXT_OFFSET UNITYSDK_OFFSET(0x1C7D6910)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_SUBAEONICONPATH_OFFSET UNITYSDK_OFFSET(0x1C7D55A0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_SUBBUFFCOUNTITEM_OFFSET UNITYSDK_OFFSET(0x1C7D6040)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_SUBBUFFTYPE_OFFSET UNITYSDK_OFFSET(0x1C7D5840)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0x1C7D6240)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_ULTIMATEAEONCARDICONPATH_OFFSET UNITYSDK_OFFSET(0x1C7D5760)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_ULTIMATEAEONICONPATH_OFFSET UNITYSDK_OFFSET(0x1C7D56E0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET__FORMULADISPLAYROW_OFFSET UNITYSDK_OFFSET(0x1C7D6840)
#define RPG_CLIENT_ROGUEFORMULADATA_GET__FORMULAROW_OFFSET UNITYSDK_OFFSET(0x1C7D62E0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET__MAINAEONICONROW_OFFSET UNITYSDK_OFFSET(0x1C7D54E0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET__MAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0x1C7D63D0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET__SUBAEONICONROW_OFFSET UNITYSDK_OFFSET(0x1C7D5620)
#define RPG_CLIENT_ROGUEFORMULADATA_ISCOMPOUNDFORMULA_OFFSET UNITYSDK_OFFSET(0x1C7D5FE0)
#define RPG_CLIENT_ROGUEFORMULADATA_ISFORMULAEXISTS_OFFSET UNITYSDK_OFFSET(0x1C7D4DF0)
#define RPG_CLIENT_ROGUEFORMULADATA_ISINITIALFORMULA_OFFSET UNITYSDK_OFFSET(0x1C7D6160)
#define RPG_CLIENT_ROGUEFORMULADATA_REFRESHBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7D5170)
#define RPG_CLIENT_ROGUEFORMULADATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x1C7D50F0)
#define RPG_CLIENT_ROGUEFORMULADATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C7D58E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaData_TypeDefinitionIndex = 69158;

	class RogueFormulaData : public ::System::Object
	{
	public:
		::PBKPJIEKKDN* _BuffCountData; // 0x10
		::System::UInt32 _FormulaID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_CTOR_OFFSET))(this, a1);
		}

		static ::System::Boolean IsFormulaExists(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_ISFORMULAEXISTS_OFFSET))(a1);
		}

		static ::RPG::Client::RogueFormulaData* Create(::LEJFIEPMMGG* a1, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a2)
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::LEJFIEPMMGG*, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueFormulaData* CreateDisplayData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_CREATEDISPLAYDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueFormulaData* CreateDisplayData_1(::NDMAAFGJMJH a1)
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::NDMAAFGJMJH))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_CREATEDISPLAYDATA_1_OFFSET))(a1);
		}

		static ::RPG::Client::RogueFormulaData* CreateGamePreviewData(::System::UInt32 a1, ::RPG::Client::RogueFormulaInfo* a2)
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::System::UInt32, ::RPG::Client::RogueFormulaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_CREATEGAMEPREVIEWDATA_OFFSET))(a1, a2);
		}

		::System::String* get_MainAeonIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_MAINAEONICONPATH_OFFSET))(this);
		}

		::System::String* get_SubAeonIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_SUBAEONICONPATH_OFFSET))(this);
		}

		::System::String* get_UltimateAeonIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_ULTIMATEAEONICONPATH_OFFSET))(this);
		}

		::System::String* get_UltimateAeonCardIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_ULTIMATEAEONCARDICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournFormulaAeonIconRow* get__MainAeonIconRow()
		{
			return ((::RPG::GameCore::RogueTournFormulaAeonIconRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET__MAINAEONICONROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournFormulaAeonIconRow* get__SubAeonIconRow()
		{
			return ((::RPG::GameCore::RogueTournFormulaAeonIconRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET__SUBAEONICONROW_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_TOSTRING_OFFSET))(this);
		}

		::System::Void Refresh(::LEJFIEPMMGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEJFIEPMMGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Void RefreshBuffCount(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_REFRESHBUFFCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetFormulaSortPriority(::System::Boolean a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GETFORMULASORTPRIORITY_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsActiveWithBuffChange(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_CHECKISACTIVEWITHBUFFCHANGE_OFFSET))(this, a1);
		}

		::System::Boolean IsInitialFormula()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_ISINITIALFORMULA_OFFSET))(this);
		}

		::System::Boolean IsCompoundFormula()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_ISCOMPOUNDFORMULA_OFFSET))(this);
		}

		::System::String* GetRarityBgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GETRARITYBGPATH_OFFSET))(this);
		}

		::System::UInt32 get_FormulaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_FORMULAID_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_TOURNMODE_OFFSET))(this);
		}

		::RPG::GameCore::RogueFormulaCategory get_Category()
		{
			return ((::RPG::GameCore::RogueFormulaCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_CATEGORY_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_ShortDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_SHORTDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParam()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_DESCPARAM_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_EXTRAEFFECTIDS_OFFSET))(this);
		}

		::RPG::Client::TextID get_StoryText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_STORYTEXT_OFFSET))(this);
		}

		::System::String* get_StoryJSONPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_STORYJSONPATH_OFFSET))(this);
		}

		::RPG::Client::IRogueFormulaBuffCountItem* get_MainBuffCountItem()
		{
			return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_MAINBUFFCOUNTITEM_OFFSET))(this);
		}

		::RPG::Client::IRogueFormulaBuffCountItem* get_SubBuffCountItem()
		{
			return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_SUBBUFFCOUNTITEM_OFFSET))(this);
		}

		::System::UInt32 get_MainBuffType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_MAINBUFFTYPE_OFFSET))(this);
		}

		::System::UInt32 get_SubBuffType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_SUBBUFFTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_ISACTIVATED_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournFormulaRow* get__FormulaRow()
		{
			return ((::RPG::GameCore::RogueTournFormulaRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET__FORMULAROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournFormulaDisplayRow* get__FormulaDisplayRow()
		{
			return ((::RPG::GameCore::RogueTournFormulaDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET__FORMULADISPLAYROW_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get__MazeBuffRow()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET__MAZEBUFFROW_OFFSET))(this);
		}

	};
}
