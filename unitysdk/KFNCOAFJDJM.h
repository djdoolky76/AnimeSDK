#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJIJEMDGBLD.h"
#include "unitysdk/FMFBNFKFBBG.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PIDBPNBEKKN.h"

class ABPHEINDEMP;
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define KFNCOAFJDJM_DCKGNOPFCHG_OFFSET UNITYSDK_OFFSET(0x167FE310)
#define KFNCOAFJDJM_DHMNEGFICGH_OFFSET UNITYSDK_OFFSET(0x167FE750)
#define KFNCOAFJDJM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167FC650)
#define KFNCOAFJDJM_EDKLJPLNHFM_OFFSET UNITYSDK_OFFSET(0x167FE260)
#define KFNCOAFJDJM_FPPLDJOPMDH_OFFSET UNITYSDK_OFFSET(0x167FE550)
#define KFNCOAFJDJM_GFDEIAKGDKB_OFFSET UNITYSDK_OFFSET(0x167FE3A0)
#define KFNCOAFJDJM_HDNIHHADEBE_OFFSET UNITYSDK_OFFSET(0x167FCEA0)
#define KFNCOAFJDJM_MAEJLBHNDJD_OFFSET UNITYSDK_OFFSET(0x167FD050)
#define KFNCOAFJDJM_MIAAHFHFBDC_OFFSET UNITYSDK_OFFSET(0x167FE7B0)
#define KFNCOAFJDJM_MINDEMKGKJB_1_OFFSET UNITYSDK_OFFSET(0x167FD970)
#define KFNCOAFJDJM_MINDEMKGKJB_OFFSET UNITYSDK_OFFSET(0x167FD1A0)
#define KFNCOAFJDJM_OHPCCPNIGNP_OFFSET UNITYSDK_OFFSET(0x167FCF40)
#define KFNCOAFJDJM_ONCREATE_OFFSET UNITYSDK_OFFSET(0x167FBFD0)
#define KFNCOAFJDJM__CCTOR_OFFSET UNITYSDK_OFFSET(0x167FCE90)
#define KFNCOAFJDJM__CTOR_OFFSET UNITYSDK_OFFSET(0x167FCCD0)

inline static constexpr unsigned int KFNCOAFJDJM_TypeDefinitionIndex = 68042;

class KFNCOAFJDJM
{
public:
	static ::System::Boolean* StaticGet_PBJKDKEBMCB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KFNCOAFJDJM_TypeDefinitionIndex)->GetStaticField(0x10930);
	}
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>* HNIOGHLEPLK; // 0x10
	::ABPHEINDEMP* OPGCGBKBJLM; // 0x18
	::System::Runtime::CompilerServices::ConditionalWeakTable_2<::UnityEngine::RectTransform*, ::Il2CppArray<::UnityEngine::Vector3>*>* GLENLBJECMO; // 0x20
	::System::Collections::Generic::Dictionary_2<::BJIJEMDGBLD, ::ABPHEINDEMP*>* CNEAOMJBDFK; // 0x28
	::System::Boolean IKGMHNEJPHE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNCOAFJDJM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFNCOAFJDJM__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNCOAFJDJM_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNCOAFJDJM_DISPOSE_OFFSET))(this);
	}

	::System::Void HDNIHHADEBE(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KFNCOAFJDJM_HDNIHHADEBE_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void MAEJLBHNDJD(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KFNCOAFJDJM_MAEJLBHNDJD_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Collections::Generic::List_1<::PIDBPNBEKKN>* MINDEMKGKJB(::System::Collections::Generic::IEnumerable_1<::System::Object*>* CAFGDGNGHEI, ::System::Boolean ABCIPMEHCME)
	{
		return ((::System::Collections::Generic::List_1<::PIDBPNBEKKN>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFNCOAFJDJM_MINDEMKGKJB_OFFSET))(this, CAFGDGNGHEI, ABCIPMEHCME);
	}

	::System::Void EDKLJPLNHFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNCOAFJDJM_EDKLJPLNHFM_OFFSET))(this);
	}

	::BJIJEMDGBLD DCKGNOPFCHG()
	{
		return ((::BJIJEMDGBLD(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNCOAFJDJM_DCKGNOPFCHG_OFFSET))(this);
	}

	::System::Void GFDEIAKGDKB(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KFNCOAFJDJM_GFDEIAKGDKB_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void OHPCCPNIGNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNCOAFJDJM_OHPCCPNIGNP_OFFSET))(this);
	}

	::System::Void DHMNEGFICGH(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KFNCOAFJDJM_DHMNEGFICGH_OFFSET))(this, MNDIBLLFAJI);
	}

	::PIDBPNBEKKN MINDEMKGKJB_1(::FMFBNFKFBBG DPCNGOHHBKP, ::UnityEngine::RectTransform* EMDOIDLAFDB, ::System::Boolean ABCIPMEHCME, ::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>* ABDDELEHBCF, ::System::Boolean& GIPECNMEEPB)
	{
		return ((::PIDBPNBEKKN(*)(::PVOID, ::FMFBNFKFBBG, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + KFNCOAFJDJM_MINDEMKGKJB_1_OFFSET))(this, DPCNGOHHBKP, EMDOIDLAFDB, ABCIPMEHCME, ABDDELEHBCF, GIPECNMEEPB);
	}

	::System::Void MIAAHFHFBDC(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KFNCOAFJDJM_MIAAHFHFBDC_OFFSET))(this, MNDIBLLFAJI);
	}

	::ABPHEINDEMP* FPPLDJOPMDH(::BJIJEMDGBLD OBNIAHNMHPF)
	{
		return ((::ABPHEINDEMP*(*)(::PVOID, ::BJIJEMDGBLD))((::PBYTE)hIl2Cpp + KFNCOAFJDJM_FPPLDJOPMDH_OFFSET))(this, OBNIAHNMHPF);
	}
};
