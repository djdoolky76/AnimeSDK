#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGFEAEDDJJO.h"
#include "unitysdk/OJACCBLPEPG_EStationOpenState.h"
#include "unitysdk/RPG/Client/Subway/EAirshipSubwayState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GDMNALCNPJE;
class SubwayScheduleData;
namespace RPG::Client::Subway { class AirlineSubwayWay; }
namespace RPG::Client::Subway { class AirshipSubway; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define IBMCNLIKBKL_AOIHLLDPJJJ_OFFSET UNITYSDK_OFFSET(0x15E31ED0)
#define IBMCNLIKBKL_BAPJCHKNDJJ_OFFSET UNITYSDK_OFFSET(0x15E33AB0)
#define IBMCNLIKBKL_BPEIKDPGCOF_OFFSET UNITYSDK_OFFSET(0x15E33A90)
#define IBMCNLIKBKL_CLEAR_OFFSET UNITYSDK_OFFSET(0x15E309D0)
#define IBMCNLIKBKL_CTOR_OFFSET UNITYSDK_OFFSET(0x15E33AC0)
#define IBMCNLIKBKL_DHKPEPMOPMK_OFFSET UNITYSDK_OFFSET(0x15E324F0)
#define IBMCNLIKBKL_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x15E30E40)
#define IBMCNLIKBKL_EEJFPHJHDNC_OFFSET UNITYSDK_OFFSET(0x15E31E10)
#define IBMCNLIKBKL_EFCDOALHGBP_OFFSET UNITYSDK_OFFSET(0x15E330E0)
#define IBMCNLIKBKL_EHAIPIPCLMC_OFFSET UNITYSDK_OFFSET(0x15E32E90)
#define IBMCNLIKBKL_EHDHFMKAKBG_OFFSET UNITYSDK_OFFSET(0x15E33260)
#define IBMCNLIKBKL_EHMDIEHGCMA_OFFSET UNITYSDK_OFFSET(0x15E332C0)
#define IBMCNLIKBKL_EMCGKOHMGJB_OFFSET UNITYSDK_OFFSET(0x15E30B50)
#define IBMCNLIKBKL_FCHALCIOKIF_OFFSET UNITYSDK_OFFSET(0x15E32BC0)
#define IBMCNLIKBKL_GOPOABFHJNP_OFFSET UNITYSDK_OFFSET(0x15E33550)
#define IBMCNLIKBKL_HHGNECAGCCA_OFFSET UNITYSDK_OFFSET(0x15E32940)
#define IBMCNLIKBKL_HOHCHDCFBKK_OFFSET UNITYSDK_OFFSET(0x15E33AA0)
#define IBMCNLIKBKL_IPIOEPLHCCB_OFFSET UNITYSDK_OFFSET(0x15E33040)
#define IBMCNLIKBKL_KAOOIDJKJPF_OFFSET UNITYSDK_OFFSET(0x15E33610)
#define IBMCNLIKBKL_KBDLECGPOCM_OFFSET UNITYSDK_OFFSET(0x15E33190)
#define IBMCNLIKBKL_KIJOIKEKELP_OFFSET UNITYSDK_OFFSET(0x15E31270)
#define IBMCNLIKBKL_KNCFEBNMBHO_OFFSET UNITYSDK_OFFSET(0x15E32F40)
#define IBMCNLIKBKL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15E30F80)
#define IBMCNLIKBKL_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x15E33A70)
#define IBMCNLIKBKL_MBLDBOMENIN_OFFSET UNITYSDK_OFFSET(0x15E31110)
#define IBMCNLIKBKL_MFMADCPNMIK_OFFSET UNITYSDK_OFFSET(0x15E33A80)
#define IBMCNLIKBKL_NBJFLGNEBED_OFFSET UNITYSDK_OFFSET(0x15E31F20)
#define IBMCNLIKBKL_OGMCGAMOBHM_OFFSET UNITYSDK_OFFSET(0x15E33940)
#define IBMCNLIKBKL_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15E31C60)

inline static constexpr unsigned int IBMCNLIKBKL_TypeDefinitionIndex = 82205;

