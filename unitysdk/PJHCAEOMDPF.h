#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
class FJNBODHINDM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PJHCAEOMDPF_CTOR_OFFSET UNITYSDK_OFFSET(0xC286EA0)
#define PJHCAEOMDPF_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xC286E10)
#define PJHCAEOMDPF_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xC286D00)
#define PJHCAEOMDPF_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xC286D70)

	class PJHCAEOMDPF : public ::GJPFGOGOLBI
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GCJJPFNPGCF; // 0x18
		::FJNBODHINDM* CACEADPJLPB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHCAEOMDPF_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHCAEOMDPF_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHCAEOMDPF_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void DADCFBHGLOH(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + PJHCAEOMDPF_DADCFBHGLOH_OFFSET))(this, a1);
		}

	};
