#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define LLFHMHDJION__CTOR_OFFSET UNITYSDK_OFFSET(0x11F217A0)

inline static constexpr unsigned int LLFHMHDJION_TypeDefinitionIndex = 67222;

class LLFHMHDJION : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* EAFMPMAAAIB; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18
	::System::Boolean LIEJIGMGGOL; // 0x1C
	::System::Byte _padding0[0x3];
	::System::Int32 KDCEANACOME; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFHMHDJION__CTOR_OFFSET))(this);
	}
};
