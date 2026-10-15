#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Span_1_0C0D59FF8BC7380B.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define KEEEKDDBENC_ANHNLEGPEJH_OFFSET UNITYSDK_OFFSET(0x3C4B3C0)
#define KEEEKDDBENC_BJLKIOGOJPN_OFFSET UNITYSDK_OFFSET(0x3C4B290)
#define KEEEKDDBENC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C4AF10)
#define KEEEKDDBENC_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C4AF20)
#define KEEEKDDBENC_CTOR_OFFSET UNITYSDK_OFFSET(0x3C4AF00)
#define KEEEKDDBENC_DKIMOKAGMFM_OFFSET UNITYSDK_OFFSET(0x3C4B450)
#define KEEEKDDBENC_GCFLBAKNFHP_OFFSET UNITYSDK_OFFSET(0x3C4B160)
#define KEEEKDDBENC_GGAIOBMHKIJ_OFFSET UNITYSDK_OFFSET(0x3C4AFC0)
#define KEEEKDDBENC_HGONLLOPGBB_OFFSET UNITYSDK_OFFSET(0x3C4B190)
#define KEEEKDDBENC_IAGLFAODNND_OFFSET UNITYSDK_OFFSET(0x3C4B400)
#define KEEEKDDBENC_KFEABEPEAOA_OFFSET UNITYSDK_OFFSET(0x1DD69FE0)
#define KEEEKDDBENC_LOOPAIJCJEE_4_OFFSET UNITYSDK_OFFSET(0x3C4B1A0)
#define KEEEKDDBENC_LOOPAIJCJEE_5_OFFSET UNITYSDK_OFFSET(0x3C4B250)
#define KEEEKDDBENC_LOOPAIJCJEE_6_OFFSET UNITYSDK_OFFSET(0x3C4B280)
#define KEEEKDDBENC_LOOPAIJCJEE_7_OFFSET UNITYSDK_OFFSET(0x3C4B2A0)
#define KEEEKDDBENC_LOOPAIJCJEE_8_OFFSET UNITYSDK_OFFSET(0x3C4B330)
#define KEEEKDDBENC_MDBDFADPEJE_1_OFFSET UNITYSDK_OFFSET(0x3C4B440)
#define KEEEKDDBENC_MDBDFADPEJE_OFFSET UNITYSDK_OFFSET(0x3C4B430)
#define KEEEKDDBENC_MFIOJLDLKIL_OFFSET UNITYSDK_OFFSET(0x3C4B3F0)
#define KEEEKDDBENC_MGPCCLGMGEO_OFFSET UNITYSDK_OFFSET(0x3C4B3D0)
#define KEEEKDDBENC_MJLDJHECJNM_OFFSET UNITYSDK_OFFSET(0x1DD69B30)
#define KEEEKDDBENC_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x3C4AFD0)
#define KEEEKDDBENC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C4AF80)

	struct alignas(8) KEEEKDDBENC
	{
		::System::IFormatProvider* NAMGCGIEMOE; // 0x10
		::Il2CppArray<::System::Char>* EDEHAPAGECA; // 0x18
		::System::Span_1_0C0D59FF8BC7380B<::System::Char> NKKOAPEIOKA; // 0x20
		::System::Byte _padding0[0x10];
		::System::Int32 LOLFABAKIJA; // 0x38
		::System::Boolean JOFPBDAJDIE; // 0x3C
		// static const ::System::Object IKJLEKPEHBB; // 0x0
		// static const ::System::Object MDPBLFCNANB; // 0x0
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KEEEKDDBENC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::IFormatProvider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + KEEEKDDBENC_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Int32 a2, ::System::IFormatProvider* a3, ::System::Span_1_0C0D59FF8BC7380B<::System::Char> a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::IFormatProvider*, ::System::Span_1_0C0D59FF8BC7380B<::System::Char>))((::PBYTE)hIl2Cpp + KEEEKDDBENC_CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Int32 MJLDJHECJNM(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KEEEKDDBENC_MJLDJHECJNM_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEEKDDBENC_TOSTRING_OFFSET))(this);
		}

		::System::String* GGAIOBMHKIJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEEKDDBENC_GGAIOBMHKIJ_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEEKDDBENC_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> GCFLBAKNFHP()
		{
			return ((::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEEKDDBENC_GCFLBAKNFHP_OFFSET))(this);
		}

		::System::Void HGONLLOPGBB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KEEEKDDBENC_HGONLLOPGBB_OFFSET))(this, a1);
		}

		::System::Void LOOPAIJCJEE_4(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>))((::PBYTE)hIl2Cpp + KEEEKDDBENC_LOOPAIJCJEE_4_OFFSET))(this, a1);
		}

		::System::Void LOOPAIJCJEE_5(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + KEEEKDDBENC_LOOPAIJCJEE_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LOOPAIJCJEE_6(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KEEEKDDBENC_LOOPAIJCJEE_6_OFFSET))(this, a1);
		}

		::System::Void BJLKIOGOJPN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KEEEKDDBENC_BJLKIOGOJPN_OFFSET))(this, a1);
		}

		::System::Void LOOPAIJCJEE_7(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + KEEEKDDBENC_LOOPAIJCJEE_7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LOOPAIJCJEE_8(::System::Object* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + KEEEKDDBENC_LOOPAIJCJEE_8_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean KFEABEPEAOA(::System::IFormatProvider* a1)
		{
			return ((::System::Boolean(*)(::System::IFormatProvider*))((::PBYTE)hIl2Cpp + KEEEKDDBENC_KFEABEPEAOA_OFFSET))(a1);
		}

		::System::Void ANHNLEGPEJH(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KEEEKDDBENC_ANHNLEGPEJH_OFFSET))(this, a1, a2);
		}

		::System::Void MGPCCLGMGEO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEEEKDDBENC_MGPCCLGMGEO_OFFSET))(this, a1);
		}

		::System::Void MFIOJLDLKIL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KEEEKDDBENC_MFIOJLDLKIL_OFFSET))(this, a1);
		}

		::System::Void IAGLFAODNND(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>))((::PBYTE)hIl2Cpp + KEEEKDDBENC_IAGLFAODNND_OFFSET))(this, a1);
		}

		::System::Void MDBDFADPEJE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEEEKDDBENC_MDBDFADPEJE_OFFSET))(this, a1);
		}

		::System::Void MDBDFADPEJE_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEEKDDBENC_MDBDFADPEJE_1_OFFSET))(this);
		}

		::System::Void DKIMOKAGMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KEEEKDDBENC_DKIMOKAGMFM_OFFSET))(this, a1);
		}

	};
