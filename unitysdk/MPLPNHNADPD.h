#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define MPLPNHNADPD__CTOR_OFFSET UNITYSDK_OFFSET(0x131B0C50)

inline static constexpr unsigned int MPLPNHNADPD_TypeDefinitionIndex = 61626;

class MPLPNHNADPD : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Boolean BPCLLPIGOLE; // 0x10
	::System::Boolean FDAIJDFOMNG; // 0x11
	::System::Boolean JODFEIGBNMK; // 0x12
	::System::Byte _padding0[0x5];
	::System::ValueTuple_2<::System::Double, ::System::Double> MGCAIFLDMHM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLPNHNADPD__CTOR_OFFSET))(this);
	}
};
