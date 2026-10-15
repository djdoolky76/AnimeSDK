#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDMNALCNPJE_EJumpMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APGFJHFIENM;
class IBMCNLIKBKL;
class NEOCEOCDEAF;
class NNJOIHFDHML;
class PKBGGDEPGDO;
class SubwayScheduleData;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class BAPartVariantRes; }
namespace RPG::Client::Subway { class AirlineSubwayWay; }
namespace RPG::Client::Subway { class AirshipSubwayEmitter; }
namespace RPG::Client::Subway { class AirshipSubwayTimetable; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define GDMNALCNPJE_AJHDBMDCJGM_OFFSET UNITYSDK_OFFSET(0x1599CA10)
#define GDMNALCNPJE_BLFJFEFCONG_OFFSET UNITYSDK_OFFSET(0x1599C430)
#define GDMNALCNPJE_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x1599C6C0)
#define GDMNALCNPJE_BPCKHBIEMJO_OFFSET UNITYSDK_OFFSET(0x1599ACF0)
#define GDMNALCNPJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1599D7F0)
#define GDMNALCNPJE_CHKHEOJDEHE_OFFSET UNITYSDK_OFFSET(0x1599CAC0)
#define GDMNALCNPJE_CKEOEAIEMMA_OFFSET UNITYSDK_OFFSET(0x1599D2E0)
#define GDMNALCNPJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1599A3B0)
#define GDMNALCNPJE_DABANIMLCKB_OFFSET UNITYSDK_OFFSET(0x1599AB90)
#define GDMNALCNPJE_DDPMFIJJMEM_OFFSET UNITYSDK_OFFSET(0x1599C7F0)
#define GDMNALCNPJE_DEKEGNODAHC_OFFSET UNITYSDK_OFFSET(0x1599C8D0)
#define GDMNALCNPJE_DHDFGAAAIPG_OFFSET UNITYSDK_OFFSET(0x1599CF60)
#define GDMNALCNPJE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1599A8F0)
#define GDMNALCNPJE_DMOBNGJKCDG_OFFSET UNITYSDK_OFFSET(0x1599D4E0)
#define GDMNALCNPJE_EACNBKGNEDH_OFFSET UNITYSDK_OFFSET(0x1599B450)
#define GDMNALCNPJE_FMOHJCICEGH_OFFSET UNITYSDK_OFFSET(0x1599B610)
#define GDMNALCNPJE_FOJMDBIIODO_OFFSET UNITYSDK_OFFSET(0x1599D5D0)
#define GDMNALCNPJE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1599D750)
#define GDMNALCNPJE_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1599D760)
#define GDMNALCNPJE_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1599D770)
#define GDMNALCNPJE_GGBPOEDHHHL_OFFSET UNITYSDK_OFFSET(0x1599CD10)
#define GDMNALCNPJE_GNCEKLFENAB_OFFSET UNITYSDK_OFFSET(0x1599D7E0)
#define GDMNALCNPJE_ICJGMELMLGO_OFFSET UNITYSDK_OFFSET(0x1599D080)
#define GDMNALCNPJE_IJIFIDKKHEB_OFFSET UNITYSDK_OFFSET(0x1599C5C0)
#define GDMNALCNPJE_ILLNHBFACKF_OFFSET UNITYSDK_OFFSET(0x1599D260)
#define GDMNALCNPJE_IMAJOGFKKND_OFFSET UNITYSDK_OFFSET(0x1599B180)
#define GDMNALCNPJE_JCGPAMIDFNB_OFFSET UNITYSDK_OFFSET(0x1599BB90)
#define GDMNALCNPJE_JFLPFDIAIMK_OFFSET UNITYSDK_OFFSET(0x1599ADA0)
#define GDMNALCNPJE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1599BF30)
#define GDMNALCNPJE_KININBELIDM_OFFSET UNITYSDK_OFFSET(0x1599BCE0)
#define GDMNALCNPJE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1599AC90)
#define GDMNALCNPJE_LCDDHKGMBOP_OFFSET UNITYSDK_OFFSET(0x1599D410)
#define GDMNALCNPJE_LLKPBIBKNBE_OFFSET UNITYSDK_OFFSET(0x1599B1E0)
#define GDMNALCNPJE_NDEAIFKAGKO_OFFSET UNITYSDK_OFFSET(0x1599AA50)
#define GDMNALCNPJE_NFICMCNHPIE_OFFSET UNITYSDK_OFFSET(0x1599D1D0)
#define GDMNALCNPJE_NHFMAOCAGBH_OFFSET UNITYSDK_OFFSET(0x1599C5D0)
#define GDMNALCNPJE_NHHKMLBHCJO_OFFSET UNITYSDK_OFFSET(0x1599A880)
#define GDMNALCNPJE_NKNNIDKJKOJ_OFFSET UNITYSDK_OFFSET(0x1599C380)
#define GDMNALCNPJE_NOEOCLGLPGA_OFFSET UNITYSDK_OFFSET(0x1599D350)
#define GDMNALCNPJE_OMIKLAJBHNE_OFFSET UNITYSDK_OFFSET(0x1599C560)
#define GDMNALCNPJE_PFKPCFOFHCN_OFFSET UNITYSDK_OFFSET(0x1599D100)
#define GDMNALCNPJE_POHPNAHLAEC_OFFSET UNITYSDK_OFFSET(0x1599D560)
#define GDMNALCNPJE_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1599D780)

inline static constexpr unsigned int GDMNALCNPJE_TypeDefinitionIndex = 82211;

