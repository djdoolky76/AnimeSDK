#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TaskState.h"
#include "unitysdk/System/Object.h"
class DJPBAKPBELL;
class GCEBGLLMGPE;
class GKDAANCFPGO;
class MGPEJKEMDPK;
class PAPOPANPGIJ;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class STTaskConfig; }
namespace RPG::GameCore { class StateTreeSelectStateConfig; }
namespace RPG::GameCore { class StateTreeStateBaseConfig; }
namespace RPG::GameCore { class StateTreeTransitionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKDAANCFPGO_AIKBNOMDKAO_OFFSET UNITYSDK_OFFSET(0x1C600610)
#define GKDAANCFPGO_BLNCFDKFHCO_OFFSET UNITYSDK_OFFSET(0x1C615890)
#define GKDAANCFPGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FFD70)
#define GKDAANCFPGO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C614FC0)
#define GKDAANCFPGO_ECIJJGIHGNJ_OFFSET UNITYSDK_OFFSET(0x1C615850)
#define GKDAANCFPGO_EONPIKKPLLA_OFFSET UNITYSDK_OFFSET(0x1C6157B0)
#define GKDAANCFPGO_GAHIJOOEMFF_OFFSET UNITYSDK_OFFSET(0x1C615130)
#define GKDAANCFPGO_GJBOGLBHNME_OFFSET UNITYSDK_OFFSET(0x1C603B90)
#define GKDAANCFPGO_GKCGGHOBKAO_OFFSET UNITYSDK_OFFSET(0x1C5FFEF0)
#define GKDAANCFPGO_HMONCHDAHIO_OFFSET UNITYSDK_OFFSET(0x1C6001A0)
#define GKDAANCFPGO_HPCNMNHCJGF_OFFSET UNITYSDK_OFFSET(0x1C615EA0)
#define GKDAANCFPGO_JAENAEMJIOC_OFFSET UNITYSDK_OFFSET(0x1C615310)
#define GKDAANCFPGO_JBGEPANIEHJ_OFFSET UNITYSDK_OFFSET(0x1C6015E0)
#define GKDAANCFPGO_JKCIKLEIAHO_OFFSET UNITYSDK_OFFSET(0x1C615E80)
#define GKDAANCFPGO_KHOCDMLJIAJ_OFFSET UNITYSDK_OFFSET(0x1C600030)
#define GKDAANCFPGO_KJFDAGBDCNP_OFFSET UNITYSDK_OFFSET(0x1C6150E0)
#define GKDAANCFPGO_LBHFJFNFHMP_OFFSET UNITYSDK_OFFSET(0x1C615800)
#define GKDAANCFPGO_LCMIDBBBOGG_OFFSET UNITYSDK_OFFSET(0x1C615DF0)
#define GKDAANCFPGO_LHKAIFBMDFO_OFFSET UNITYSDK_OFFSET(0x1C615750)
#define GKDAANCFPGO_LLFKCLGGENH_OFFSET UNITYSDK_OFFSET(0x1C615070)
#define GKDAANCFPGO_LNDJJFIKDKH_OFFSET UNITYSDK_OFFSET(0x1C615A80)
#define GKDAANCFPGO_LNKFDPNJMBC_OFFSET UNITYSDK_OFFSET(0x1C615C50)
#define GKDAANCFPGO_MCGLFLAMOON_OFFSET UNITYSDK_OFFSET(0x1C6035E0)
#define GKDAANCFPGO_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1C615E70)
#define GKDAANCFPGO_NFANNGGMHAI_OFFSET UNITYSDK_OFFSET(0x1C600D30)
#define GKDAANCFPGO_OBAOGFHPPFC_OFFSET UNITYSDK_OFFSET(0x1C615570)
#define GKDAANCFPGO_ONIPLEMHAME_OFFSET UNITYSDK_OFFSET(0x1C6158D0)
#define GKDAANCFPGO_PBDNAIDEIPK_OFFSET UNITYSDK_OFFSET(0x1C603940)
#define GKDAANCFPGO_PKIGEGFNMDL_OFFSET UNITYSDK_OFFSET(0x1C615E90)

inline static constexpr unsigned int GKDAANCFPGO_TypeDefinitionIndex = 36973;

