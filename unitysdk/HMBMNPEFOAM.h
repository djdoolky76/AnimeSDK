#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDMBNFAMCOI;

#define HMBMNPEFOAM_CTOR_OFFSET UNITYSDK_OFFSET(0x15D796B0)

inline static constexpr unsigned int HMBMNPEFOAM_TypeDefinitionIndex = 80563;

	class HMBMNPEFOAM : public ::System::Object
	{
	public:
		::LDMBNFAMCOI* HNEOOKPBCNK; // 0x10
		::System::Void _ctor(::LDMBNFAMCOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDMBNFAMCOI*))((::PBYTE)hIl2Cpp + HMBMNPEFOAM_CTOR_OFFSET))(this, a1);
		}

	};
