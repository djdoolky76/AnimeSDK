#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LimaoNewsDutyCheckOptionTalkInfo; }
namespace RPG::Client::LimaoNews { class LimaoNewsEmployeeCheckData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFBPMGMFPLG___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0x176CAA10)
#define KFBPMGMFPLG___C__DISPLAYCLASS13_0__BUILDDISPLAYOPTIONS_B__1_OFFSET UNITYSDK_OFFSET(0x176CE4A0)
#define KFBPMGMFPLG___C__DISPLAYCLASS13_0__BUILDDISPLAYOPTIONS_G__ISELIGIBLE_0_OFFSET UNITYSDK_OFFSET(0x176CAEF0)

inline static constexpr unsigned int KFBPMGMFPLG___c__DisplayClass13_0_TypeDefinitionIndex = 83090;

	class KFBPMGMFPLG___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* selectedToday; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* data; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPMGMFPLG___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildDisplayOptions_g__IsEligible_0(::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*))((::PBYTE)hIl2Cpp + KFBPMGMFPLG___C__DISPLAYCLASS13_0__BUILDDISPLAYOPTIONS_G__ISELIGIBLE_0_OFFSET))(this, a1);
		}

		::System::Boolean _BuildDisplayOptions_b__1(::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*))((::PBYTE)hIl2Cpp + KFBPMGMFPLG___C__DISPLAYCLASS13_0__BUILDDISPLAYOPTIONS_B__1_OFFSET))(this, a1);
		}

	};
