#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define MHJCAPNMMFM_CTOR_OFFSET UNITYSDK_OFFSET(0xB9437D0)
#define MHJCAPNMMFM_FMNFMLKMHHL_OFFSET UNITYSDK_OFFSET(0xB943BB0)
#define MHJCAPNMMFM_GET_CURACTION_OFFSET UNITYSDK_OFFSET(0xB943BF0)
#define MHJCAPNMMFM_GET_ISCURACTIONRUNNING_OFFSET UNITYSDK_OFFSET(0xB943C30)
#define MHJCAPNMMFM_GET_MAXACTION_OFFSET UNITYSDK_OFFSET(0xB943C10)
#define MHJCAPNMMFM_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB943830)
#define MHJCAPNMMFM_LIHPGEGGBEL_OFFSET UNITYSDK_OFFSET(0xB943880)
#define MHJCAPNMMFM_SET_CURACTION_OFFSET UNITYSDK_OFFSET(0xB943C00)
#define MHJCAPNMMFM_SET_ISCURACTIONRUNNING_OFFSET UNITYSDK_OFFSET(0xB943C40)
#define MHJCAPNMMFM_SET_MAXACTION_OFFSET UNITYSDK_OFFSET(0xB943C20)

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