	class GDMNALCNPJE : public ::System::Object
	{
	public:
		::NEOCEOCDEAF* MPMDEJKKADF; // 0x10
		::RPG::Client::Subway::AirlineSubwayWay* MEHKNJJGFJL; // 0x18
		::System::String* _PrefabPath_k__BackingField; // 0x20
		::NNJOIHFDHML* AFHOPNIGAEN; // 0x28
		::RPG::Client::Subway::AirshipSubwayEmitter* EAFMEEFNGMM; // 0x30
		::NNJOIHFDHML* FFDAPHAOJCG; // 0x38
		::System::Collections::Generic::List_1<::IBMCNLIKBKL*>* DCLHJLIMMCB; // 0x40
		::Il2CppArray<::APGFJHFIENM*>* GJKKJHKCFBC; // 0x48
		::System::Func_2<::IBMCNLIKBKL*, ::System::Boolean>* FOGDAKKBOEB; // 0x50
		::RPG::Client::Subway::AirshipSubwayTimetable* HPGMEABEAPL; // 0x58
		::System::Single CBPJMLPBEIG; // 0x60
		::System::UInt32 _GroupID_k__BackingField; // 0x64
		static ::SubwayScheduleData** StaticGet_AAAPCKIEMFC()
		{
			return (::SubwayScheduleData**)UnitySDK::FromName("", "GDMNALCNPJE")->GetStaticField(0x5D6C0);
		}

