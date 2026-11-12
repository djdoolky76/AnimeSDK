#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GuideRogueType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class HandbookRogueData; }
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class GuideRogueDataConfigRow; }
namespace RPG::GameCore { class GuideRogueTabRow; }

#define RPG_CLIENT_HANDBOOKROGUEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDD37400)
#define RPG_CLIENT_HANDBOOKROGUEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDD39300)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0xDD395F0)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xDD39520)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_ISENTRANCEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDD39640)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xDD386C0)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDD35B70)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDD39560)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_OPENCONDITIONS_OFFSET UNITYSDK_OFFSET(0xDD393F0)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xDD38710)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_RELATEDID_OFFSET UNITYSDK_OFFSET(0xDD36ED0)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xDD39540)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0xDD39310)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_TYPEROW_OFFSET UNITYSDK_OFFSET(0xDD395D0)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_UNLOCKCONDITIONS_OFFSET UNITYSDK_OFFSET(0xDD394D0)
#define RPG_CLIENT_HANDBOOKROGUEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xDD39530)
#define RPG_CLIENT_HANDBOOKROGUEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xDD39550)
#define RPG_CLIENT_HANDBOOKROGUEDATA_SET_TYPEROW_OFFSET UNITYSDK_OFFSET(0xDD395E0)
#define RPG_CLIENT_HANDBOOKROGUEDATA__ISOPENCONDTIONSATISFIED_OFFSET UNITYSDK_OFFSET(0xDD39360)
#define RPG_CLIENT_HANDBOOKROGUEDATA__ISUNLOCKCONDITIONSSATISFIED_OFFSET UNITYSDK_OFFSET(0xDD39440)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookRogueData_TypeDefinitionIndex = 67566;

	class HandbookRogueData : public ::System::Object
	{
	public:
		::RPG::GameCore::GuideRogueTabRow* _TypeRow_k__BackingField; // 0x10
		::RPG::GameCore::GuideRogueDataConfigRow* _Row_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::HandbookRogueData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::HandbookRogueData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_CREATE_OFFSET))(a1);
		}

		::System::Boolean _IsOpenCondtionSatisfied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA__ISOPENCONDTIONSATISFIED_OFFSET))(this);
		}

		::System::Boolean _IsUnlockConditionsSatisfied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA__ISUNLOCKCONDITIONSSATISFIED_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_TYPEID_OFFSET))(this);
		}

		::RPG::GameCore::GuideRogueDataConfigRow* get_Row()
		{
			return ((::RPG::GameCore::GuideRogueDataConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::GuideRogueDataConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GuideRogueDataConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_NAME_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ConditionParam*>* get_UnlockConditions()
		{
			return ((::Il2CppArray<::RPG::GameCore::ConditionParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_UNLOCKCONDITIONS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ConditionParam*>* get_OpenConditions()
		{
			return ((::Il2CppArray<::RPG::GameCore::ConditionParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_OPENCONDITIONS_OFFSET))(this);
		}

		::System::UInt32 get_RelatedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_RELATEDID_OFFSET))(this);
		}

		::RPG::GameCore::GuideRogueTabRow* get_TypeRow()
		{
			return ((::RPG::GameCore::GuideRogueTabRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_TYPEROW_OFFSET))(this);
		}

		::System::Void set_TypeRow(::RPG::GameCore::GuideRogueTabRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GuideRogueTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_SET_TYPEROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::GuideRogueType get_GuideType()
		{
			return ((::RPG::GameCore::GuideRogueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_GUIDETYPE_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsEntranceUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_ISENTRANCEUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_ISOPEN_OFFSET))(this);
		}

	};
}
