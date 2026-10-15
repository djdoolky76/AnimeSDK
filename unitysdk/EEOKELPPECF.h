#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEOKELPPECF;
class IAOFEGDCKCF;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EEOKELPPECF_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0x1DD3A100)
#define EEOKELPPECF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD3AA80)
#define EEOKELPPECF_CIIGGPAMEIO_OFFSET UNITYSDK_OFFSET(0x1DD336F0)
#define EEOKELPPECF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3A340)
#define EEOKELPPECF_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0x1DD33010)
#define EEOKELPPECF_FODFJDNFEJG_OFFSET UNITYSDK_OFFSET(0x1DD3A540)
#define EEOKELPPECF_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1DD32FE0)
#define EEOKELPPECF_OOCHBIFMPJM_OFFSET UNITYSDK_OFFSET(0x1DD32F80)

	class EEOKELPPECF : public ::System::Object
	{
	public:
		::System::Random* KFBFGALBKNM; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::IAOFEGDCKCF*>* HEMBEDOKMEI; // 0x18
		::System::Single OICDAMJLDIK; // 0x20
		::System::Byte CMEFOFJOFFC; // 0x24
		static ::Il2CppArray<::System::Byte>** StaticGet_PCPCFNGGCOE()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("", "EEOKELPPECF")->GetStaticField(0x24140);
		}

		// static const ::System::Object MBKIBALJGLE; // 0x0
		// static const ::System::Object ECALJALJEFO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOKELPPECF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEOKELPPECF_CCTOR_OFFSET))();
		}

		::System::Void BKHKBEJCGJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOKELPPECF_BKHKBEJCGJK_OFFSET))(this);
		}

		static ::EEOKELPPECF* OOCHBIFMPJM(::EEOKELPPECF* a1)
		{
			return ((::EEOKELPPECF*(*)(::EEOKELPPECF*))((::PBYTE)hIl2Cpp + EEOKELPPECF_OOCHBIFMPJM_OFFSET))(a1);
		}

		static ::System::Void CIIGGPAMEIO(::EEOKELPPECF* a1)
		{
			return ((::System::Void(*)(::EEOKELPPECF*))((::PBYTE)hIl2Cpp + EEOKELPPECF_CIIGGPAMEIO_OFFSET))(a1);
		}

		::System::Void FHAPPCADGCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EEOKELPPECF_FHAPPCADGCE_OFFSET))(this, a1);
		}

		::System::Single MNGGAOFNGIP(::System::Boolean a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEOKELPPECF_MNGGAOFNGIP_OFFSET))(this, a1);
		}

		::System::Single FODFJDNFEJG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOKELPPECF_FODFJDNFEJG_OFFSET))(this);
		}

	};
