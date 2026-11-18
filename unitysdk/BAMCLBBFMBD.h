#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace System { class Object; }
template <typename T> class KLIOMMIOFDC_1;

#define BAMCLBBFMBD_BNLMEKFFIOL_OFFSET UNITYSDK_OFFSET(0x14C29FE0)
#define BAMCLBBFMBD_EOPCEPCFLLM_OFFSET UNITYSDK_OFFSET(0x14C2A1A0)
#define BAMCLBBFMBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x14C29D60)
#define BAMCLBBFMBD_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x14C29F40)
#define BAMCLBBFMBD_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x14C2A0C0)
#define BAMCLBBFMBD_JNOLHPNIDHF_OFFSET UNITYSDK_OFFSET(0x14C2A2C0)
#define BAMCLBBFMBD_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x14C29E70)
#define BAMCLBBFMBD__CTOR_OFFSET UNITYSDK_OFFSET(0x14C29F30)

inline static constexpr unsigned int BAMCLBBFMBD_TypeDefinitionIndex = 64667;

class BAMCLBBFMBD : public ::JJEJBPGJPJN
{
public:
	::KLIOMMIOFDC_1<::System::UInt32>* HAPEPFAGBPG; // 0x88
	::KLIOMMIOFDC_1<::System::Int32>* NOCEJKJAHJC; // 0x90
	::KLIOMMIOFDC_1<::System::Object*>* LLEPLCNIGKE; // 0x98
	::System::Boolean LDHPAFFKHEH; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMCLBBFMBD__CTOR_OFFSET))(this);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMCLBBFMBD_GETHASHCODE_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMCLBBFMBD_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMCLBBFMBD_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean BNLMEKFFIOL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMCLBBFMBD_BNLMEKFFIOL_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMCLBBFMBD_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Void EOPCEPCFLLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMCLBBFMBD_EOPCEPCFLLM_OFFSET))(this);
	}

	::System::Boolean JNOLHPNIDHF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMCLBBFMBD_JNOLHPNIDHF_OFFSET))(this);
	}
};
