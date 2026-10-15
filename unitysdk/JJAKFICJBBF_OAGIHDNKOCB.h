#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFBFJDCECML;
class JJAKFICJBBF_OAGIHDNKOCB;

#define JJAKFICJBBF_OAGIHDNKOCB_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1C6CDF20)
#define JJAKFICJBBF_OAGIHDNKOCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6CC5C0)

inline static constexpr unsigned int JJAKFICJBBF_OAGIHDNKOCB_TypeDefinitionIndex = 37279;

	class JJAKFICJBBF_OAGIHDNKOCB : public ::System::Object
	{
	public:
		::IFBFJDCECML* CKLPGEPGCMJ; // 0x10
		::System::UInt32 IHJJCCLGPJH; // 0x18
		::System::Single BDCFLFPLDAN; // 0x1C
		::System::Single IDGNLJPNCFD; // 0x20
		::System::Single BNGDECGNLJF; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAKFICJBBF_OAGIHDNKOCB_CTOR_OFFSET))(this);
		}

		::System::Int32 CompareTo(::JJAKFICJBBF_OAGIHDNKOCB* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::JJAKFICJBBF_OAGIHDNKOCB*))((::PBYTE)hIl2Cpp + JJAKFICJBBF_OAGIHDNKOCB_COMPARETO_OFFSET))(this, a1);
		}

	};
