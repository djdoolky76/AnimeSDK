#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLGDCBBPCOK_FDEBGNFNCFG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/KBNONEGEOMC_ADBGGJHAFDL.h"
class KBNONEGEOMC;
class LLGDCBBPCOK;
class LLGDCBBPCOK_COPMHHCENFM;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLGDCBBPCOK_AHAELEIHCON_OFFSET UNITYSDK_OFFSET(0xB76C060)
#define LLGDCBBPCOK_APCECKKIHBM_OFFSET UNITYSDK_OFFSET(0xB76C340)
#define LLGDCBBPCOK_BDEJBBALMHE_OFFSET UNITYSDK_OFFSET(0xB76A960)
#define LLGDCBBPCOK_CTOR_OFFSET UNITYSDK_OFFSET(0xB76A920)
#define LLGDCBBPCOK_ECGCPJHIMPJ_OFFSET UNITYSDK_OFFSET(0xB76C460)
#define LLGDCBBPCOK_FDCEFLFOGIO_OFFSET UNITYSDK_OFFSET(0xB76C190)
#define LLGDCBBPCOK_FFANCANIING_OFFSET UNITYSDK_OFFSET(0xB76AF30)
#define LLGDCBBPCOK_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xB76A880)
#define LLGDCBBPCOK_HEFONKLKBKP_OFFSET UNITYSDK_OFFSET(0xB76B6A0)
#define LLGDCBBPCOK_IDPOMJCPDCO_OFFSET UNITYSDK_OFFSET(0xB76BC80)
#define LLGDCBBPCOK_IJCPIMIKPAJ_OFFSET UNITYSDK_OFFSET(0xB76B770)
#define LLGDCBBPCOK_JMOHCMJEOMC_OFFSET UNITYSDK_OFFSET(0xB76C2A0)
#define LLGDCBBPCOK_KJLMLMBNEIO_OFFSET UNITYSDK_OFFSET(0xB76C470)
#define LLGDCBBPCOK_KKFHIKHGMKD_OFFSET UNITYSDK_OFFSET(0xB76C410)
#define LLGDCBBPCOK_LGBAPCJCAOO_OFFSET UNITYSDK_OFFSET(0xB76B180)
#define LLGDCBBPCOK_LLHLOLOBEBC_OFFSET UNITYSDK_OFFSET(0xB76BC70)
#define LLGDCBBPCOK_MDDONOFPIBL_OFFSET UNITYSDK_OFFSET(0xB76BBF0)
#define LLGDCBBPCOK_NBJBCMPJIMD_OFFSET UNITYSDK_OFFSET(0xB76B0E0)
#define LLGDCBBPCOK_NGEGLJNFIFL_OFFSET UNITYSDK_OFFSET(0xB76BAA0)
#define LLGDCBBPCOK_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xB76AAF0)
#define LLGDCBBPCOK_PFFKHDAKLOH_OFFSET UNITYSDK_OFFSET(0xB76B460)

	class LLGDCBBPCOK : public ::System::Object
	{
	public:
		::KBNONEGEOMC* JDCOPJLHFEB; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* JCGAOLDPDEL; // 0x18
		::LLGDCBBPCOK_FDEBGNFNCFG AOODKGHBEGK; // 0x20
		::UnityEngine::Vector3 AGFFBNBCMIJ; // 0x28
		::System::Boolean ALPCEHOGGOG; // 0x34
		::System::Boolean NNLOBNNFKLH; // 0x35
		static ::LLGDCBBPCOK** StaticGet_EMLNOINPICJ()
		{
			return (::LLGDCBBPCOK**)UnitySDK::FromName("", "LLGDCBBPCOK")->GetStaticField(0x65D60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_CTOR_OFFSET))(this);
		}

		static ::LLGDCBBPCOK* GGBLHEHJBDO()
		{
			return ((::LLGDCBBPCOK*(*)())((::PBYTE)hIl2Cpp + LLGDCBBPCOK_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void BDEJBBALMHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_BDEJBBALMHE_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::KBNONEGEOMC* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KBNONEGEOMC*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_OINBDMGFFJL_OFFSET))(this, a1, a2);
		}

		::System::Void FFANCANIING(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_FFANCANIING_OFFSET))(this, a1);
		}

		::System::Void LGBAPCJCAOO(::KBNONEGEOMC_ADBGGJHAFDL a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBNONEGEOMC_ADBGGJHAFDL))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_LGBAPCJCAOO_OFFSET))(this, a1);
		}

		::System::Void HEFONKLKBKP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_HEFONKLKBKP_OFFSET))(this, a1);
		}

		::System::Int32 IJCPIMIKPAJ(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_IJCPIMIKPAJ_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* NGEGLJNFIFL(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_NGEGLJNFIFL_OFFSET))(this, a1);
		}

		::LLGDCBBPCOK_FDEBGNFNCFG MDDONOFPIBL()
		{
			return ((::LLGDCBBPCOK_FDEBGNFNCFG(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_MDDONOFPIBL_OFFSET))(this);
		}

		::System::Boolean LLHLOLOBEBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_LLHLOLOBEBC_OFFSET))(this);
		}

		::System::String* IDPOMJCPDCO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_IDPOMJCPDCO_OFFSET))(this);
		}

		::System::Void AHAELEIHCON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_AHAELEIHCON_OFFSET))(this);
		}

		::System::Void FDCEFLFOGIO(::LLGDCBBPCOK_COPMHHCENFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLGDCBBPCOK_COPMHHCENFM*))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_FDCEFLFOGIO_OFFSET))(this, a1);
		}

		::System::Void JMOHCMJEOMC(::LLGDCBBPCOK_COPMHHCENFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLGDCBBPCOK_COPMHHCENFM*))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_JMOHCMJEOMC_OFFSET))(this, a1);
		}

		::System::Void APCECKKIHBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_APCECKKIHBM_OFFSET))(this);
		}

		::System::Boolean NBJBCMPJIMD(::KBNONEGEOMC_ADBGGJHAFDL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KBNONEGEOMC_ADBGGJHAFDL))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_NBJBCMPJIMD_OFFSET))(this, a1);
		}

		::System::Void PFFKHDAKLOH(::KBNONEGEOMC_ADBGGJHAFDL a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBNONEGEOMC_ADBGGJHAFDL))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_PFFKHDAKLOH_OFFSET))(this, a1);
		}

		::System::Int32 KKFHIKHGMKD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_KKFHIKHGMKD_OFFSET))(this);
		}

		::System::Boolean ECGCPJHIMPJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_ECGCPJHIMPJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 KJLMLMBNEIO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_KJLMLMBNEIO_OFFSET))(this);
		}

	};
