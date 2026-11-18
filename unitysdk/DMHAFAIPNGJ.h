#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/Foundation/FixedArray8_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/Geometry/Circle2D.h"
#include "unitysdk/Foundation/Unreal/Unsafe/Interval.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define DMHAFAIPNGJ_AFNLLONJNAK_OFFSET UNITYSDK_OFFSET(0x6CE800)
#define DMHAFAIPNGJ_BBCEAGAHFIP_OFFSET UNITYSDK_OFFSET(0x6CEB70)
#define DMHAFAIPNGJ_BOKLLHPNEHA_OFFSET UNITYSDK_OFFSET(0x6CE420)
#define DMHAFAIPNGJ_CAEPJCIACAN_OFFSET UNITYSDK_OFFSET(0x6CEB00)
#define DMHAFAIPNGJ_CJIIHJPHDIO_OFFSET UNITYSDK_OFFSET(0x6CE150)
#define DMHAFAIPNGJ_CLHEOHNFCBO_OFFSET UNITYSDK_OFFSET(0x6CE200)
#define DMHAFAIPNGJ_DPJEKIFPNEK_OFFSET UNITYSDK_OFFSET(0x6CE430)
#define DMHAFAIPNGJ_EJIMPLMPOAA_OFFSET UNITYSDK_OFFSET(0x6CE170)
#define DMHAFAIPNGJ_FAHCMLGHJPC_OFFSET UNITYSDK_OFFSET(0x6CEAC0)
#define DMHAFAIPNGJ_FAHDOHFFEAJ_OFFSET UNITYSDK_OFFSET(0x6CE1B0)
#define DMHAFAIPNGJ_GJJEOBADNLI_OFFSET UNITYSDK_OFFSET(0x6CE0E0)
#define DMHAFAIPNGJ_GNFCCJEECIC_OFFSET UNITYSDK_OFFSET(0x6CE5E0)
#define DMHAFAIPNGJ_HGMAJNIOPEB_OFFSET UNITYSDK_OFFSET(0x1208F9F0)
#define DMHAFAIPNGJ_HPLBADDIGHO_OFFSET UNITYSDK_OFFSET(0x6CE0F0)
#define DMHAFAIPNGJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x120904A0)
#define DMHAFAIPNGJ_KAAKEBDGHNA_OFFSET UNITYSDK_OFFSET(0x6CEB30)
#define DMHAFAIPNGJ_LILMJPFOBMH_OFFSET UNITYSDK_OFFSET(0x6CE130)
#define DMHAFAIPNGJ_MFBKCGOIGPK_OFFSET UNITYSDK_OFFSET(0x1208E890)
#define DMHAFAIPNGJ_NFMIIKFINHC_OFFSET UNITYSDK_OFFSET(0x6CEB10)
#define DMHAFAIPNGJ_OGKGJMIKGPJ_1_OFFSET UNITYSDK_OFFSET(0x6CE560)
#define DMHAFAIPNGJ_OGKGJMIKGPJ_OFFSET UNITYSDK_OFFSET(0x6CE220)
#define DMHAFAIPNGJ_PIDKNOEFMGO_OFFSET UNITYSDK_OFFSET(0x6CE550)
#define DMHAFAIPNGJ_PMJBDHMFGCB_OFFSET UNITYSDK_OFFSET(0x6CE210)
#define DMHAFAIPNGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x6CE060)

inline static constexpr unsigned int DMHAFAIPNGJ_TypeDefinitionIndex = 91069;

