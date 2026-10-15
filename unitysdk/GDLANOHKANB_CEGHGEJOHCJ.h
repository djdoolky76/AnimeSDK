#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDLANOHKANB_MENFMLGGFGK;

#define GDLANOHKANB_CEGHGEJOHCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15999780)
#define GDLANOHKANB_CEGHGEJOHCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x159997B0)
#define GDLANOHKANB_CEGHGEJOHCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15999880)

inline static constexpr unsigned int GDLANOHKANB_CEGHGEJOHCJ_TypeDefinitionIndex = 47924;

	class GDLANOHKANB_CEGHGEJOHCJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLANOHKANB_CEGHGEJOHCJ_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::GDLANOHKANB_MENFMLGGFGK* a1, ::GDLANOHKANB_MENFMLGGFGK* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDLANOHKANB_MENFMLGGFGK*, ::GDLANOHKANB_MENFMLGGFGK*))((::PBYTE)hIl2Cpp + GDLANOHKANB_CEGHGEJOHCJ_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::GDLANOHKANB_MENFMLGGFGK* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::GDLANOHKANB_MENFMLGGFGK*))((::PBYTE)hIl2Cpp + GDLANOHKANB_CEGHGEJOHCJ_GETHASHCODE_OFFSET))(this, a1);
		}

	};