	class GKDAANCFPGO : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* JEBHIOKIHCM; // 0x10
		::System::Collections::Generic::List_1<::DJPBAKPBELL*>* IFMDBDJCCCI; // 0x18
		::DJPBAKPBELL* PPDIOBBDINN; // 0x20
		::System::String* GIDAEFPOGHI; // 0x28
		::System::Collections::Generic::List_1<::GKDAANCFPGO*>* CBMJMBHHHJO; // 0x30
		::System::Collections::Generic::List_1<::MGPEJKEMDPK*>* APNODHKMMOI; // 0x38
		::PAPOPANPGIJ* DDDNLILNMKA; // 0x40
		::RPG::GameCore::StateTreeSelectStateConfig* JCMGIAANDEE; // 0x48
		::GCEBGLLMGPE* HDMEPPFFIDK; // 0x50
		::GKDAANCFPGO* CFJGFJOJEBG; // 0x58
		::System::Int32 ILBBFEMHLKA; // 0x60
		::System::Int32 AIDDCDNADEC; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_DISPOSE_OFFSET))(this);
		}

		::System::Void NFANNGGMHAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_NFANNGGMHAI_OFFSET))(this);
		}

		::System::Void LLFKCLGGENH(::RPG::GameCore::PredicateConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PredicateConfig*))((::PBYTE)hIl2Cpp + GKDAANCFPGO_LLFKCLGGENH_OFFSET))(this, a1);
		}

		::System::Void KJFDAGBDCNP(::RPG::GameCore::StateTreeSelectStateConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StateTreeSelectStateConfig*))((::PBYTE)hIl2Cpp + GKDAANCFPGO_KJFDAGBDCNP_OFFSET))(this, a1);
		}

		::System::Void GKCGGHOBKAO(::Il2CppArray<::RPG::GameCore::STTaskConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::STTaskConfig*>*))((::PBYTE)hIl2Cpp + GKDAANCFPGO_GKCGGHOBKAO_OFFSET))(this, a1);
		}

		::System::Void KHOCDMLJIAJ(::Il2CppArray<::RPG::GameCore::StateTreeTransitionConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StateTreeTransitionConfig*>*))((::PBYTE)hIl2Cpp + GKDAANCFPGO_KHOCDMLJIAJ_OFFSET))(this, a1);
		}

		::System::Void HMONCHDAHIO(::Il2CppArray<::RPG::GameCore::StateTreeStateBaseConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StateTreeStateBaseConfig*>*))((::PBYTE)hIl2Cpp + GKDAANCFPGO_HMONCHDAHIO_OFFSET))(this, a1);
		}

		::System::Void GAHIJOOEMFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_GAHIJOOEMFF_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::TaskState JAENAEMJIOC(::System::Single a1)
		{
			return ((::RPG::Client::LittleGameShare::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKDAANCFPGO_JAENAEMJIOC_OFFSET))(this, a1);
		}

		::System::Void OBAOGFHPPFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_OBAOGFHPPFC_OFFSET))(this);
		}

		::System::Void AIKBNOMDKAO(::GCEBGLLMGPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCEBGLLMGPE*))((::PBYTE)hIl2Cpp + GKDAANCFPGO_AIKBNOMDKAO_OFFSET))(this, a1);
		}

		::System::Boolean LHKAIFBMDFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_LHKAIFBMDFO_OFFSET))(this);
		}

		::GKDAANCFPGO* JBGEPANIEHJ()
		{
			return ((::GKDAANCFPGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_JBGEPANIEHJ_OFFSET))(this);
		}

		::GKDAANCFPGO* PBDNAIDEIPK()
		{
			return ((::GKDAANCFPGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_PBDNAIDEIPK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MGPEJKEMDPK*>* GJBOGLBHNME()
		{
			return ((::System::Collections::Generic::List_1<::MGPEJKEMDPK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_GJBOGLBHNME_OFFSET))(this);
		}

		::System::Int32 EONPIKKPLLA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_EONPIKKPLLA_OFFSET))(this);
		}

		::System::Int32 LBHFJFNFHMP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_LBHFJFNFHMP_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::TaskState MCGLFLAMOON()
		{
			return ((::RPG::Client::LittleGameShare::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_MCGLFLAMOON_OFFSET))(this);
		}

		::System::String* ECIJJGIHGNJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_ECIJJGIHGNJ_OFFSET))(this);
		}

		::System::String* BLNCFDKFHCO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_BLNCFDKFHCO_OFFSET))(this);
		}

		::System::Void ONIPLEMHAME(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GKDAANCFPGO_ONIPLEMHAME_OFFSET))(this, a1, a2);
		}

		::System::Void LNDJJFIKDKH(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + GKDAANCFPGO_LNDJJFIKDKH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AIVariable* LNKFDPNJMBC(::System::String* a1)
		{
			return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GKDAANCFPGO_LNKFDPNJMBC_OFFSET))(this, a1);
		}

		::System::Boolean LCMIDBBBOGG(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GKDAANCFPGO_LCMIDBBBOGG_OFFSET))(this, a1);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_MLMGEFIOION_OFFSET))(this);
		}

		::GKDAANCFPGO* JKCIKLEIAHO()
		{
			return ((::GKDAANCFPGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_JKCIKLEIAHO_OFFSET))(this);
		}

		::GCEBGLLMGPE* PKIGEGFNMDL()
		{
			return ((::GCEBGLLMGPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_PKIGEGFNMDL_OFFSET))(this);
		}

		::System::Int32 HPCNMNHCJGF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDAANCFPGO_HPCNMNHCJGF_OFFSET))(this);
		}

	};
