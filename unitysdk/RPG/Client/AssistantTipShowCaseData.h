#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistantShowCaseType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AssistantTipShowCaseData; }
namespace RPG::GameCore { class AssistantTipsShowCaseRow; }

#define RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCFFD300)
#define RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCFFD380)
#define RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xCFFD390)
#define RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_GET_SHOWCASETYPE_OFFSET UNITYSDK_OFFSET(0xCFFCF60)
#define RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_GET_TIPIDLIST_OFFSET UNITYSDK_OFFSET(0xCFFD000)
#define RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xCFFD3B0)
#define RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xCFFD3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssistantTipShowCaseData_TypeDefinitionIndex = 63851;

	class AssistantTipShowCaseData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AssistantTipShowCaseData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::AssistantTipShowCaseData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::AssistantShowCaseType get_ShowCaseType()
		{
			return ((::RPG::GameCore::AssistantShowCaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_GET_SHOWCASETYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TipIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_GET_TIPIDLIST_OFFSET))(this);
		}

		::RPG::GameCore::AssistantTipsShowCaseRow* get__Row()
		{
			return ((::RPG::GameCore::AssistantTipsShowCaseRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_GET__ROW_OFFSET))(this);
		}

	};
}