struct alignas(8) DMHAFAIPNGJ
{
	::Foundation::FixedArray8_1<::UnityEngine::Vector3> HNCDPENHEEB; // 0x10
	::System::Byte _padding0[0x58];
	::System::Single CBIJGPHLICA; // 0x70
	::System::Single FNKMBEOAFJI; // 0x74
	::System::Int32 JIACBKBBBDB; // 0x78
	::System::Int32 PGFCLAIDGMN; // 0x7C
	::System::Int32 PIIGNIAEKHH; // 0x80
	::System::Int32 HJCIGPAOHBG; // 0x84
	::System::Single ANNKIDMMDMN; // 0x88
	::System::Int32 BMEONJDOIAL; // 0x8C
	::System::UInt32 HODJNPGIBHH; // 0x90
	::System::Single ILLDGCOPGAF; // 0x94
	::System::Single CJJCANGKHHL; // 0x98
	::System::Single OAOKLNHODBC; // 0x9C
	::System::Int32 AFBPCDEEBAG; // 0xA0
	::System::Single GOBHMPCBMFO; // 0xA4
	::System::Single FKGDPAOIINO; // 0xA8
	::System::Single DFPFNIPHHJM; // 0xAC

	::System::Void _ctor(::Foundation::DefaultConstruct PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::DefaultConstruct))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ__CTOR_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Single GJJEOBADNLI(::System::Single FLKMOKLIPKN)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_GJJEOBADNLI_OFFSET))(this, FLKMOKLIPKN);
	}

	::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2> HPLBADDIGHO(::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2> PMAMMGFJAJL)
	{
		return ((::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2>(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_HPLBADDIGHO_OFFSET))(this, PMAMMGFJAJL);
	}

	::System::Void LILMJPFOBMH(::System::Single JBLIMKMGFJE, ::System::Single ADODOBKEINN, ::System::Single OCOGCLNCJMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_LILMJPFOBMH_OFFSET))(this, JBLIMKMGFJE, ADODOBKEINN, OCOGCLNCJMI);
	}

	static ::UnityEngine::Vector2 MFBKCGOIGPK(::Foundation::Geometry::Circle2D PGFEIBALIMO, ::System::Single FLKMOKLIPKN)
	{
		return ((::UnityEngine::Vector2(*)(::Foundation::Geometry::Circle2D, ::System::Single))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_MFBKCGOIGPK_OFFSET))(PGFEIBALIMO, FLKMOKLIPKN);
	}

	::PipelineCamera::FinalCameraData CJIIHJPHDIO()
	{
		return ((::PipelineCamera::FinalCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_CJIIHJPHDIO_OFFSET))(this);
	}

	::Foundation::Geometry::Circle2D EJIMPLMPOAA(::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Vector2> CELGKCKLPJC)
	{
		return ((::Foundation::Geometry::Circle2D(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_EJIMPLMPOAA_OFFSET))(this, CELGKCKLPJC);
	}

	::System::Void FAHDOHFFEAJ(::System::Int32 PMKDBJLPMIG, ::System::Int32 IEEHOGFDDNK, ::System::Int32 ANNAJPECHFM, ::System::Int32 PDNFHENDCJM, ::System::Int32 KKIAHJODOIA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_FAHDOHFFEAJ_OFFSET))(this, PMKDBJLPMIG, IEEHOGFDDNK, ANNAJPECHFM, PDNFHENDCJM, KKIAHJODOIA);
	}

	::System::Single CLHEOHNFCBO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_CLHEOHNFCBO_OFFSET))(this);
	}

	::System::Single PMJBDHMFGCB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_PMJBDHMFGCB_OFFSET))(this);
	}

	::Foundation::Unreal::Unsafe::Interval OGKGJMIKGPJ(::UnityEngine::Vector2 HODAIDNDKHD, ::UnityEngine::Vector2 KONLMDBCDCK, ::System::Single PGJOMHOPFIO)
	{
		return ((::Foundation::Unreal::Unsafe::Interval(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_OGKGJMIKGPJ_OFFSET))(this, HODAIDNDKHD, KONLMDBCDCK, PGJOMHOPFIO);
	}

	static ::System::Void HGMAJNIOPEB(::System::Span_1_9011FAD97750D224<::Foundation::Unreal::Unsafe::Interval> KDFIEDAFACO)
	{
		return ((::System::Void(*)(::System::Span_1_9011FAD97750D224<::Foundation::Unreal::Unsafe::Interval>))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_HGMAJNIOPEB_OFFSET))(KDFIEDAFACO);
	}

	::System::Void BOKLLHPNEHA(::System::Single IBCAFNKFIDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_BOKLLHPNEHA_OFFSET))(this, IBCAFNKFIDH);
	}

	::System::Void DPJEKIFPNEK(::UnityEngine::Vector3 LHDHLAEPFBH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_DPJEKIFPNEK_OFFSET))(this, LHDHLAEPFBH);
	}

	::System::Void PIDKNOEFMGO(::System::Single DIJADIGAGCA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_PIDKNOEFMGO_OFFSET))(this, DIJADIGAGCA);
	}

	::System::Span_1_9011FAD97750D224<::Foundation::Unreal::Unsafe::Interval> OGKGJMIKGPJ_1(::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Vector2> OPMPKFEHOBM, ::System::Single FLKMOKLIPKN, ::Foundation::Geometry::Circle2D PGFEIBALIMO, ::System::Span_1_9011FAD97750D224<::Foundation::Unreal::Unsafe::Interval> PMAMMGFJAJL)
	{
		return ((::System::Span_1_9011FAD97750D224<::Foundation::Unreal::Unsafe::Interval>(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::UnityEngine::Vector2>, ::System::Single, ::Foundation::Geometry::Circle2D, ::System::Span_1_9011FAD97750D224<::Foundation::Unreal::Unsafe::Interval>))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_OGKGJMIKGPJ_1_OFFSET))(this, OPMPKFEHOBM, FLKMOKLIPKN, PGFEIBALIMO, PMAMMGFJAJL);
	}

	::System::Single GNFCCJEECIC(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Single> IJHOHAJFFFF)
	{
		return ((::System::Single(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Single>))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_GNFCCJEECIC_OFFSET))(this, IJHOHAJFFFF);
	}

	::System::Single AFNLLONJNAK(::System::Single FLKMOKLIPKN, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::Unreal::Unsafe::Interval> KDFIEDAFACO, ::System::Span_1_9011FAD97750D224<::System::Single> PMAMMGFJAJL)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::Unreal::Unsafe::Interval>, ::System::Span_1_9011FAD97750D224<::System::Single>))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_AFNLLONJNAK_OFFSET))(this, FLKMOKLIPKN, KDFIEDAFACO, PMAMMGFJAJL);
	}

	/*
	static ::DMHAFAIPNGJ JFDOOELFAOA()
	{
		return ((::DMHAFAIPNGJ(*)())((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_JFDOOELFAOA_OFFSET))();
	}
	*/

	::System::Single FAHCMLGHJPC(::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::Unreal::Unsafe::Interval> KDFIEDAFACO, ::System::Span_1_9011FAD97750D224<::System::Single> DCNLLPBNJJM, ::System::Int32& PKFDPNPKHCJ)
	{
		return ((::System::Single(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::Unreal::Unsafe::Interval>, ::System::Span_1_9011FAD97750D224<::System::Single>, ::System::Int32&))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_FAHCMLGHJPC_OFFSET))(this, KDFIEDAFACO, DCNLLPBNJJM, PKFDPNPKHCJ);
	}

	::System::Void CAEPJCIACAN(::System::Single MHHHEIHIICP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_CAEPJCIACAN_OFFSET))(this, MHHHEIHIICP);
	}

	::PipelineCamera::FinalCameraData NFMIIKFINHC()
	{
		return ((::PipelineCamera::FinalCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_NFMIIKFINHC_OFFSET))(this);
	}

	::System::Void KAAKEBDGHNA(::System::Single MBHEMDMPAEE, ::System::Single GDBHPCABNDI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_KAAKEBDGHNA_OFFSET))(this, MBHEMDMPAEE, GDBHPCABNDI);
	}

	::System::Void BBCEAGAHFIP(::System::Single NPHOPECPHLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_BBCEAGAHFIP_OFFSET))(this, NPHOPECPHLF);
	}
};
