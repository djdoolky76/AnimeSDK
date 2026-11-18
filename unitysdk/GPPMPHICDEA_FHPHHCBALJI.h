#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define GPPMPHICDEA_FHPHHCBALJI_GKOIABHFNND_OFFSET UNITYSDK_OFFSET(0x16F1A700)
#define GPPMPHICDEA_FHPHHCBALJI__CTOR_OFFSET UNITYSDK_OFFSET(0x16F1A6F0)

inline static constexpr unsigned int GPPMPHICDEA_FHPHHCBALJI_TypeDefinitionIndex = 42634;

class GPPMPHICDEA_FHPHHCBALJI : public ::System::Object
{
public:
	::System::Action* DIOMMCOEAMP; // 0x10
	::System::String* HMJBMNAAGKB; // 0x18
	::UnityEngine::Animation* BKOLCDPOJAL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_FHPHHCBALJI__CTOR_OFFSET))(this);
	}

	::System::Void GKOIABHFNND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_FHPHHCBALJI_GKOIABHFNND_OFFSET))(this);
	}
};
