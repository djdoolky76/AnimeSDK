#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int HLLBGBCAMCH_TypeDefinitionIndex = 90106;

struct alignas(4) HLLBGBCAMCH
{
	::System::Int32 KKIIJGFNHOD; // 0x10
	::System::Int32 DEDIHJAOPNI; // 0x14
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x18
	::UnityEngine::Quaternion BFBELMDIAHI; // 0x24
	::UnityEngine::Vector3 DLJDBOIFHIH; // 0x34
	::System::Byte IBMBBKBBHHP; // 0x40
};
