#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int AkGameObjPositionOffsetData_TypeDefinitionIndex = 20449;

class AkGameObjPositionOffsetData : public ::System::Object
{
public:
	::System::Boolean KeepMe; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 positionOffset; // 0x14
};
