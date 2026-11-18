#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAIOFCFPCCA.h"
#include "unitysdk/HAJHLLCPIHD_LOECIEDFGNK.h"
#include "unitysdk/ONIHBCAKIND.h"
#include "unitysdk/OPPKAGCFIKL.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MIANEAGKLKL_LPCNLLCJFLN;
class NapLodControllerGroup;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HAJHLLCPIHD_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x13E08450)
#define HAJHLLCPIHD_APKCHIGIEGG_OFFSET UNITYSDK_OFFSET(0x13E093A0)
#define HAJHLLCPIHD_CBIIAFHMHFF_OFFSET UNITYSDK_OFFSET(0x13E09350)
#define HAJHLLCPIHD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13E08100)
#define HAJHLLCPIHD_DNCAANKJDDM_OFFSET UNITYSDK_OFFSET(0x13E09420)
#define HAJHLLCPIHD_GAHDAEGALMC_OFFSET UNITYSDK_OFFSET(0x13E08810)
#define HAJHLLCPIHD_GLILOANCOFJ_OFFSET UNITYSDK_OFFSET(0x13E09840)
#define HAJHLLCPIHD_HIIIOBCFPNK_OFFSET UNITYSDK_OFFSET(0x13E08DF0)
#define HAJHLLCPIHD_JHOLJLIOBOI_OFFSET UNITYSDK_OFFSET(0x13E092D0)
#define HAJHLLCPIHD_KOFMFDLCOEA_OFFSET UNITYSDK_OFFSET(0x13E09040)
#define HAJHLLCPIHD_LDKJNDAHAJN_OFFSET UNITYSDK_OFFSET(0x13E09B70)
#define HAJHLLCPIHD_LJGFOLOGOJE_OFFSET UNITYSDK_OFFSET(0x13E09740)
#define HAJHLLCPIHD_MECADGOCFLA_OFFSET UNITYSDK_OFFSET(0x13E09A70)
#define HAJHLLCPIHD_ONCREATE_OFFSET UNITYSDK_OFFSET(0x13E07F10)
#define HAJHLLCPIHD_OOGDOCBLMKA_OFFSET UNITYSDK_OFFSET(0x13E09F10)
#define HAJHLLCPIHD__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E08440)
#define HAJHLLCPIHD__CTOR_OFFSET UNITYSDK_OFFSET(0x13E08430)

inline static constexpr unsigned int HAJHLLCPIHD_TypeDefinitionIndex = 47498;

class HAJHLLCPIHD
{
public:
	static ::System::Boolean* StaticGet_EBKGGDCJHOC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HAJHLLCPIHD_TypeDefinitionIndex)->GetStaticField(0xF310);
	}
	static ::System::Boolean* StaticGet_EPEIJEAPFEP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HAJHLLCPIHD_TypeDefinitionIndex)->GetStaticField(0xF311);
	}
	// static const ::System::Int32 DLMKBHLPPKE = -0x1; // 0x0
	::System::Collections::Generic::List_1<::NapLodControllerGroup*>* NBPNCJHIHHC; // 0x10
	::System::Collections::Generic::Dictionary_2<::NapLodControllerGroup*, ::System::Int32>* FMCNFHOOPPF; // 0x18
	::System::Collections::Generic::List_1<::OPPKAGCFIKL>* HFDBNDCAGHC; // 0x20
	::System::Boolean LHMNKCPMJFG; // 0x28
	::System::Boolean JEENEGFICAD; // 0x29
	::System::Byte _padding0[0x6];
	::Unity::Collections::NativeQueue_1<::DAIOFCFPCCA> DADFLLPOHPI; // 0x30
	::System::Byte _padding1[0x10];
	::Unity::Jobs::JobHandle EOCHHIBJHCG; // 0x48
	::HAJHLLCPIHD_LOECIEDFGNK ECJBOGCMJAI; // 0x58
	::Unity::Collections::NativeList_1<::ONIHBCAKIND> PFEHGGHOGNG; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJHLLCPIHD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAJHLLCPIHD__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJHLLCPIHD_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJHLLCPIHD_DISPOSE_OFFSET))(this);
	}

	::System::Void ABDLEONNPAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJHLLCPIHD_ABDLEONNPAJ_OFFSET))(this);
	}

	::System::Void JHOLJLIOBOI(::NapLodControllerGroup* KPNIHKEKDOC)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodControllerGroup*))((::PBYTE)hIl2Cpp + HAJHLLCPIHD_JHOLJLIOBOI_OFFSET))(this, KPNIHKEKDOC);
	}

	::System::Void HIIIOBCFPNK(::NapLodControllerGroup* KPNIHKEKDOC)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodControllerGroup*))((::PBYTE)hIl2Cpp + HAJHLLCPIHD_HIIIOBCFPNK_OFFSET))(this, KPNIHKEKDOC);
	}

	::System::Void APKCHIGIEGG(::NapLodControllerGroup* KPNIHKEKDOC)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodControllerGroup*))((::PBYTE)hIl2Cpp + HAJHLLCPIHD_APKCHIGIEGG_OFFSET))(this, KPNIHKEKDOC);
	}

	::System::Void DNCAANKJDDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJHLLCPIHD_DNCAANKJDDM_OFFSET))(this);
	}

	::System::Void LJGFOLOGOJE(::MIANEAGKLKL_LPCNLLCJFLN* ICDBNAFKKHO)
	{
		return ((::System::Void(*)(::PVOID, ::MIANEAGKLKL_LPCNLLCJFLN*))((::PBYTE)hIl2Cpp + HAJHLLCPIHD_LJGFOLOGOJE_OFFSET))(this, ICDBNAFKKHO);
	}

	::System::Void MECADGOCFLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJHLLCPIHD_MECADGOCFLA_OFFSET))(this);
	}

	static ::System::Void LDKJNDAHAJN(::System::Int32 ABHBKFJKINO, ::ONIHBCAKIND& OBKICKGGFEO, ::System::Object* DBKIOKKOFJG, ::UnityEngine::Vector3 ADDCBFJBHNC)
	{
		return ((::System::Void(*)(::System::Int32, ::ONIHBCAKIND&, ::System::Object*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HAJHLLCPIHD_LDKJNDAHAJN_OFFSET))(ABHBKFJKINO, OBKICKGGFEO, DBKIOKKOFJG, ADDCBFJBHNC);
	}

	::System::Void GAHDAEGALMC(::NapLodControllerGroup* KPNIHKEKDOC)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodControllerGroup*))((::PBYTE)hIl2Cpp + HAJHLLCPIHD_GAHDAEGALMC_OFFSET))(this, KPNIHKEKDOC);
	}

	::System::Void KOFMFDLCOEA(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HAJHLLCPIHD_KOFMFDLCOEA_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void OOGDOCBLMKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJHLLCPIHD_OOGDOCBLMKA_OFFSET))(this);
	}

	::System::Void GLILOANCOFJ(::MIANEAGKLKL_LPCNLLCJFLN* ICDBNAFKKHO)
	{
		return ((::System::Void(*)(::PVOID, ::MIANEAGKLKL_LPCNLLCJFLN*))((::PBYTE)hIl2Cpp + HAJHLLCPIHD_GLILOANCOFJ_OFFSET))(this, ICDBNAFKKHO);
	}

	::System::Void CBIIAFHMHFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJHLLCPIHD_CBIIAFHMHFF_OFFSET))(this);
	}
};
