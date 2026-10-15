#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceUIType.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/System/Object.h"
class BJIAFAFAFNE;
class DACLGPPLFMO;
namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJIAFAFAFNE_AGAJGCCMIGD_OFFSET UNITYSDK_OFFSET(0xB79E430)
#define BJIAFAFAFNE_APEBBLKOIDC_OFFSET UNITYSDK_OFFSET(0xB79EFE0)
#define BJIAFAFAFNE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB79E140)
#define BJIAFAFAFNE_CLOEINLFCNM_OFFSET UNITYSDK_OFFSET(0xB79E930)
#define BJIAFAFAFNE_CTOR_OFFSET UNITYSDK_OFFSET(0xB79E240)
#define BJIAFAFAFNE_DGMDIGIJPCF_OFFSET UNITYSDK_OFFSET(0xB79E7F0)
#define BJIAFAFAFNE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB79E2D0)
#define BJIAFAFAFNE_DPCOKBDIADP_OFFSET UNITYSDK_OFFSET(0xB79ECB0)
#define BJIAFAFAFNE_EAGFAMKHAKK_OFFSET UNITYSDK_OFFSET(0xB79EC70)
#define BJIAFAFAFNE_EGMALAELDGN_OFFSET UNITYSDK_OFFSET(0xB7A06D0)
#define BJIAFAFAFNE_EILJKMLAIPA_OFFSET UNITYSDK_OFFSET(0xB79FB60)
#define BJIAFAFAFNE_FAMDNNLNMLN_OFFSET UNITYSDK_OFFSET(0xB79F720)
#define BJIAFAFAFNE_FBGJLJIEDKL_OFFSET UNITYSDK_OFFSET(0xB79FF20)
#define BJIAFAFAFNE_FJKKLDGJKAN_OFFSET UNITYSDK_OFFSET(0xB79F760)
#define BJIAFAFAFNE_GNLDCCIMFIH_OFFSET UNITYSDK_OFFSET(0xB79E060)
#define BJIAFAFAFNE_ICEGNJONKIB_OFFSET UNITYSDK_OFFSET(0xB79DFB0)
#define BJIAFAFAFNE_IDLAKOHGICM_OFFSET UNITYSDK_OFFSET(0xB7A0110)
#define BJIAFAFAFNE_JBDNIGAEDKD_1_OFFSET UNITYSDK_OFFSET(0xB79E620)
#define BJIAFAFAFNE_JBDNIGAEDKD_OFFSET UNITYSDK_OFFSET(0xB79E4A0)
#define BJIAFAFAFNE_JKKGCHGOEGO_OFFSET UNITYSDK_OFFSET(0xB79EF70)
#define BJIAFAFAFNE_MEGDDCNFPLP_OFFSET UNITYSDK_OFFSET(0xB79FD00)
#define BJIAFAFAFNE_MICCLHLPAPD_OFFSET UNITYSDK_OFFSET(0xB79F3F0)
#define BJIAFAFAFNE_MIHMDJNHGFE_OFFSET UNITYSDK_OFFSET(0xB79EB90)
#define BJIAFAFAFNE_NEICDJIPNBA_OFFSET UNITYSDK_OFFSET(0xB79F7C0)
#define BJIAFAFAFNE_OJKEDBONHOM_OFFSET UNITYSDK_OFFSET(0xB79EE90)
#define BJIAFAFAFNE_PAKLIIEFFFO_OFFSET UNITYSDK_OFFSET(0xB79E5D0)
#define BJIAFAFAFNE_PJIPOLEPIGE_OFFSET UNITYSDK_OFFSET(0xB79E790)
#define BJIAFAFAFNE_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB79E320)
#define BJIAFAFAFNE__TRYASYNCSHOWUIFROMENTRANCE_B__28_0_OFFSET UNITYSDK_OFFSET(0xB7A0720)

	class BJIAFAFAFNE : public ::System::Object
	{
	public:
		::RPG::Client::Promises::IPromise* EJMEANAGOEE; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::CakeRace::CakeRaceUIType, ::RPG::Client::LuaUIGameFlowContext*>* CMEMEFOLKFL; // 0x18
		::RPG::Client::Promises::IPromise* CHPKBAIKLKH; // 0x20
		::RPG::Client::LuaUIGameFlowContext* IMPKDFFGLGM; // 0x28
		::RPG::Client::CakeRace::CakeRaceUIType ICIAMAFJPDA; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_CTOR_OFFSET))(this);
		}

		::RPG::Client::CakeRace::CakeRaceGameFlow* ICEGNJONKIB()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_ICEGNJONKIB_OFFSET))(this);
		}

		::DACLGPPLFMO* GNLDCCIMFIH()
		{
			return ((::DACLGPPLFMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_GNLDCCIMFIH_OFFSET))(this);
		}

		static ::BJIAFAFAFNE* BPLPBPMEODA()
		{
			return ((::BJIAFAFAFNE*(*)())((::PBYTE)hIl2Cpp + BJIAFAFAFNE_BPLPBPMEODA_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_DISPOSE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void PAKLIIEFFFO(::RPG::Client::LuaUIGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIGameFlowContext*))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_PAKLIIEFFFO_OFFSET))(this, a1);
		}

		::System::Boolean PJIPOLEPIGE(::RPG::Client::LuaUIGameFlowContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LuaUIGameFlowContext*))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_PJIPOLEPIGE_OFFSET))(this, a1);
		}

		::RPG::Client::LuaUIGameFlowContext* DGMDIGIJPCF(::RPG::Client::CakeRace::CakeRaceUIType a1)
		{
			return ((::RPG::Client::LuaUIGameFlowContext*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_DGMDIGIJPCF_OFFSET))(this, a1);
		}

		::RPG::Client::LuaUIGameFlowContext* CLOEINLFCNM(::RPG::Client::CakeRace::CakeRaceUIType a1)
		{
			return ((::RPG::Client::LuaUIGameFlowContext*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_CLOEINLFCNM_OFFSET))(this, a1);
		}

		::System::Void MIHMDJNHGFE(::RPG::Client::LuaUIGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIGameFlowContext*))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_MIHMDJNHGFE_OFFSET))(this, a1);
		}

		::System::Void JBDNIGAEDKD(::RPG::Client::CakeRace::CakeRaceUIType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_JBDNIGAEDKD_OFFSET))(this, a1);
		}

		::System::Void JBDNIGAEDKD_1(::RPG::Client::LuaUIGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIGameFlowContext*))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_JBDNIGAEDKD_1_OFFSET))(this, a1);
		}

		static ::System::String* EAGFAMKHAKK(::RPG::Client::CakeRace::CakeRaceUIType a1)
		{
			return ((::System::String*(*)(::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_EAGFAMKHAKK_OFFSET))(a1);
		}

		static ::System::String* DPCOKBDIADP(::RPG::Client::CakeRace::CakeRaceUIType a1)
		{
			return ((::System::String*(*)(::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_DPCOKBDIADP_OFFSET))(a1);
		}

		static ::RPG::Client::UILayer OJKEDBONHOM(::RPG::Client::CakeRace::CakeRaceUIType a1)
		{
			return ((::RPG::Client::UILayer(*)(::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_OJKEDBONHOM_OFFSET))(a1);
		}

		::RPG::Client::Promises::IPromise* JKKGCHGOEGO(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_JKKGCHGOEGO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* APEBBLKOIDC(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_APEBBLKOIDC_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* MICCLHLPAPD(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_MICCLHLPAPD_OFFSET))(this, a1, a2);
		}

		::System::Boolean FAMDNNLNMLN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_FAMDNNLNMLN_OFFSET))(this);
		}

		::System::Boolean FJKKLDGJKAN(::RPG::Client::CakeRace::CakeRaceUIType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_FJKKLDGJKAN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>* NEICDJIPNBA(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_NEICDJIPNBA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* EILJKMLAIPA(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_EILJKMLAIPA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>* MEGDDCNFPLP(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_MEGDDCNFPLP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* FBGJLJIEDKL(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_FBGJLJIEDKL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* IDLAKOHGICM(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_IDLAKOHGICM_OFFSET))(this, a1, a2);
		}

		::System::Void AGAJGCCMIGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_AGAJGCCMIGD_OFFSET))(this);
		}

		::System::Void EGMALAELDGN(::RPG::Client::CakeRace::CakeRaceUIType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + BJIAFAFAFNE_EGMALAELDGN_OFFSET))(this, a1);
		}

		::System::Void _TryAsyncShowUIFromEntrance_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE__TRYASYNCSHOWUIFROMENTRANCE_B__28_0_OFFSET))(this);
		}

	};
