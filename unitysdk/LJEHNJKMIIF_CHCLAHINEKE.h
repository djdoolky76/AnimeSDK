#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IODJKOGAJKC;
class LJEHNJKMIIF;

#define LJEHNJKMIIF_CHCLAHINEKE_DKBCMHMAPGI_OFFSET UNITYSDK_OFFSET(0x12A5F8A0)
#define LJEHNJKMIIF_CHCLAHINEKE__CTOR_OFFSET UNITYSDK_OFFSET(0x12A5F890)

inline static constexpr unsigned int LJEHNJKMIIF_CHCLAHINEKE_TypeDefinitionIndex = 88373;

class LJEHNJKMIIF_CHCLAHINEKE : public ::System::Object
{
public:
	::LJEHNJKMIIF* KLHPEBKNIFB; // 0x10
	::IODJKOGAJKC* CGICDEAAEKJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHNJKMIIF_CHCLAHINEKE__CTOR_OFFSET))(this);
	}

	::System::Void DKBCMHMAPGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHNJKMIIF_CHCLAHINEKE_DKBCMHMAPGI_OFFSET))(this);
	}
};
