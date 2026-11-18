#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCBPJHAHAJC.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/JLJFLLKCPKE_MCCOAEDKMJN.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariableArray_1.h"
#include "unitysdk/JLJFLLKCPKE_GLGDEAHBLGN.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace System { class String; }

#define JLJFLLKCPKE_AFMCFCLALJD_OFFSET UNITYSDK_OFFSET(0x6FA320)
#define JLJFLLKCPKE_AMKHIDFKMAB_1_OFFSET UNITYSDK_OFFSET(0x6FA9E0)
#define JLJFLLKCPKE_AMKHIDFKMAB_OFFSET UNITYSDK_OFFSET(0x6FA6A0)
#define JLJFLLKCPKE_BDMNGNLAKGE_OFFSET UNITYSDK_OFFSET(0x6FA9A0)
#define JLJFLLKCPKE_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x6F9E70)
#define JLJFLLKCPKE_COKNIICCODC_1_OFFSET UNITYSDK_OFFSET(0x13092E00)
#define JLJFLLKCPKE_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x13092820)
#define JLJFLLKCPKE_FCFOEJGPDNO_1_OFFSET UNITYSDK_OFFSET(0x6FAAE0)
#define JLJFLLKCPKE_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x6FAA30)
#define JLJFLLKCPKE_FGCNMBGCGCM_OFFSET UNITYSDK_OFFSET(0x6FA6D0)
#define JLJFLLKCPKE_FMIHPAEGIMB_OFFSET UNITYSDK_OFFSET(0x6FA1A0)
#define JLJFLLKCPKE_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x6FAA20)
#define JLJFLLKCPKE_HPLFENMDGMH_OFFSET UNITYSDK_OFFSET(0x6FA590)
#define JLJFLLKCPKE_IJGBCHIENLH_OFFSET UNITYSDK_OFFSET(0x6FA920)
#define JLJFLLKCPKE_JGABJPNEHIL_OFFSET UNITYSDK_OFFSET(0x6FA030)
#define JLJFLLKCPKE_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x130916D0)
#define JLJFLLKCPKE_KJGFHDAMHGO_OFFSET UNITYSDK_OFFSET(0x363E30)
#define JLJFLLKCPKE_LDAGNILJHKM_1_OFFSET UNITYSDK_OFFSET(0x6FAA70)
#define JLJFLLKCPKE_LDAGNILJHKM_OFFSET UNITYSDK_OFFSET(0x6FA010)
#define JLJFLLKCPKE_LMAMMFBGAJC_OFFSET UNITYSDK_OFFSET(0x6F9F30)
#define JLJFLLKCPKE_LNNMIDDDIKL_OFFSET UNITYSDK_OFFSET(0x6FA180)
#define JLJFLLKCPKE_NAENJPNHKHE_OFFSET UNITYSDK_OFFSET(0x13093760)
#define JLJFLLKCPKE_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x679D10)
#define JLJFLLKCPKE_OBEAMIGKKGE_OFFSET UNITYSDK_OFFSET(0x6FAAA0)
#define JLJFLLKCPKE_OJPLNGOJDIJ_OFFSET UNITYSDK_OFFSET(0x679D60)
#define JLJFLLKCPKE__CCTOR_OFFSET UNITYSDK_OFFSET(0x130908B0)
#define JLJFLLKCPKE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6F9DB0)
#define JLJFLLKCPKE__CTOR_OFFSET UNITYSDK_OFFSET(0x6F9CF0)

inline static constexpr unsigned int JLJFLLKCPKE_TypeDefinitionIndex = 68781;

struct alignas(8) JLJFLLKCPKE
{
	static ::JLJFLLKCPKE* StaticGet_FGBLILBNEHG()
	{
		return (::JLJFLLKCPKE*)Il2CppClass::FromTypeDefinitionIndex(JLJFLLKCPKE_TypeDefinitionIndex)->GetStaticField(0xD730);
	}
	static ::DCBPJHAHAJC* StaticGet_IDHECOGLAJJ()
	{
		return (::DCBPJHAHAJC*)Il2CppClass::FromTypeDefinitionIndex(JLJFLLKCPKE_TypeDefinitionIndex)->GetStaticField(0xD760);
	}
	::Foundation::NativeVariableArray_1<::DCBPJHAHAJC> LACGFCIBDFD; // 0x10
	::System::Byte _padding0[0x8];
	::Foundation::NativeVariable_1<::HHDPDELCDNI> LMAMOJPPHKE; // 0x20
	::System::Byte _padding1[0x8];
	::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> ADLEFBPKHGD; // 0x30

