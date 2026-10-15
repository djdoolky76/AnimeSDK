#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDMBNFAMCOI;

#define CMAMEPBHDDP_CTOR_OFFSET UNITYSDK_OFFSET(0xDA1CF20)

inline static constexpr unsigned int CMAMEPBHDDP_TypeDefinitionIndex = 80563;

	class CMAMEPBHDDP : public ::System::Object
	{
	public:
		::LDMBNFAMCOI* HNEOOKPBCNK; // 0x10
		::System::Void _ctor(::LDMBNFAMCOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDMBNFAMCOI*))((::PBYTE)hIl2Cpp + CMAMEPBHDDP_CTOR_OFFSET))(this, a1);
		}

	};
