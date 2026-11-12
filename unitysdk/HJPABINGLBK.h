#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/ERacingMatchFlowState.h"
#include "unitysdk/System/Object.h"

#define HJPABINGLBK_AOFLJBPLDGD_OFFSET UNITYSDK_OFFSET(0x16C88680)
#define HJPABINGLBK_BDJJBJFAPCO_OFFSET UNITYSDK_OFFSET(0x16C88400)
#define HJPABINGLBK_CEHODKOOCHD_OFFSET UNITYSDK_OFFSET(0x16C888A0)
#define HJPABINGLBK_CINAIBHNOHK_OFFSET UNITYSDK_OFFSET(0x16C88490)
#define HJPABINGLBK_CTOR_OFFSET UNITYSDK_OFFSET(0x16C88C10)
#define HJPABINGLBK_DFCNFMKGOJL_OFFSET UNITYSDK_OFFSET(0x16C88B70)
#define HJPABINGLBK_DKCGMELFLEI_OFFSET UNITYSDK_OFFSET(0x16C885F0)
#define HJPABINGLBK_EMBDHBMPLJB_OFFSET UNITYSDK_OFFSET(0x16C88AA0)
#define HJPABINGLBK_GET_STATEBEFOREPAUSE_OFFSET UNITYSDK_OFFSET(0x16C883E0)
#define HJPABINGLBK_GET_STATE_OFFSET UNITYSDK_OFFSET(0x16C883C0)
#define HJPABINGLBK_HIPBDGLDCCI_OFFSET UNITYSDK_OFFSET(0x16C88940)
#define HJPABINGLBK_IPBDBIMPMMB_OFFSET UNITYSDK_OFFSET(0x16C88800)
#define HJPABINGLBK_JDBOMPKNHML_OFFSET UNITYSDK_OFFSET(0x16C885A0)
#define HJPABINGLBK_KBFLNGNOHHN_OFFSET UNITYSDK_OFFSET(0x16C88500)
#define HJPABINGLBK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16C88A00)
#define HJPABINGLBK_LJBCHIAFBPI_OFFSET UNITYSDK_OFFSET(0x16C88710)
#define HJPABINGLBK_LNMDKGJNIHN_OFFSET UNITYSDK_OFFSET(0x16C88760)
#define HJPABINGLBK_MCFKNNCOKKM_OFFSET UNITYSDK_OFFSET(0x16C889A0)
#define HJPABINGLBK_MFFHGHLBAOM_OFFSET UNITYSDK_OFFSET(0x16C88A50)
#define HJPABINGLBK_OKEBKPKKDJD_OFFSET UNITYSDK_OFFSET(0x16C88BC0)
#define HJPABINGLBK_PFFDCHCDIBC_OFFSET UNITYSDK_OFFSET(0x16C88AF0)
#define HJPABINGLBK_SET_STATEBEFOREPAUSE_OFFSET UNITYSDK_OFFSET(0x16C883F0)
#define HJPABINGLBK_SET_STATE_OFFSET UNITYSDK_OFFSET(0x16C883D0)

inline static constexpr unsigned int HJPABINGLBK_TypeDefinitionIndex = 84650;

	class HJPABINGLBK : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::ERacingMatchFlowState _State_k__BackingField; // 0x10
		::RPG::Client::B51Racing::ERacingMatchFlowState _StateBeforePause_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_CTOR_OFFSET))(this);
		}

		::RPG::Client::B51Racing::ERacingMatchFlowState get_State()
		{
			return ((::RPG::Client::B51Racing::ERacingMatchFlowState(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::B51Racing::ERacingMatchFlowState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::ERacingMatchFlowState))((::PBYTE)hIl2Cpp + HJPABINGLBK_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::ERacingMatchFlowState get_StateBeforePause()
		{
			return ((::RPG::Client::B51Racing::ERacingMatchFlowState(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_GET_STATEBEFOREPAUSE_OFFSET))(this);
		}

		::System::Void set_StateBeforePause(::RPG::Client::B51Racing::ERacingMatchFlowState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::ERacingMatchFlowState))((::PBYTE)hIl2Cpp + HJPABINGLBK_SET_STATEBEFOREPAUSE_OFFSET))(this, a1);
		}

		::System::Boolean BDJJBJFAPCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_BDJJBJFAPCO_OFFSET))(this);
		}

		::System::Boolean KBFLNGNOHHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_KBFLNGNOHHN_OFFSET))(this);
		}

		::System::Boolean JDBOMPKNHML()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_JDBOMPKNHML_OFFSET))(this);
		}

		::System::Boolean AOFLJBPLDGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_AOFLJBPLDGD_OFFSET))(this);
		}

		::System::Boolean LNMDKGJNIHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_LNMDKGJNIHN_OFFSET))(this);
		}

		::System::Boolean IPBDBIMPMMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_IPBDBIMPMMB_OFFSET))(this);
		}

		::System::Boolean CEHODKOOCHD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_CEHODKOOCHD_OFFSET))(this);
		}

		::System::Boolean HIPBDGLDCCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_HIPBDGLDCCI_OFFSET))(this);
		}

		::System::Boolean MCFKNNCOKKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_MCFKNNCOKKM_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean MFFHGHLBAOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_MFFHGHLBAOM_OFFSET))(this);
		}

		::System::Boolean EMBDHBMPLJB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_EMBDHBMPLJB_OFFSET))(this);
		}

		::System::Boolean LJBCHIAFBPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_LJBCHIAFBPI_OFFSET))(this);
		}

		::System::Boolean PFFDCHCDIBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_PFFDCHCDIBC_OFFSET))(this);
		}

		::System::Boolean OKEBKPKKDJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPABINGLBK_OKEBKPKKDJD_OFFSET))(this);
		}

		static ::System::Boolean DFCNFMKGOJL(::RPG::Client::B51Racing::ERacingMatchFlowState a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::B51Racing::ERacingMatchFlowState))((::PBYTE)hIl2Cpp + HJPABINGLBK_DFCNFMKGOJL_OFFSET))(a1);
		}

		::System::Boolean CINAIBHNOHK(::RPG::Client::B51Racing::ERacingMatchFlowState a1, ::RPG::Client::B51Racing::ERacingMatchFlowState a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::B51Racing::ERacingMatchFlowState, ::RPG::Client::B51Racing::ERacingMatchFlowState, ::System::Boolean))((::PBYTE)hIl2Cpp + HJPABINGLBK_CINAIBHNOHK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DKCGMELFLEI(::RPG::Client::B51Racing::ERacingMatchFlowState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::B51Racing::ERacingMatchFlowState))((::PBYTE)hIl2Cpp + HJPABINGLBK_DKCGMELFLEI_OFFSET))(this, a1);
		}

	};