		static ::System::Single* StaticGet_HFPDAFOFMBJ()
		{
			return (::System::Single*)UnitySDK::FromName("", "GDMNALCNPJE")->GetStaticField(0x14110);
		}

		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GDMNALCNPJE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDMNALCNPJE_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_DISPOSE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JFLPFDIAIMK(::GDMNALCNPJE_EJumpMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDMNALCNPJE_EJumpMode))((::PBYTE)hIl2Cpp + GDMNALCNPJE_JFLPFDIAIMK_OFFSET))(this, a1);
		}

		::System::Void FMOHJCICEGH(::GDMNALCNPJE_EJumpMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDMNALCNPJE_EJumpMode))((::PBYTE)hIl2Cpp + GDMNALCNPJE_FMOHJCICEGH_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDMNALCNPJE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void BLFJFEFCONG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_BLFJFEFCONG_OFFSET))(this);
		}

		::System::Void LLKPBIBKNBE(::GDMNALCNPJE_EJumpMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDMNALCNPJE_EJumpMode))((::PBYTE)hIl2Cpp + GDMNALCNPJE_LLKPBIBKNBE_OFFSET))(this, a1);
		}

		::System::Void EACNBKGNEDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_EACNBKGNEDH_OFFSET))(this);
		}

		::System::Void KININBELIDM(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMNALCNPJE_KININBELIDM_OFFSET))(this, a1, a2);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMNALCNPJE_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Int32 DDPMFIJJMEM(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GDMNALCNPJE_DDPMFIJJMEM_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 AJHDBMDCJGM(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GDMNALCNPJE_AJHDBMDCJGM_OFFSET))(this, a1, a2);
		}

		::System::Void CHKHEOJDEHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_CHKHEOJDEHE_OFFSET))(this);
		}

		::System::Void GGBPOEDHHHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_GGBPOEDHHHL_OFFSET))(this);
		}

		::System::Void DHDFGAAAIPG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDMNALCNPJE_DHDFGAAAIPG_OFFSET))(this, a1);
		}

		::System::Void JCGPAMIDFNB(::SubwayScheduleData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::SubwayScheduleData*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMNALCNPJE_JCGPAMIDFNB_OFFSET))(this, a1, a2);
		}

		::System::Void NKNNIDKJKOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_NKNNIDKJKOJ_OFFSET))(this);
		}

		::System::Void NDEAIFKAGKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_NDEAIFKAGKO_OFFSET))(this);
		}

		::UnityEngine::Rendering::BatchAnimationInstance* ICJGMELMLGO(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GDMNALCNPJE_ICJGMELMLGO_OFFSET))(this, a1, a2);
		}

		::PKBGGDEPGDO* NFICMCNHPIE(::System::String* a1, ::System::String* a2, ::UnityEngine::Rendering::BatchAnimationInstance* a3)
		{
			return ((::PKBGGDEPGDO*(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + GDMNALCNPJE_NFICMCNHPIE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ILLNHBFACKF(::System::String* a1, ::UnityEngine::Rendering::BatchAnimationInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + GDMNALCNPJE_ILLNHBFACKF_OFFSET))(this, a1, a2);
		}

		::System::Void CKEOEAIEMMA(::System::String* a1, ::PKBGGDEPGDO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::PKBGGDEPGDO*))((::PBYTE)hIl2Cpp + GDMNALCNPJE_CKEOEAIEMMA_OFFSET))(this, a1, a2);
		}

		::System::Void NOEOCLGLPGA(::System::String* a1, ::UnityEngine::Rendering::BatchAnimationInstance* a2, ::RPG::Client::AssemNPC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationInstance*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + GDMNALCNPJE_NOEOCLGLPGA_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::BAPartVariantRes* LCDDHKGMBOP(::System::String* a1, ::UnityEngine::Rendering::BatchAnimationInstance* a2, ::RPG::Client::AssemNPC* a3)
		{
			return ((::RPG::Client::BAPartVariantRes*(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationInstance*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + GDMNALCNPJE_LCDDHKGMBOP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DMOBNGJKCDG(::System::String* a1, ::RPG::Client::BAPartVariantRes* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::BAPartVariantRes*))((::PBYTE)hIl2Cpp + GDMNALCNPJE_DMOBNGJKCDG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AssemNPC* POHPNAHLAEC(::System::String* a1)
		{
			return ((::RPG::Client::AssemNPC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GDMNALCNPJE_POHPNAHLAEC_OFFSET))(this, a1);
		}

		::APGFJHFIENM* DEKEGNODAHC(::System::String* a1)
		{
			return ((::APGFJHFIENM*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GDMNALCNPJE_DEKEGNODAHC_OFFSET))(this, a1);
		}

		::System::Void BPCKHBIEMJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_BPCKHBIEMJO_OFFSET))(this);
		}

		::System::Void FOJMDBIIODO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_FOJMDBIIODO_OFFSET))(this);
		}

		::System::Void DABANIMLCKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_DABANIMLCKB_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_GET_GROUPID_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_TimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDMNALCNPJE_SET_TIMESCALE_OFFSET))(this, a1);
		}

		::RPG::Client::Subway::AirlineSubwayWay* GNCEKLFENAB()
		{
			return ((::RPG::Client::Subway::AirlineSubwayWay*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_GNCEKLFENAB_OFFSET))(this);
		}

		::System::Boolean PFKPCFOFHCN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_PFKPCFOFHCN_OFFSET))(this);
		}

		::System::Boolean NHFMAOCAGBH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_NHFMAOCAGBH_OFFSET))(this);
		}

		::System::Boolean IMAJOGFKKND()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_IMAJOGFKKND_OFFSET))(this);
		}

		::System::Boolean IJIFIDKKHEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_IJIFIDKKHEB_OFFSET))(this);
		}

		::System::Boolean NHHKMLBHCJO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_NHHKMLBHCJO_OFFSET))(this);
		}

		::System::Boolean OMIKLAJBHNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE_OMIKLAJBHNE_OFFSET))(this);
		}

	};
