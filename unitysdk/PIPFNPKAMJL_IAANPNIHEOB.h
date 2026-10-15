#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PIPFNPKAMJL_IAANPNIHEOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD86460)
#define PIPFNPKAMJL_IAANPNIHEOB_CPMJGCJEINF_OFFSET UNITYSDK_OFFSET(0x1DD85B00)
#define PIPFNPKAMJL_IAANPNIHEOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD85AB0)
#define PIPFNPKAMJL_IAANPNIHEOB_DEOEBPKJGAF_OFFSET UNITYSDK_OFFSET(0x1DD85C40)
#define PIPFNPKAMJL_IAANPNIHEOB_EIAGPHLDPGP_OFFSET UNITYSDK_OFFSET(0x1DD85F80)
#define PIPFNPKAMJL_IAANPNIHEOB_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x1DD862C0)
#define PIPFNPKAMJL_IAANPNIHEOB_PEFJPMNIOEC_OFFSET UNITYSDK_OFFSET(0x1DD862E0)

inline static constexpr unsigned int PIPFNPKAMJL_IAANPNIHEOB_TypeDefinitionIndex = 43956;

	class PIPFNPKAMJL_IAANPNIHEOB : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt64>* HEEDMBFGNCL; // 0x10
		::System::Int32 LAPDCPGELLC; // 0x18
		static ::System::Int32* StaticGet_AMPNIGHHBJK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IAANPNIHEOB")->GetStaticField(0x14390);
		}

		static ::System::Int32* StaticGet_JAMPBDCLPIA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IAANPNIHEOB")->GetStaticField(0x14394);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPFNPKAMJL_IAANPNIHEOB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPFNPKAMJL_IAANPNIHEOB_CCTOR_OFFSET))();
		}

		::System::Void EIAGPHLDPGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPFNPKAMJL_IAANPNIHEOB_EIAGPHLDPGP_OFFSET))(this);
		}

		::System::Void PEFJPMNIOEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPFNPKAMJL_IAANPNIHEOB_PEFJPMNIOEC_OFFSET))(this);
		}

		::System::UInt64 JJNFOPNOPBF(::System::UInt64 a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PIPFNPKAMJL_IAANPNIHEOB_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Void CPMJGCJEINF(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PIPFNPKAMJL_IAANPNIHEOB_CPMJGCJEINF_OFFSET))(this, a1);
		}

		::System::UInt64 DEOEBPKJGAF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPFNPKAMJL_IAANPNIHEOB_DEOEBPKJGAF_OFFSET))(this);
		}

	};
