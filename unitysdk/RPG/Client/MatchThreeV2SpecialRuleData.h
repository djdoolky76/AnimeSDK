#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class MatchThreeV2SpecialRuleData; }
namespace RPG::GameCore { class MatchThreeV2SpecialRuleRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_CREATEBYCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x1D720BC0)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D70D010)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D720B70)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1D720AB0)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D720A10)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1D7209A0)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_RULEID_OFFSET UNITYSDK_OFFSET(0x1D720A00)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1D720B80)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2SpecialRuleData_TypeDefinitionIndex = 67936;

	class MatchThreeV2SpecialRuleData : public ::System::Object
	{
	public:
		::System::UInt32 _RuleID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::MatchThreeV2SpecialRuleRow* get_Row()
		{
			return ((::RPG::GameCore::MatchThreeV2SpecialRuleRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_RuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_RULEID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_DESC_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2SpecialRuleData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2SpecialRuleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_CREATE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2SpecialRuleData*>* CreateByConstValue(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2SpecialRuleData*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_CREATEBYCONSTVALUE_OFFSET))(a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_INIT_OFFSET))(this);
		}

	};
}
