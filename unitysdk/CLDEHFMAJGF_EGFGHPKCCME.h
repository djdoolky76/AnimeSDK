#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICIAEPPMOMP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLDEHFMAJGF_EGFGHPKCCME_DHIPDHKMPID_OFFSET UNITYSDK_OFFSET(0x19A17A20)
#define CLDEHFMAJGF_EGFGHPKCCME__CTOR_OFFSET UNITYSDK_OFFSET(0x19A17A10)

inline static constexpr unsigned int CLDEHFMAJGF_EGFGHPKCCME_TypeDefinitionIndex = 44079;

class CLDEHFMAJGF_EGFGHPKCCME : public ::System::Object
{
public:
	::System::Int32 APNAIHILCKO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDEHFMAJGF_EGFGHPKCCME__CTOR_OFFSET))(this);
	}

	::System::Boolean DHIPDHKMPID(::System::ValueTuple_2<::System::Int32, ::ICIAEPPMOMP> IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::ICIAEPPMOMP>))((::PBYTE)hIl2Cpp + CLDEHFMAJGF_EGFGHPKCCME_DHIPDHKMPID_OFFSET))(this, IPMMCGDMODG);
	}
};
