#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define MHJCAPNMMFM_CTOR_OFFSET UNITYSDK_OFFSET(0xB93D780)
#define MHJCAPNMMFM_FMNFMLKMHHL_OFFSET UNITYSDK_OFFSET(0xB93DB60)
#define MHJCAPNMMFM_GET_CURACTION_OFFSET UNITYSDK_OFFSET(0xB93DBA0)
#define MHJCAPNMMFM_GET_ISCURACTIONRUNNING_OFFSET UNITYSDK_OFFSET(0xB93DBE0)
#define MHJCAPNMMFM_GET_MAXACTION_OFFSET UNITYSDK_OFFSET(0xB93DBC0)
#define MHJCAPNMMFM_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB93D7E0)
#define MHJCAPNMMFM_LIHPGEGGBEL_OFFSET UNITYSDK_OFFSET(0xB93D830)
#define MHJCAPNMMFM_SET_CURACTION_OFFSET UNITYSDK_OFFSET(0xB93DBB0)
#define MHJCAPNMMFM_SET_ISCURACTIONRUNNING_OFFSET UNITYSDK_OFFSET(0xB93DBF0)
#define MHJCAPNMMFM_SET_MAXACTION_OFFSET UNITYSDK_OFFSET(0xB93DBD0)

inline static constexpr unsigned int MHJCAPNMMFM_TypeDefinitionIndex = 57640;

	class MHJCAPNMMFM : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedAbilityComponent* MPDAPCBPBIE; // 0x10
		::System::Int32 _CurAction_k__BackingField; // 0x18
		::System::Boolean _IsCurActionRunning_k__BackingField; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 _MaxAction_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + MHJCAPNMMFM_CTOR_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJCAPNMMFM_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void LIHPGEGGBEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJCAPNMMFM_LIHPGEGGBEL_OFFSET))(this);
		}

		::System::Void FMNFMLKMHHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJCAPNMMFM_FMNFMLKMHHL_OFFSET))(this);
		}

		::System::Int32 get_CurAction()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJCAPNMMFM_GET_CURACTION_OFFSET))(this);
		}

		::System::Void set_CurAction(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MHJCAPNMMFM_SET_CURACTION_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxAction()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJCAPNMMFM_GET_MAXACTION_OFFSET))(this);
		}

		::System::Void set_MaxAction(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MHJCAPNMMFM_SET_MAXACTION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCurActionRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJCAPNMMFM_GET_ISCURACTIONRUNNING_OFFSET))(this);
		}

		::System::Void set_IsCurActionRunning(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHJCAPNMMFM_SET_ISCURACTIONRUNNING_OFFSET))(this, a1);
		}

	};
