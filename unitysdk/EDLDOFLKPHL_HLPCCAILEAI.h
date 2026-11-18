#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define EDLDOFLKPHL_HLPCCAILEAI_HCNFBGPJPDH_OFFSET UNITYSDK_OFFSET(0x10F21030)
#define EDLDOFLKPHL_HLPCCAILEAI_MJOFMAJMOKF_OFFSET UNITYSDK_OFFSET(0x10F21020)
#define EDLDOFLKPHL_HLPCCAILEAI__CTOR_OFFSET UNITYSDK_OFFSET(0x10F21010)

inline static constexpr unsigned int EDLDOFLKPHL_HLPCCAILEAI_TypeDefinitionIndex = 61494;

class EDLDOFLKPHL_HLPCCAILEAI : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action* ODFGGLKFHEM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_HLPCCAILEAI__CTOR_OFFSET))(this);
	}

	::System::Void MJOFMAJMOKF(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_HLPCCAILEAI_MJOFMAJMOKF_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void HCNFBGPJPDH(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_HLPCCAILEAI_HCNFBGPJPDH_OFFSET))(this, NAPFALLANDL);
	}
};
