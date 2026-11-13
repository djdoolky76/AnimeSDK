#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOEIAGPENLB;
class PHOJHPMLBCJ;

#define AFBIFEGDJMM_CTOR_OFFSET UNITYSDK_OFFSET(0x18DAA290)
#define AFBIFEGDJMM_DKJBEDKEEGH_OFFSET UNITYSDK_OFFSET(0x18DAA360)
#define AFBIFEGDJMM_JAFGAIMLKGL_OFFSET UNITYSDK_OFFSET(0x18DAA3B0)
#define AFBIFEGDJMM_LMCKAHPJAEE_OFFSET UNITYSDK_OFFSET(0x18DAA300)

inline static constexpr unsigned int AFBIFEGDJMM_TypeDefinitionIndex = 83503;

	class AFBIFEGDJMM : public ::System::Object
	{
	public:
		::BOEIAGPENLB* LBNAGLIGKIO; // 0x10
		::System::Void _ctor(::BOEIAGPENLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOEIAGPENLB*))((::PBYTE)hIl2Cpp + AFBIFEGDJMM_CTOR_OFFSET))(this, a1);
		}

		::PHOJHPMLBCJ* LMCKAHPJAEE(::System::UInt32 a1)
		{
			return ((::PHOJHPMLBCJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFBIFEGDJMM_LMCKAHPJAEE_OFFSET))(this, a1);
		}

		::System::UInt32 DKJBEDKEEGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBIFEGDJMM_DKJBEDKEEGH_OFFSET))(this);
		}

		::System::Boolean JAFGAIMLKGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBIFEGDJMM_JAFGAIMLKGL_OFFSET))(this);
		}

	};
