#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/Foundation/ReadOnlyNativeMemoryBlob.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariableArray_1.h"
#include "unitysdk/IDCGMDKLNED.h"
#include "unitysdk/IGOJCCPHHAC.h"
#include "unitysdk/OANIIFNKPDK.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define BHGCFCKEDAP_AEDINCHNBPJ_OFFSET UNITYSDK_OFFSET(0x10DF73A0)
#define BHGCFCKEDAP_BLHDIEEAJHH_OFFSET UNITYSDK_OFFSET(0x6527B0)
#define BHGCFCKEDAP_EDKLBICFFOL_OFFSET UNITYSDK_OFFSET(0x10DFA170)
#define BHGCFCKEDAP_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x652800)
#define BHGCFCKEDAP_FFFMODHMCEJ_OFFSET UNITYSDK_OFFSET(0x652D90)
#define BHGCFCKEDAP_GMHMJKJKLCJ_OFFSET UNITYSDK_OFFSET(0x10DF9C20)
#define BHGCFCKEDAP_IKHHFDNFDLN_OFFSET UNITYSDK_OFFSET(0x10DF6BF0)
#define BHGCFCKEDAP_ILNCHCGKLJO_OFFSET UNITYSDK_OFFSET(0x10DF6610)
#define BHGCFCKEDAP_JPFGLOPDGFG_OFFSET UNITYSDK_OFFSET(0x5A45D0)
#define BHGCFCKEDAP_KDNMPIFMJDO_OFFSET UNITYSDK_OFFSET(0x653150)
#define BHGCFCKEDAP_LNCEGNMNFDH_OFFSET UNITYSDK_OFFSET(0x653220)
#define BHGCFCKEDAP_MGNKJHLMOCE_OFFSET UNITYSDK_OFFSET(0x653160)
#define BHGCFCKEDAP_MPPFDGIKINE_OFFSET UNITYSDK_OFFSET(0x652810)
#define BHGCFCKEDAP_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x5A4500)
#define BHGCFCKEDAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DF6480)
#define BHGCFCKEDAP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x652780)
#define BHGCFCKEDAP__CTOR_OFFSET UNITYSDK_OFFSET(0x652700)

inline static constexpr unsigned int BHGCFCKEDAP_TypeDefinitionIndex = 92884;

struct alignas(8) BHGCFCKEDAP
{
	static ::BHGCFCKEDAP* StaticGet_FGBLILBNEHG()
	{
		return (::BHGCFCKEDAP*)Il2CppClass::FromTypeDefinitionIndex(BHGCFCKEDAP_TypeDefinitionIndex)->GetStaticField(0xD4F0);
	}
	::Foundation::ReadOnlyNativeVariableArray_1<::OANIIFNKPDK> HLMJGDACAOA; // 0x10
	::System::Byte _padding0[0x8];
	::IDCGMDKLNED FEMHHGAMLGL; // 0x20
	::Foundation::Unreal::Interval_1<::System::Single> PALJOHOFJLN; // 0x24
	::System::Byte _padding1[0xC];
	::Foundation::ReadOnlyNativeMemoryBlob NADOHIINKAD; // 0x38
	::Foundation::ReadOnlyNativeMemoryBlob MPEEBBIAJKK; // 0x48
	::Foundation::ReadOnlyNativeMemoryBlob CAIIDNMFBKJ; // 0x58
	::System::Single NHKKLBFLNPB; // 0x68

