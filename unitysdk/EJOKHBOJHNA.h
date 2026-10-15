#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPICFNLLMCO.h"
#include "unitysdk/System/Object.h"
class AJPBKMBIGNC;
class BFGMJKEJPNA;
class EOIDGOCDJIH;
class HBFPEEPJOPK;
class IDCOJJANCCK;
class OJHMEHAHDNI;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Object; }

#define EJOKHBOJHNA_ADD_AGENDACOMPLETED_OFFSET UNITYSDK_OFFSET(0x154F4340)
#define EJOKHBOJHNA_ANELIPPLCFA_OFFSET UNITYSDK_OFFSET(0x154F4550)
#define EJOKHBOJHNA_APNHKKNJCPA_OFFSET UNITYSDK_OFFSET(0x154F42F0)
#define EJOKHBOJHNA_BGIALOABHHB_OFFSET UNITYSDK_OFFSET(0x154F4F20)
#define EJOKHBOJHNA_BJFIIIGMEJG_OFFSET UNITYSDK_OFFSET(0x154F42A0)
#define EJOKHBOJHNA_CTOR_OFFSET UNITYSDK_OFFSET(0x154F4400)
#define EJOKHBOJHNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154F4AD0)
#define EJOKHBOJHNA_EMOMELIMGEE_OFFSET UNITYSDK_OFFSET(0x154F5820)
#define EJOKHBOJHNA_FGDEFEANFHJ_OFFSET UNITYSDK_OFFSET(0x154F4CA0)
#define EJOKHBOJHNA_FHOCMIDOLKD_OFFSET UNITYSDK_OFFSET(0x154F5DE0)
#define EJOKHBOJHNA_GAPCBNFPHAL_OFFSET UNITYSDK_OFFSET(0x154F4BF0)
#define EJOKHBOJHNA_GDJPDEGBAFL_OFFSET UNITYSDK_OFFSET(0x154F4700)
#define EJOKHBOJHNA_HFHBKINEDAM_OFFSET UNITYSDK_OFFSET(0x154F5F20)
#define EJOKHBOJHNA_JBECNCPLEAM_OFFSET UNITYSDK_OFFSET(0x154F5A10)
#define EJOKHBOJHNA_KJCEELKNCJG_OFFSET UNITYSDK_OFFSET(0x154F5360)
#define EJOKHBOJHNA_LEGODONNFCD_OFFSET UNITYSDK_OFFSET(0x154F4420)
#define EJOKHBOJHNA_OPBNCBJGFEI_OFFSET UNITYSDK_OFFSET(0x154F4D30)
#define EJOKHBOJHNA_REMOVE_AGENDACOMPLETED_OFFSET UNITYSDK_OFFSET(0x154F43A0)

	class EJOKHBOJHNA : public ::System::Object
	{
	public:
		::BFGMJKEJPNA* LKLLCAPNOIA; // 0x10
		::EOIDGOCDJIH* KIHHIOMBIMJ; // 0x18
		::OJHMEHAHDNI* JDGBDKHIEGG; // 0x20
		::System::Action* AgendaCompleted; // 0x28
		::System::UInt32 HBFKNAKIJCF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_CTOR_OFFSET))(this);
		}

		::System::UInt32 BJFIIIGMEJG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_BJFIIIGMEJG_OFFSET))(this);
		}

		::System::UInt32 APNHKKNJCPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_APNHKKNJCPA_OFFSET))(this);
		}

		::System::Void add_AgendaCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_ADD_AGENDACOMPLETED_OFFSET))(this, a1);
		}

		::System::Void remove_AgendaCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_REMOVE_AGENDACOMPLETED_OFFSET))(this, a1);
		}

		static ::OJHMEHAHDNI* LEGODONNFCD()
		{
			return ((::OJHMEHAHDNI*(*)())((::PBYTE)hIl2Cpp + EJOKHBOJHNA_LEGODONNFCD_OFFSET))();
		}

		::System::Void ANELIPPLCFA(::AJPBKMBIGNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJPBKMBIGNC*))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_ANELIPPLCFA_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_DISPOSE_OFFSET))(this);
		}

		::System::Void GDJPDEGBAFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_GDJPDEGBAFL_OFFSET))(this);
		}

		::IDCOJJANCCK* GAPCBNFPHAL()
		{
			return ((::IDCOJJANCCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_GAPCBNFPHAL_OFFSET))(this);
		}

		::System::Void FGDEFEANFHJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_FGDEFEANFHJ_OFFSET))(this, a1);
		}

		::System::Void OPBNCBJGFEI(::HPICFNLLMCO a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPICFNLLMCO))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_OPBNCBJGFEI_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* BGIALOABHHB(::HBFPEEPJOPK* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::HBFPEEPJOPK*))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_BGIALOABHHB_OFFSET))(this, a1);
		}

		::System::Void EMOMELIMGEE(::BFGMJKEJPNA* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::BFGMJKEJPNA*, ::System::UInt32))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_EMOMELIMGEE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* KJCEELKNCJG(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_KJCEELKNCJG_OFFSET))(this, a1, a2);
		}

		::System::Void FHOCMIDOLKD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_FHOCMIDOLKD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* JBECNCPLEAM(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_JBECNCPLEAM_OFFSET))(this, a1);
		}

		::System::Void HFHBKINEDAM(::BFGMJKEJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFGMJKEJPNA*))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_HFHBKINEDAM_OFFSET))(this, a1);
		}

	};
