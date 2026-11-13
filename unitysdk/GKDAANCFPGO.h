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

#define GKDAANCFPGO_AIKBNOMDKAO_OFFSET UNITYSDK_OFFSET(0x1AA3D710)
#define GKDAANCFPGO_BLNCFDKFHCO_OFFSET UNITYSDK_OFFSET(0x1AA53160)
#define GKDAANCFPGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA3CE70)
#define GKDAANCFPGO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA528C0)
#define GKDAANCFPGO_ECIJJGIHGNJ_OFFSET UNITYSDK_OFFSET(0x1AA53120)
#define GKDAANCFPGO_EONPIKKPLLA_OFFSET UNITYSDK_OFFSET(0x1AA53080)
#define GKDAANCFPGO_GAHIJOOEMFF_OFFSET UNITYSDK_OFFSET(0x1AA52A30)
#define GKDAANCFPGO_GJBOGLBHNME_OFFSET UNITYSDK_OFFSET(0x1AA414B0)
#define GKDAANCFPGO_GKCGGHOBKAO_OFFSET UNITYSDK_OFFSET(0x1AA3CFF0)
#define GKDAANCFPGO_HMONCHDAHIO_OFFSET UNITYSDK_OFFSET(0x1AA3D2A0)
#define GKDAANCFPGO_HPCNMNHCJGF_OFFSET UNITYSDK_OFFSET(0x1AA53770)
#define GKDAANCFPGO_JAENAEMJIOC_OFFSET UNITYSDK_OFFSET(0x1AA52C10)
#define GKDAANCFPGO_JBGEPANIEHJ_OFFSET UNITYSDK_OFFSET(0x1AA3E6F0)
#define GKDAANCFPGO_JKCIKLEIAHO_OFFSET UNITYSDK_OFFSET(0x1AA53750)
#define GKDAANCFPGO_KHOCDMLJIAJ_OFFSET UNITYSDK_OFFSET(0x1AA3D130)
#define GKDAANCFPGO_KJFDAGBDCNP_OFFSET UNITYSDK_OFFSET(0x1AA529E0)
#define GKDAANCFPGO_LBHFJFNFHMP_OFFSET UNITYSDK_OFFSET(0x1AA530D0)
#define GKDAANCFPGO_LCMIDBBBOGG_OFFSET UNITYSDK_OFFSET(0x1AA536C0)
#define GKDAANCFPGO_LHKAIFBMDFO_OFFSET UNITYSDK_OFFSET(0x1AA53020)
#define GKDAANCFPGO_LLFKCLGGENH_OFFSET UNITYSDK_OFFSET(0x1AA52970)
#define GKDAANCFPGO_LNDJJFIKDKH_OFFSET UNITYSDK_OFFSET(0x1AA53350)
#define GKDAANCFPGO_LNKFDPNJMBC_OFFSET UNITYSDK_OFFSET(0x1AA53520)
#define GKDAANCFPGO_MCGLFLAMOON_OFFSET UNITYSDK_OFFSET(0x1AA40F60)
#define GKDAANCFPGO_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1AA53740)
#define GKDAANCFPGO_NFANNGGMHAI_OFFSET UNITYSDK_OFFSET(0x1AA3DE30)
#define GKDAANCFPGO_OBAOGFHPPFC_OFFSET UNITYSDK_OFFSET(0x1AA52E40)
#define GKDAANCFPGO_ONIPLEMHAME_OFFSET UNITYSDK_OFFSET(0x1AA531A0)
#define GKDAANCFPGO_PBDNAIDEIPK_OFFSET UNITYSDK_OFFSET(0x1AA41260)
#define GKDAANCFPGO_PKIGEGFNMDL_OFFSET UNITYSDK_OFFSET(0x1AA53760)

inline static constexpr unsigned int GKDAANCFPGO_TypeDefinitionIndex = 37901;

	class GKDAANCFPGO : public ::System::Object
	{
	public:
		::System::String* GIDAEFPOGHI; // 0x10
		::System::Collections::Generic::List_1<::MGPEJKEMDPK*>* APNODHKMMOI; // 0x18
		::RPG::GameCore::StateTreeSelectStateConfig* JCMGIAANDEE; // 0x20
		::PAPOPANPGIJ* DDDNLILNMKA; // 0x28
		::GCEBGLLMGPE* HDMEPPFFIDK; // 0x30
		::DJPBAKPBELL* PPDIOBBDINN; // 0x38
		::Il2CppArray<::System::Int32>* JEBHIOKIHCM; // 0x40
		::GKDAANCFPGO* CFJGFJOJEBG; // 0x48
		::System::Collections::Generic::List_1<::GKDAANCFPGO*>* CBMJMBHHHJO; // 0x50
		::System::Collections::Generic::List_1<::DJPBAKPBELL*>* IFMDBDJCCCI; // 0x58
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
