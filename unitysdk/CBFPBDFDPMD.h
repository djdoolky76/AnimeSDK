#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCBPJHAHAJC.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariableArray_1.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariable_1.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CBFPBDFDPMD_EPBMMJINFJH.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

#define CBFPBDFDPMD_AFMCFCLALJD_OFFSET UNITYSDK_OFFSET(0x679BA0)
#define CBFPBDFDPMD_AMKHIDFKMAB_1_OFFSET UNITYSDK_OFFSET(0x679D30)
#define CBFPBDFDPMD_AMKHIDFKMAB_OFFSET UNITYSDK_OFFSET(0x679BC0)
#define CBFPBDFDPMD_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x679C10)
#define CBFPBDFDPMD_FGCNMBGCGCM_OFFSET UNITYSDK_OFFSET(0x679B50)
#define CBFPBDFDPMD_FMIHPAEGIMB_OFFSET UNITYSDK_OFFSET(0x679D80)
#define CBFPBDFDPMD_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x679C00)
#define CBFPBDFDPMD_IJGBCHIENLH_OFFSET UNITYSDK_OFFSET(0x679C90)
#define CBFPBDFDPMD_KJGFHDAMHGO_OFFSET UNITYSDK_OFFSET(0x363E30)
#define CBFPBDFDPMD_LMAMMFBGAJC_OFFSET UNITYSDK_OFFSET(0x679B60)
#define CBFPBDFDPMD_LNNMIDDDIKL_OFFSET UNITYSDK_OFFSET(0x679D90)
#define CBFPBDFDPMD_NCMHHNIKEAD_OFFSET UNITYSDK_OFFSET(0x679B80)
#define CBFPBDFDPMD_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x679D10)
#define CBFPBDFDPMD_OJPLNGOJDIJ_OFFSET UNITYSDK_OFFSET(0x679D60)
#define CBFPBDFDPMD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1141EF70)
#define CBFPBDFDPMD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x679A90)
#define CBFPBDFDPMD__CTOR_OFFSET UNITYSDK_OFFSET(0x6799D0)

inline static constexpr unsigned int CBFPBDFDPMD_TypeDefinitionIndex = 53240;

struct alignas(8) CBFPBDFDPMD
{
	static ::DCBPJHAHAJC* StaticGet_MEIDBOGJEEE()
	{
		return (::DCBPJHAHAJC*)Il2CppClass::FromTypeDefinitionIndex(CBFPBDFDPMD_TypeDefinitionIndex)->GetStaticField(0xD490);
	}
	static ::CBFPBDFDPMD* StaticGet_FGBLILBNEHG()
	{
		return (::CBFPBDFDPMD*)Il2CppClass::FromTypeDefinitionIndex(CBFPBDFDPMD_TypeDefinitionIndex)->GetStaticField(0xD4C0);
	}
	::Foundation::ReadOnlyNativeVariableArray_1<::DCBPJHAHAJC> LACGFCIBDFD; // 0x10
	::System::Byte _padding0[0x8];
	::Foundation::ReadOnlyNativeVariable_1<::HHDPDELCDNI> LMAMOJPPHKE; // 0x20
	::System::Byte _padding1[0x8];
	::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> ADLEFBPKHGD; // 0x30

	::System::Void _ctor(::Foundation::DefaultConstruct GAJNFOOKFFM)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::DefaultConstruct))((::PBYTE)hIl2Cpp + CBFPBDFDPMD__CTOR_OFFSET))(this, GAJNFOOKFFM);
	}

	::System::Void _ctor_1(::Foundation::ReadOnlyNativeVariableArray_1<::DCBPJHAHAJC> ILIPMAMEFLF, ::Foundation::ReadOnlyNativeVariable_1<::HHDPDELCDNI> IAPKABMDJNF, ::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> ALPBJEEMIME)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ReadOnlyNativeVariableArray_1<::DCBPJHAHAJC>, ::Foundation::ReadOnlyNativeVariable_1<::HHDPDELCDNI>, ::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D>))((::PBYTE)hIl2Cpp + CBFPBDFDPMD__CTOR_1_OFFSET))(this, ILIPMAMEFLF, IAPKABMDJNF, ALPBJEEMIME);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBFPBDFDPMD__CCTOR_OFFSET))();
	}

	::HHDPDELCDNI FGCNMBGCGCM(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::HHDPDELCDNI(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_FGCNMBGCGCM_OFFSET))(this, OHJOMJCNNMC);
	}

	::Foundation::Unreal::FTransform3D LMAMMFBGAJC(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_LMAMMFBGAJC_OFFSET))(this, OHJOMJCNNMC);
	}

	/*
	::JLJFLLKCPKE NCMHHNIKEAD()
	{
		return ((::JLJFLLKCPKE(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_NCMHHNIKEAD_OFFSET))(this);
	}
	*/

	::Foundation::Unreal::FTransform3D AFMCFCLALJD(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_AFMCFCLALJD_OFFSET))(this, OHJOMJCNNMC);
	}

	::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FTransform3D> AMKHIDFKMAB(::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FTransform3D> PMAMMGFJAJL)
	{
		return ((::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FTransform3D>(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FTransform3D>))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_AMKHIDFKMAB_OFFSET))(this, PMAMMGFJAJL);
	}

	::Foundation::Unreal::FTransform3D& GLOAAACBNPP(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::Foundation::Unreal::FTransform3D&(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_GLOAAACBNPP_OFFSET))(this, OHJOMJCNNMC);
	}

	::HHDPDELCDNI CJBFCLMFDOM()
	{
		return ((::HHDPDELCDNI(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_CJBFCLMFDOM_OFFSET))(this);
	}

	::System::Boolean IJGBCHIENLH(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::System::Boolean(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_IJGBCHIENLH_OFFSET))(this, OHJOMJCNNMC);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_NKDCADABLCL_OFFSET))(this);
	}

	::Foundation::NativeVariableArray_1<::Foundation::Unreal::FTransform3D> AMKHIDFKMAB_1(::Foundation::NativeVariableArray_1<::Foundation::Unreal::FTransform3D> PMAMMGFJAJL)
	{
		return ((::Foundation::NativeVariableArray_1<::Foundation::Unreal::FTransform3D>(*)(::PVOID, ::Foundation::NativeVariableArray_1<::Foundation::Unreal::FTransform3D>))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_AMKHIDFKMAB_1_OFFSET))(this, PMAMMGFJAJL);
	}

	::System::Int32 OJPLNGOJDIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_OJPLNGOJDIJ_OFFSET))(this);
	}

	::DCBPJHAHAJC& FMIHPAEGIMB(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::DCBPJHAHAJC&(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_FMIHPAEGIMB_OFFSET))(this, OHJOMJCNNMC);
	}

	::Foundation::Unreal::FTransform3D LNNMIDDDIKL(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_LNNMIDDDIKL_OFFSET))(this, OHJOMJCNNMC);
	}

	::CBFPBDFDPMD_EPBMMJINFJH KJGFHDAMHGO()
	{
		return ((::CBFPBDFDPMD_EPBMMJINFJH(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFPBDFDPMD_KJGFHDAMHGO_OFFSET))(this);
	}
};
