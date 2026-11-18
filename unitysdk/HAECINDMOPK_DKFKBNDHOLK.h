#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKKDCFLLIOF;
namespace System { class String; }

#define HAECINDMOPK_DKFKBNDHOLK_HLBOOBJOCJP_OFFSET UNITYSDK_OFFSET(0x17A321A0)
#define HAECINDMOPK_DKFKBNDHOLK__CTOR_OFFSET UNITYSDK_OFFSET(0x17A32190)

inline static constexpr unsigned int HAECINDMOPK_DKFKBNDHOLK_TypeDefinitionIndex = 44634;

class HAECINDMOPK_DKFKBNDHOLK : public ::System::Object
{
public:
	::IKKDCFLLIOF* HODAIDNDKHD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAECINDMOPK_DKFKBNDHOLK__CTOR_OFFSET))(this);
	}

	::System::Boolean HLBOOBJOCJP(::System::String* AELLPLBJELA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HAECINDMOPK_DKFKBNDHOLK_HLBOOBJOCJP_OFFSET))(this, AELLPLBJELA);
	}
};
