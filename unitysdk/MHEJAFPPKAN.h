#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MHEJAFPPKAN__CTOR_OFFSET UNITYSDK_OFFSET(0x13D2DF10)

inline static constexpr unsigned int MHEJAFPPKAN_TypeDefinitionIndex = 70218;

class MHEJAFPPKAN : public ::System::Object
{
public:
	::System::UInt32 NCCOMOEHEHK; // 0x10
	::System::UInt32 LFEDBFBLGOM; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEJAFPPKAN__CTOR_OFFSET))(this);
	}
};
