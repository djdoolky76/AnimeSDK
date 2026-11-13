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
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define EJOKHBOJHNA_ADD_AGENDACOMPLETED_OFFSET UNITYSDK_OFFSET(0x1997D780)
#define EJOKHBOJHNA_ANELIPPLCFA_OFFSET UNITYSDK_OFFSET(0x1997D990)
#define EJOKHBOJHNA_APNHKKNJCPA_OFFSET UNITYSDK_OFFSET(0x1997D730)
#define EJOKHBOJHNA_BGIALOABHHB_OFFSET UNITYSDK_OFFSET(0x1997E360)
#define EJOKHBOJHNA_BJFIIIGMEJG_OFFSET UNITYSDK_OFFSET(0x1997D6E0)
#define EJOKHBOJHNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1997D840)
#define EJOKHBOJHNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1997DF10)
#define EJOKHBOJHNA_EMOMELIMGEE_OFFSET UNITYSDK_OFFSET(0x1997EC60)
#define EJOKHBOJHNA_FGDEFEANFHJ_OFFSET UNITYSDK_OFFSET(0x1997E0E0)
#define EJOKHBOJHNA_FHOCMIDOLKD_OFFSET UNITYSDK_OFFSET(0x1997F220)
#define EJOKHBOJHNA_GAPCBNFPHAL_OFFSET UNITYSDK_OFFSET(0x1997E030)
#define EJOKHBOJHNA_GDJPDEGBAFL_OFFSET UNITYSDK_OFFSET(0x1997DB40)
#define EJOKHBOJHNA_HFHBKINEDAM_OFFSET UNITYSDK_OFFSET(0x1997F360)
#define EJOKHBOJHNA_JBECNCPLEAM_OFFSET UNITYSDK_OFFSET(0x1997EE50)
#define EJOKHBOJHNA_KJCEELKNCJG_OFFSET UNITYSDK_OFFSET(0x1997E7A0)
#define EJOKHBOJHNA_LEGODONNFCD_OFFSET UNITYSDK_OFFSET(0x1997D860)
#define EJOKHBOJHNA_OPBNCBJGFEI_OFFSET UNITYSDK_OFFSET(0x1997E170)
#define EJOKHBOJHNA_REMOVE_AGENDACOMPLETED_OFFSET UNITYSDK_OFFSET(0x1997D7E0)

inline static constexpr unsigned int EJOKHBOJHNA_TypeDefinitionIndex = 84627;

	class EJOKHBOJHNA : public ::System::Object
	{
	public:
		::EOIDGOCDJIH* KIHHIOMBIMJ; // 0x10
		::System::Action_1<::BFGMJKEJPNA*>* AgendaCompleted; // 0x18
		::BFGMJKEJPNA* LKLLCAPNOIA; // 0x20
		::OJHMEHAHDNI* JDGBDKHIEGG; // 0x28
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

		::System::Void add_AgendaCompleted(::System::Action_1<::BFGMJKEJPNA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::BFGMJKEJPNA*>*))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_ADD_AGENDACOMPLETED_OFFSET))(this, a1);
		}

		::System::Void remove_AgendaCompleted(::System::Action_1<::BFGMJKEJPNA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::BFGMJKEJPNA*>*))((::PBYTE)hIl2Cpp + EJOKHBOJHNA_REMOVE_AGENDACOMPLETED_OFFSET))(this, a1);
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
