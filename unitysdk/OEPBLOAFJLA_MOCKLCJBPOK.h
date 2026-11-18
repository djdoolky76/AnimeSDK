#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AdditionalCanvasShaderChannels.h"

#define OEPBLOAFJLA_MOCKLCJBPOK__CTOR_OFFSET UNITYSDK_OFFSET(0xB322470)

inline static constexpr unsigned int OEPBLOAFJLA_MOCKLCJBPOK_TypeDefinitionIndex = 71195;

class OEPBLOAFJLA_MOCKLCJBPOK : public ::System::Object
{
public:
	::System::Boolean IPKALAOEHDA; // 0x10
	::System::Boolean CPJEMKAPBKK; // 0x11
	::System::Byte _padding0[0x2];
	::UnityEngine::AdditionalCanvasShaderChannels OHJIGCCFNBC; // 0x14
	::System::Int32 FHFGLCPDJPP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPBLOAFJLA_MOCKLCJBPOK__CTOR_OFFSET))(this);
	}
};
