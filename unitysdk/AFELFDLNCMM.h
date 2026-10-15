#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class OFNAOANCMMA;
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFELFDLNCMM_CTOR_OFFSET UNITYSDK_OFFSET(0xCF08A10)
#define AFELFDLNCMM_DKCJEDAAOHE_OFFSET UNITYSDK_OFFSET(0xCF081F0)
#define AFELFDLNCMM_DPEMKIOGEPP_OFFSET UNITYSDK_OFFSET(0xCF07AC0)
#define AFELFDLNCMM_FAIJNPNILBA_OFFSET UNITYSDK_OFFSET(0xCF07A00)
#define AFELFDLNCMM_FANNDPICEBJ_OFFSET UNITYSDK_OFFSET(0xCF089C0)
#define AFELFDLNCMM_FEIHGKFLMGL_OFFSET UNITYSDK_OFFSET(0xCF08240)
#define AFELFDLNCMM_FKLBFEJDPIC_OFFSET UNITYSDK_OFFSET(0xCF08120)
#define AFELFDLNCMM_GEMCEPOFDLP_OFFSET UNITYSDK_OFFSET(0xCF088F0)
#define AFELFDLNCMM_GGCBBDCCMCP_OFFSET UNITYSDK_OFFSET(0xCF083E0)
#define AFELFDLNCMM_HLKLBKNLFFO_OFFSET UNITYSDK_OFFSET(0xCF08880)
#define AFELFDLNCMM_INIT_OFFSET UNITYSDK_OFFSET(0xCF06CC0)
#define AFELFDLNCMM_JLOILEJBOOM_OFFSET UNITYSDK_OFFSET(0xCF077F0)
#define AFELFDLNCMM_LHLEILFAGCI_OFFSET UNITYSDK_OFFSET(0xCF08460)
#define AFELFDLNCMM_LLKGFFDHPGE_OFFSET UNITYSDK_OFFSET(0xCF06FE0)
#define AFELFDLNCMM_MKDFOKALIMF_OFFSET UNITYSDK_OFFSET(0xCF07D20)
#define AFELFDLNCMM_OFBKIOEEMKE_OFFSET UNITYSDK_OFFSET(0xCF08730)
#define AFELFDLNCMM_OKBOCCICKEL_OFFSET UNITYSDK_OFFSET(0xCF086B0)
#define AFELFDLNCMM__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCF07650)
#define AFELFDLNCMM___ONADVENTUREPHASEENTERED_B__7_0_OFFSET UNITYSDK_OFFSET(0xCF08A30)

	class AFELFDLNCMM : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleTask*>* BOHHGNKMOHG; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::Client::ScheduleTask*>* IABMBEOKIPD; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* NAPAFJDJHMJ; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* CMNKMPCEHDE; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* NGNJFHPDKFC; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* DNBCEIAJKOK; // 0x38
		::System::Collections::Generic::HashSet_1<::OFNAOANCMMA*>* MCLEHAOABNK; // 0x40
		::System::Collections::Generic::HashSet_1<::System::UInt32>* JJBNGKNBBBF; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFELFDLNCMM_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFELFDLNCMM_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFELFDLNCMM__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void JLOILEJBOOM(::OFNAOANCMMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFNAOANCMMA*))((::PBYTE)hIl2Cpp + AFELFDLNCMM_JLOILEJBOOM_OFFSET))(this, a1);
		}

		::System::Void MKDFOKALIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFELFDLNCMM_MKDFOKALIMF_OFFSET))(this);
		}

		::System::Void LLKGFFDHPGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFELFDLNCMM_LLKGFFDHPGE_OFFSET))(this);
		}

		::System::Void FKLBFEJDPIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFELFDLNCMM_FKLBFEJDPIC_OFFSET))(this);
		}

		::System::Void DKCJEDAAOHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFELFDLNCMM_DKCJEDAAOHE_OFFSET))(this, a1);
		}

		::System::Void FEIHGKFLMGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFELFDLNCMM_FEIHGKFLMGL_OFFSET))(this, a1);
		}

		::System::Void GGCBBDCCMCP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFELFDLNCMM_GGCBBDCCMCP_OFFSET))(this, a1);
		}

		::System::Void OKBOCCICKEL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFELFDLNCMM_OKBOCCICKEL_OFFSET))(this, a1);
		}

		::System::Void OFBKIOEEMKE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFELFDLNCMM_OFBKIOEEMKE_OFFSET))(this, a1);
		}

		::System::Void LHLEILFAGCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFELFDLNCMM_LHLEILFAGCI_OFFSET))(this);
		}

		::System::Void FAIJNPNILBA(::RPG::GameCore::ConditionParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + AFELFDLNCMM_FAIJNPNILBA_OFFSET))(this, a1);
		}

		::System::Void DPEMKIOGEPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFELFDLNCMM_DPEMKIOGEPP_OFFSET))(this, a1);
		}

		::System::Void FANNDPICEBJ(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + AFELFDLNCMM_FANNDPICEBJ_OFFSET))(this, a1);
		}

		::System::Boolean HLKLBKNLFFO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFELFDLNCMM_HLKLBKNLFFO_OFFSET))(this, a1);
		}

		::System::Void GEMCEPOFDLP(::OFNAOANCMMA* a1, ::System::Boolean a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::OFNAOANCMMA*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + AFELFDLNCMM_GEMCEPOFDLP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __OnAdventurePhaseEntered_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFELFDLNCMM___ONADVENTUREPHASEENTERED_B__7_0_OFFSET))(this);
		}

	};
