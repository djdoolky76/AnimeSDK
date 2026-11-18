#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBKHDCIJJLE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/KJCNICHCNBH_CMOHBHBNHNM.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

#define KJCNICHCNBH_AFMCFCLALJD_OFFSET UNITYSDK_OFFSET(0x7513F0)
#define KJCNICHCNBH_AMKHIDFKMAB_OFFSET UNITYSDK_OFFSET(0x751070)
#define KJCNICHCNBH_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x751AA0)
#define KJCNICHCNBH_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x606530)
#define KJCNICHCNBH_FGCNMBGCGCM_OFFSET UNITYSDK_OFFSET(0x751510)
#define KJCNICHCNBH_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x751B90)
#define KJCNICHCNBH_HPLFENMDGMH_OFFSET UNITYSDK_OFFSET(0x7516E0)
#define KJCNICHCNBH_INEDDIMLCOP_OFFSET UNITYSDK_OFFSET(0x605420)
#define KJCNICHCNBH_KJGFHDAMHGO_OFFSET UNITYSDK_OFFSET(0x6061C0)
#define KJCNICHCNBH_LMAMMFBGAJC_OFFSET UNITYSDK_OFFSET(0x751D00)
#define KJCNICHCNBH_LNNMIDDDIKL_OFFSET UNITYSDK_OFFSET(0x7515C0)
#define KJCNICHCNBH_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x6062F0)
#define KJCNICHCNBH_OJPLNGOJDIJ_OFFSET UNITYSDK_OFFSET(0x6064E0)
#define KJCNICHCNBH__CTOR_OFFSET UNITYSDK_OFFSET(0x604CC0)

inline static constexpr unsigned int KJCNICHCNBH_TypeDefinitionIndex = 45630;

struct alignas(4) KJCNICHCNBH
{
	::PBKHDCIJJLE AGNPPGPGGPP; // 0x10
	::UnityEngine::Animations::AnimationStream JHENEEOIGNO; // 0x60

	/*
	::System::Void _ctor(::PBKHDCIJJLE NEGDIIDKGIA, ::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::PBKHDCIJJLE, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KJCNICHCNBH__CTOR_OFFSET))(this, NEGDIIDKGIA, CPKODGLINAO);
	}
	*/

	::System::Boolean FFCPIEDHBDP(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::System::Boolean(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + KJCNICHCNBH_FFCPIEDHBDP_OFFSET))(this, OHJOMJCNNMC);
	}

	::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FTransform3D> AMKHIDFKMAB(::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FTransform3D> PMAMMGFJAJL)
	{
		return ((::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FTransform3D>(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FTransform3D>))((::PBYTE)hIl2Cpp + KJCNICHCNBH_AMKHIDFKMAB_OFFSET))(this, PMAMMGFJAJL);
	}

	::System::Int32 OJPLNGOJDIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCNICHCNBH_OJPLNGOJDIJ_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform3D AFMCFCLALJD(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + KJCNICHCNBH_AFMCFCLALJD_OFFSET))(this, OHJOMJCNNMC);
	}

	::HHDPDELCDNI FGCNMBGCGCM(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::HHDPDELCDNI(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + KJCNICHCNBH_FGCNMBGCGCM_OFFSET))(this, OHJOMJCNNMC);
	}

	::KJCNICHCNBH_CMOHBHBNHNM KJGFHDAMHGO()
	{
		return ((::KJCNICHCNBH_CMOHBHBNHNM(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCNICHCNBH_KJGFHDAMHGO_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform3D LNNMIDDDIKL(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + KJCNICHCNBH_LNNMIDDDIKL_OFFSET))(this, OHJOMJCNNMC);
	}

	::Foundation::Unreal::FTransform3D HPLFENMDGMH()
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCNICHCNBH_HPLFENMDGMH_OFFSET))(this);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCNICHCNBH_NKDCADABLCL_OFFSET))(this);
	}

	::System::Int32 INEDDIMLCOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCNICHCNBH_INEDDIMLCOP_OFFSET))(this);
	}

	::HHDPDELCDNI CJBFCLMFDOM()
	{
		return ((::HHDPDELCDNI(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCNICHCNBH_CJBFCLMFDOM_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform3D GLOAAACBNPP(::HHDPDELCDNI ABHBKFJKINO)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + KJCNICHCNBH_GLOAAACBNPP_OFFSET))(this, ABHBKFJKINO);
	}

	::Foundation::Unreal::FTransform3D LMAMMFBGAJC(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + KJCNICHCNBH_LMAMMFBGAJC_OFFSET))(this, OHJOMJCNNMC);
	}
};
