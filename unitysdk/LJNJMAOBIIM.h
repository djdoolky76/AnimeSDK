#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHJGMDOABJE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define LJNJMAOBIIM__CTOR_OFFSET UNITYSDK_OFFSET(0x12570750)

inline static constexpr unsigned int LJNJMAOBIIM_TypeDefinitionIndex = 74198;

class LJNJMAOBIIM : public ::System::Object
{
public:
	::System::String* HMKJHAKLOAN; // 0x10
	::System::Int32 HEINEACGCAF; // 0x18
	::AHJGMDOABJE GBBGOPBGONM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNJMAOBIIM__CTOR_OFFSET))(this);
	}
};
