#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
namespace System { class Object; }

#define ILGLBBBGFJJ_BNJOOGJJHNM_OFFSET UNITYSDK_OFFSET(0x1EC02540)
#define ILGLBBBGFJJ_BOAFGEBPDAH_OFFSET UNITYSDK_OFFSET(0x1EC02380)
#define ILGLBBBGFJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC03590)
#define ILGLBBBGFJJ_DGAEKPCONHH_OFFSET UNITYSDK_OFFSET(0x3C50390)
#define ILGLBBBGFJJ_EENEEIHHJHA_OFFSET UNITYSDK_OFFSET(0x1EC024E0)
#define ILGLBBBGFJJ_EGFCFCBHJJP_2_OFFSET UNITYSDK_OFFSET(0x2E96E50)
#define ILGLBBBGFJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C503E0)
#define ILGLBBBGFJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C503D0)
#define ILGLBBBGFJJ_KBIAAGFONLF_OFFSET UNITYSDK_OFFSET(0x3C503C0)
#define ILGLBBBGFJJ_LPEHHMHPCMG_OFFSET UNITYSDK_OFFSET(0x1EC02220)
#define ILGLBBBGFJJ_OBFKPBADMFD_OFFSET UNITYSDK_OFFSET(0x1EC022D0)
#define ILGLBBBGFJJ_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1EC02180)

inline static constexpr unsigned int ILGLBBBGFJJ_TypeDefinitionIndex = 35284;

	struct alignas(4) ILGLBBBGFJJ
	{
		::System::UInt32 DHEFDLBBIIJ; // 0x10
		::System::UInt32 GPDMBMNHLJE; // 0x14
		::System::UInt32 GIPHOEFIOLL; // 0x18
		::System::UInt32 JPGPMHKEADO; // 0x1C
		::System::UInt32 NOFLMKEDODH; // 0x20
		::System::UInt32 FHMEPKFJLMI; // 0x24
		::System::UInt32 COBJINMNCBD; // 0x28
		::System::UInt32 PNCOKOGFNCM; // 0x2C
		static ::System::UInt32* StaticGet_LGPFNAFMLCO()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "ILGLBBBGFJJ")->GetStaticField(0x12D10);
		}

		// static const ::System::Object NFIJJAEHLME; // 0x0
		// static const ::System::Object KGIEFMKKHEH; // 0x0
		// static const ::System::Object BONIDHDBAGN; // 0x0
		// static const ::System::Object BPKGCPJHLMH; // 0x0
		// static const ::System::Object CPHLAONCJDF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILGLBBBGFJJ_CCTOR_OFFSET))();
		}

		static ::System::Void OINBDMGFFJL(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ILGLBBBGFJJ_OINBDMGFFJL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 LPEHHMHPCMG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ILGLBBBGFJJ_LPEHHMHPCMG_OFFSET))(a1, a2);
		}

		static ::System::UInt32 OBFKPBADMFD(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ILGLBBBGFJJ_OBFKPBADMFD_OFFSET))(a1, a2);
		}

		static ::System::UInt32 BOAFGEBPDAH(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ILGLBBBGFJJ_BOAFGEBPDAH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 EENEEIHHJHA()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + ILGLBBBGFJJ_EENEEIHHJHA_OFFSET))();
		}

		static ::System::UInt32 BNJOOGJJHNM(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ILGLBBBGFJJ_BNJOOGJJHNM_OFFSET))(a1);
		}

		::System::Void DGAEKPCONHH(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte>))((::PBYTE)hIl2Cpp + ILGLBBBGFJJ_DGAEKPCONHH_OFFSET))(this, a1);
		}

		::System::Void EGFCFCBHJJP_2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILGLBBBGFJJ_EGFCFCBHJJP_2_OFFSET))(this, a1);
		}

		::System::Int32 KBIAAGFONLF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGLBBBGFJJ_KBIAAGFONLF_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGLBBBGFJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILGLBBBGFJJ_EQUALS_OFFSET))(this, a1);
		}

	};
