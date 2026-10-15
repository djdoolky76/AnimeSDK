#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CIGLFKLHBGD.h"
class NINEMEMDNBK;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define BBGMIOOFEOC_AAACJMLFNMM_OFFSET UNITYSDK_OFFSET(0x1C434790)
#define BBGMIOOFEOC_ABPFENDKAME_OFFSET UNITYSDK_OFFSET(0x1C434D80)
#define BBGMIOOFEOC_ADAJBOAFNNB_OFFSET UNITYSDK_OFFSET(0x1C434900)
#define BBGMIOOFEOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C435640)
#define BBGMIOOFEOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4355F0)
#define BBGMIOOFEOC_FGDKCJPMBEG_OFFSET UNITYSDK_OFFSET(0x1C435070)
#define BBGMIOOFEOC_HCGIKFPKLOE_OFFSET UNITYSDK_OFFSET(0x1C434780)
#define BBGMIOOFEOC_LBNFHLPFFLD_OFFSET UNITYSDK_OFFSET(0x1C435350)
#define BBGMIOOFEOC_OCNMECOOLON_OFFSET UNITYSDK_OFFSET(0x1C434F70)

	class BBGMIOOFEOC : public ::System::Object
	{
	public:
		::NINEMEMDNBK* DCOPELFHOLO; // 0x10
		::System::Collections::Generic::IList_1<::System::UInt64>* GMIODKLGJHD; // 0x18
		::Il2CppArray<::System::UInt32>* EMKFBDEACMI; // 0x20
		::System::Boolean HKMGIBJNCFE; // 0x28
		::System::Boolean BANLOOPBKLF; // 0x29
		::System::Byte _padding0[0x2];
		::System::UInt32 CMFNKDKKGGI; // 0x2C
		::System::Double MDDJDEINLPM; // 0x30
		static ::System::Random** StaticGet_OLEEIPHBJKB()
		{
			return (::System::Random**)UnitySDK::FromName("", "BBGMIOOFEOC")->GetStaticField(0x110C0);
		}

		static ::System::UInt32* StaticGet_MMIPPDHLFFC()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "BBGMIOOFEOC")->GetStaticField(0x3950);
		}

		static ::System::Boolean* StaticGet_FKDBKPHFEKF()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BBGMIOOFEOC")->GetStaticField(0x3954);
		}

		static ::System::UInt32* StaticGet_PCJLEJGEGGD()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "BBGMIOOFEOC")->GetStaticField(0x3958);
		}

		// static const ::System::Object HAMBMFPEOOK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGMIOOFEOC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBGMIOOFEOC_CCTOR_OFFSET))();
		}

		::NINEMEMDNBK* HCGIKFPKLOE()
		{
			return ((::NINEMEMDNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGMIOOFEOC_HCGIKFPKLOE_OFFSET))(this);
		}

		::System::Void AAACJMLFNMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGMIOOFEOC_AAACJMLFNMM_OFFSET))(this);
		}

		::System::Boolean ADAJBOAFNNB(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BBGMIOOFEOC_ADAJBOAFNNB_OFFSET))(this, a1);
		}

		::System::Boolean OCNMECOOLON(::System::Collections::Generic::IList_1<::System::UInt64>* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt64>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BBGMIOOFEOC_OCNMECOOLON_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 FGDKCJPMBEG(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + BBGMIOOFEOC_FGDKCJPMBEG_OFFSET))(this, a1);
		}

		::System::UInt64 LBNFHLPFFLD(::System::Int32 a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBGMIOOFEOC_LBNFHLPFFLD_OFFSET))(this, a1);
		}

		::System::Void ABPFENDKAME(::System::Int32 a1, ::Il2CppArray<::CIGLFKLHBGD>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::CIGLFKLHBGD>*))((::PBYTE)hIl2Cpp + BBGMIOOFEOC_ABPFENDKAME_OFFSET))(this, a1, a2);
		}

	};