	::System::Void _ctor(::Foundation::ReadOnlyNativeVariableArray_1<::OANIIFNKPDK> HPCILAJBBHH, ::IDCGMDKLNED FCPCLIJNDLA, ::Foundation::Unreal::Interval_1<::System::Single> MGCAIFLDMHM, ::Foundation::ReadOnlyNativeMemoryBlob CDAMAAPCCBM, ::Foundation::ReadOnlyNativeMemoryBlob ACLAAGKMJCF, ::Foundation::ReadOnlyNativeMemoryBlob KGLGHNANAEG, ::System::Single JFLDAALEMGB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ReadOnlyNativeVariableArray_1<::OANIIFNKPDK>, ::IDCGMDKLNED, ::Foundation::Unreal::Interval_1<::System::Single>, ::Foundation::ReadOnlyNativeMemoryBlob, ::Foundation::ReadOnlyNativeMemoryBlob, ::Foundation::ReadOnlyNativeMemoryBlob, ::System::Single))((::PBYTE)hIl2Cpp + BHGCFCKEDAP__CTOR_OFFSET))(this, HPCILAJBBHH, FCPCLIJNDLA, MGCAIFLDMHM, CDAMAAPCCBM, ACLAAGKMJCF, KGLGHNANAEG, JFLDAALEMGB);
	}

	::System::Void _ctor_1(::UnityEngine::Keyframe OIMFIKLJFFP, ::IDCGMDKLNED FCPCLIJNDLA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe, ::IDCGMDKLNED))((::PBYTE)hIl2Cpp + BHGCFCKEDAP__CTOR_1_OFFSET))(this, OIMFIKLJFFP, FCPCLIJNDLA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHGCFCKEDAP__CCTOR_OFFSET))();
	}

	::Foundation::Unreal::Interval_1<::System::Single> JPFGLOPDGFG()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGCFCKEDAP_JPFGLOPDGFG_OFFSET))(this);
	}

	static ::System::Single ILNCHCGKLJO(::Foundation::ReadOnlyNativeMemoryBlob CJLBBGMPBDP, ::System::Int32 BOGPAHGJOJK, ::System::Single AHAFNGEDPLI, ::IGOJCCPHHAC IMOAKEGINJP)
	{
		return ((::System::Single(*)(::Foundation::ReadOnlyNativeMemoryBlob, ::System::Int32, ::System::Single, ::IGOJCCPHHAC))((::PBYTE)hIl2Cpp + BHGCFCKEDAP_ILNCHCGKLJO_OFFSET))(CJLBBGMPBDP, BOGPAHGJOJK, AHAFNGEDPLI, IMOAKEGINJP);
	}

	static ::System::Single IKHHFDNFDLN(::Foundation::ReadOnlyNativeMemoryBlob CJLBBGMPBDP, ::System::Int32 BOGPAHGJOJK, ::IGOJCCPHHAC IMOAKEGINJP)
	{
		return ((::System::Single(*)(::Foundation::ReadOnlyNativeMemoryBlob, ::System::Int32, ::IGOJCCPHHAC))((::PBYTE)hIl2Cpp + BHGCFCKEDAP_IKHHFDNFDLN_OFFSET))(CJLBBGMPBDP, BOGPAHGJOJK, IMOAKEGINJP);
	}

	::System::Boolean BLHDIEEAJHH(::IDCGMDKLNED FCPCLIJNDLA)
	{
		return ((::System::Boolean(*)(::PVOID, ::IDCGMDKLNED))((::PBYTE)hIl2Cpp + BHGCFCKEDAP_BLHDIEEAJHH_OFFSET))(this, FCPCLIJNDLA);
	}

	::System::Single FCFOEJGPDNO(::System::Single LALKNONLNEG, ::System::Single JFLDAALEMGB)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BHGCFCKEDAP_FCFOEJGPDNO_OFFSET))(this, LALKNONLNEG, JFLDAALEMGB);
	}

	static ::System::Single AEDINCHNBPJ(::Foundation::ReadOnlyNativeMemoryBlob CJLBBGMPBDP, ::System::Int32 BOGPAHGJOJK, ::System::Single AHAFNGEDPLI, ::IGOJCCPHHAC IMOAKEGINJP)
	{
		return ((::System::Single(*)(::Foundation::ReadOnlyNativeMemoryBlob, ::System::Int32, ::System::Single, ::IGOJCCPHHAC))((::PBYTE)hIl2Cpp + BHGCFCKEDAP_AEDINCHNBPJ_OFFSET))(CJLBBGMPBDP, BOGPAHGJOJK, AHAFNGEDPLI, IMOAKEGINJP);
	}

	::System::Single MPPFDGIKINE(::System::Single PADJNMGMGHO, ::System::Single KDEHMPGOCEP, ::System::Single JFLDAALEMGB)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BHGCFCKEDAP_MPPFDGIKINE_OFFSET))(this, PADJNMGMGHO, KDEHMPGOCEP, JFLDAALEMGB);
	}

	::System::Single FFFMODHMCEJ(::System::Single LALKNONLNEG, ::System::Single JFLDAALEMGB)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BHGCFCKEDAP_FFFMODHMCEJ_OFFSET))(this, LALKNONLNEG, JFLDAALEMGB);
	}

	::System::Int32 KDNMPIFMJDO(::System::Single LALKNONLNEG, ::System::Int32& IKNLOJAIMKI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + BHGCFCKEDAP_KDNMPIFMJDO_OFFSET))(this, LALKNONLNEG, IKNLOJAIMKI);
	}

	::System::Boolean MGNKJHLMOCE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGCFCKEDAP_MGNKJHLMOCE_OFFSET))(this);
	}

	::System::Int32 LNCEGNMNFDH(::System::Single LALKNONLNEG, ::System::Int32& IAONNKKMGEE)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + BHGCFCKEDAP_LNCEGNMNFDH_OFFSET))(this, LALKNONLNEG, IAONNKKMGEE);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGCFCKEDAP_NKDCADABLCL_OFFSET))(this);
	}

	static ::System::Single GMHMJKJKLCJ(::Foundation::ReadOnlyNativeMemoryBlob CJLBBGMPBDP, ::System::Int32 BOGPAHGJOJK, ::System::Single AHAFNGEDPLI, ::IGOJCCPHHAC IMOAKEGINJP)
	{
		return ((::System::Single(*)(::Foundation::ReadOnlyNativeMemoryBlob, ::System::Int32, ::System::Single, ::IGOJCCPHHAC))((::PBYTE)hIl2Cpp + BHGCFCKEDAP_GMHMJKJKLCJ_OFFSET))(CJLBBGMPBDP, BOGPAHGJOJK, AHAFNGEDPLI, IMOAKEGINJP);
	}

	static ::System::Single EDKLBICFFOL(::Foundation::ReadOnlyNativeMemoryBlob CJLBBGMPBDP, ::System::Int32 BOGPAHGJOJK, ::IGOJCCPHHAC IMOAKEGINJP)
	{
		return ((::System::Single(*)(::Foundation::ReadOnlyNativeMemoryBlob, ::System::Int32, ::IGOJCCPHHAC))((::PBYTE)hIl2Cpp + BHGCFCKEDAP_EDKLBICFFOL_OFFSET))(CJLBBGMPBDP, BOGPAHGJOJK, IMOAKEGINJP);
	}
};