	class IBMCNLIKBKL : public ::System::Object
	{
	public:
		::RPG::Client::Subway::AirlineSubwayWay* IEANOEDGILA; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* BGJEAKNHEOA; // 0x18
		::Il2CppArray<::System::Object*>* LFDCCIBBMNJ; // 0x20
		::Il2CppArray<::OGFEAEDDJJO>* GFFAGJOELCH; // 0x28
		::Il2CppArray<::System::Object*>* OMKLIKNIPMC; // 0x30
		::RPG::Client::Subway::AirshipSubway* PHHEJBKHBIE; // 0x38
		::GDMNALCNPJE* KGCNPIEDOCA; // 0x40
		::System::Single NIGJGBBHIHD; // 0x48
		::System::Boolean FPEAGEPKMMG; // 0x4C
		::System::Byte _padding0[0x3];
		::System::Single BGJJCINIDIB; // 0x50
		::System::Single OANDLMOGCAO; // 0x54
		::RPG::Client::Subway::EAirshipSubwayState DLNIGFGLPLJ; // 0x58
		::System::Single PHGEBGPLHAP; // 0x5C
		::System::Single AANLLNPJMPE; // 0x60
		// static const ::System::String* ADNDBEGIGIF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_CLEAR_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::RPG::Client::Subway::AirshipSubway* a1, ::Il2CppArray<::OGFEAEDDJJO>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Subway::AirshipSubway*, ::Il2CppArray<::OGFEAEDDJJO>*))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_DLAILGNMFGI_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::Subway::AirlineSubwayWay* a1, ::GDMNALCNPJE* a2, ::SubwayScheduleData* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Subway::AirlineSubwayWay*, ::GDMNALCNPJE*, ::SubwayScheduleData*, ::System::Boolean))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EEJFPHJHDNC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_EEJFPHJHDNC_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void NBJFLGNEBED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_NBJFLGNEBED_OFFSET))(this);
		}

		::System::Void EMCGKOHMGJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_EMCGKOHMGJB_OFFSET))(this);
		}

		::System::Void DHKPEPMOPMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_DHKPEPMOPMK_OFFSET))(this);
		}

		::System::Void IPIOEPLHCCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_IPIOEPLHCCB_OFFSET))(this);
		}

		::OJACCBLPEPG_EStationOpenState EHDHFMKAKBG()
		{
			return ((::OJACCBLPEPG_EStationOpenState(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_EHDHFMKAKBG_OFFSET))(this);
		}

		::System::Void MBLDBOMENIN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_MBLDBOMENIN_OFFSET))(this, a1);
		}

		::System::Void AOIHLLDPJJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_AOIHLLDPJJJ_OFFSET))(this);
		}

		::System::Void HHGNECAGCCA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_HHGNECAGCCA_OFFSET))(this, a1);
		}

		::System::Void EHAIPIPCLMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_EHAIPIPCLMC_OFFSET))(this);
		}

		::System::Void EFCDOALHGBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_EFCDOALHGBP_OFFSET))(this);
		}

		::System::Void KNCFEBNMBHO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_KNCFEBNMBHO_OFFSET))(this, a1);
		}

		::System::Void KBDLECGPOCM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_KBDLECGPOCM_OFFSET))(this, a1);
		}

		::System::Void KIJOIKEKELP(::RPG::Client::Subway::AirshipSubway* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Subway::AirshipSubway*))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_KIJOIKEKELP_OFFSET))(this, a1);
		}

		::System::Int32 EHMDIEHGCMA(::System::String* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_EHMDIEHGCMA_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GOPOABFHJNP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_GOPOABFHJNP_OFFSET))(this);
		}

		::System::Single KAOOIDJKJPF(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_KAOOIDJKJPF_OFFSET))(this, a1);
		}

		::System::Void FCHALCIOKIF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_FCHALCIOKIF_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion OGMCGAMOBHM(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_OGMCGAMOBHM_OFFSET))(this, a1, a2);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Boolean MFMADCPNMIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_MFMADCPNMIK_OFFSET))(this);
		}

		::System::Boolean BPEIKDPGCOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_BPEIKDPGCOF_OFFSET))(this);
		}

		::System::Boolean HOHCHDCFBKK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_HOHCHDCFBKK_OFFSET))(this);
		}

		::System::Single BAPJCHKNDJJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMCNLIKBKL_BAPJCHKNDJJ_OFFSET))(this);
		}

	};