	::System::Void _ctor(::Foundation::DefaultConstruct EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::DefaultConstruct))((::PBYTE)hIl2Cpp + JLJFLLKCPKE__CTOR_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void _ctor_1(::Foundation::NativeVariableArray_1<::DCBPJHAHAJC> ILIPMAMEFLF, ::Foundation::NativeVariable_1<::HHDPDELCDNI> IAPKABMDJNF, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> ALPBJEEMIME)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeVariableArray_1<::DCBPJHAHAJC>, ::Foundation::NativeVariable_1<::HHDPDELCDNI>, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D>))((::PBYTE)hIl2Cpp + JLJFLLKCPKE__CTOR_1_OFFSET))(this, ILIPMAMEFLF, IAPKABMDJNF, ALPBJEEMIME);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLJFLLKCPKE__CCTOR_OFFSET))();
	}

	::HHDPDELCDNI CJBFCLMFDOM()
	{
		return ((::HHDPDELCDNI(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_CJBFCLMFDOM_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform3D LMAMMFBGAJC(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_LMAMMFBGAJC_OFFSET))(this, OHJOMJCNNMC);
	}

	::System::Int32 LDAGNILJHKM(::Foundation::ReadOnlyNativeVariableArray_1<::Foundation::Unreal::FTransform3D> ILIPMAMEFLF)
	{
		return ((::System::Int32(*)(::PVOID, ::Foundation::ReadOnlyNativeVariableArray_1<::Foundation::Unreal::FTransform3D>))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_LDAGNILJHKM_OFFSET))(this, ILIPMAMEFLF);
	}

	/*
	static ::CBFPBDFDPMD JPPEEOLOGGP(::JLJFLLKCPKE ECMMKCJLBMD)
	{
		return ((::CBFPBDFDPMD(*)(::JLJFLLKCPKE))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_JPPEEOLOGGP_OFFSET))(ECMMKCJLBMD);
	}
	*/

	::System::Void JGABJPNEHIL(::HHDPDELCDNI OHJOMJCNNMC, ::Foundation::Unreal::FTransform3D EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::HHDPDELCDNI, ::Foundation::Unreal::FTransform3D))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_JGABJPNEHIL_OFFSET))(this, OHJOMJCNNMC, EGEGIMGMJHN);
	}

	::Foundation::Unreal::FTransform3D LNNMIDDDIKL(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_LNNMIDDDIKL_OFFSET))(this, OHJOMJCNNMC);
	}

	::DCBPJHAHAJC& FMIHPAEGIMB(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::DCBPJHAHAJC&(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_FMIHPAEGIMB_OFFSET))(this, OHJOMJCNNMC);
	}

	::Foundation::Unreal::FTransform3D AFMCFCLALJD(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_AFMCFCLALJD_OFFSET))(this, OHJOMJCNNMC);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_NKDCADABLCL_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform3D HPLFENMDGMH()
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_HPLFENMDGMH_OFFSET))(this);
	}

	::JLJFLLKCPKE_GLGDEAHBLGN KJGFHDAMHGO()
	{
		return ((::JLJFLLKCPKE_GLGDEAHBLGN(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_KJGFHDAMHGO_OFFSET))(this);
	}

	/*
	static ::JLJFLLKCPKE COKNIICCODC(::PBKHDCIJJLE NEGDIIDKGIA)
	{
		return ((::JLJFLLKCPKE(*)(::PBKHDCIJJLE))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_COKNIICCODC_OFFSET))(NEGDIIDKGIA);
	}
	*/

	/*
	static ::JLJFLLKCPKE COKNIICCODC_1(::PBKHDCIJJLE NEGDIIDKGIA, ::Foundation::NativeVariableArray_1<::DCBPJHAHAJC> ILIPMAMEFLF, ::Foundation::NativeVariable_1<::HHDPDELCDNI> IAPKABMDJNF, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> ALPBJEEMIME)
	{
		return ((::JLJFLLKCPKE(*)(::PBKHDCIJJLE, ::Foundation::NativeVariableArray_1<::DCBPJHAHAJC>, ::Foundation::NativeVariable_1<::HHDPDELCDNI>, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D>))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_COKNIICCODC_1_OFFSET))(NEGDIIDKGIA, ILIPMAMEFLF, IAPKABMDJNF, ALPBJEEMIME);
	}
	*/

	::Foundation::NativeVariableArray_1<::Foundation::Unreal::FTransform3D> AMKHIDFKMAB(::Foundation::NativeVariableArray_1<::Foundation::Unreal::FTransform3D> PMAMMGFJAJL)
	{
		return ((::Foundation::NativeVariableArray_1<::Foundation::Unreal::FTransform3D>(*)(::PVOID, ::Foundation::NativeVariableArray_1<::Foundation::Unreal::FTransform3D>))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_AMKHIDFKMAB_OFFSET))(this, PMAMMGFJAJL);
	}

	::HHDPDELCDNI FGCNMBGCGCM(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::HHDPDELCDNI(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_FGCNMBGCGCM_OFFSET))(this, OHJOMJCNNMC);
	}

	static ::System::String* NAENJPNHKHE(::System::String* AELLPLBJELA, ::JLJFLLKCPKE_MCCOAEDKMJN KALNFNBBABH)
	{
		return ((::System::String*(*)(::System::String*, ::JLJFLLKCPKE_MCCOAEDKMJN))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_NAENJPNHKHE_OFFSET))(AELLPLBJELA, KALNFNBBABH);
	}

	::System::Boolean IJGBCHIENLH(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::System::Boolean(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_IJGBCHIENLH_OFFSET))(this, OHJOMJCNNMC);
	}

	::System::Void BDMNGNLAKGE(::HHDPDELCDNI OHJOMJCNNMC, ::Foundation::Unreal::FTransform3D EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::HHDPDELCDNI, ::Foundation::Unreal::FTransform3D))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_BDMNGNLAKGE_OFFSET))(this, OHJOMJCNNMC, EGEGIMGMJHN);
	}

	::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FTransform3D> AMKHIDFKMAB_1(::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FTransform3D> PMAMMGFJAJL)
	{
		return ((::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FTransform3D>(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FTransform3D>))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_AMKHIDFKMAB_1_OFFSET))(this, PMAMMGFJAJL);
	}

	::Foundation::Unreal::FTransform3D& GLOAAACBNPP(::HHDPDELCDNI OHJOMJCNNMC)
	{
		return ((::Foundation::Unreal::FTransform3D&(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_GLOAAACBNPP_OFFSET))(this, OHJOMJCNNMC);
	}

	/*
	::System::Void FCFOEJGPDNO(::BENADMOKHGG MOEKEKKJGBB)
	{
		return ((::System::Void(*)(::PVOID, ::BENADMOKHGG))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_FCFOEJGPDNO_OFFSET))(this, MOEKEKKJGBB);
	}
	*/

	::System::Int32 OJPLNGOJDIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_OJPLNGOJDIJ_OFFSET))(this);
	}

	::System::Int32 LDAGNILJHKM_1(::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::Unreal::FTransform3D> ILIPMAMEFLF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::Unreal::FTransform3D>))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_LDAGNILJHKM_1_OFFSET))(this, ILIPMAMEFLF);
	}

	::System::Void OBEAMIGKKGE(::HHDPDELCDNI OHJOMJCNNMC, ::Foundation::Unreal::FTransform3D EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::HHDPDELCDNI, ::Foundation::Unreal::FTransform3D))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_OBEAMIGKKGE_OFFSET))(this, OHJOMJCNNMC, EGEGIMGMJHN);
	}

	/*
	::System::Void FCFOEJGPDNO_1(::KJCNICHCNBH MOEKEKKJGBB)
	{
		return ((::System::Void(*)(::PVOID, ::KJCNICHCNBH))((::PBYTE)hIl2Cpp + JLJFLLKCPKE_FCFOEJGPDNO_1_OFFSET))(this, MOEKEKKJGBB);
	}
	*/
};
