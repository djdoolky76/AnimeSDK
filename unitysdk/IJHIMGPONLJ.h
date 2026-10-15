#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
class NJKFOJJDGGG;

#define IJHIMGPONLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1645B2D0)
#define IJHIMGPONLJ_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x1645B060)

inline static constexpr unsigned int IJHIMGPONLJ_TypeDefinitionIndex = 65186;

	class IJHIMGPONLJ : public ::AMCOEFHHBPO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHIMGPONLJ_CTOR_OFFSET))(this);
		}

		::System::Void UpdateModifier(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + IJHIMGPONLJ_UPDATEMODIFIER_OFFSET))(this, a1);
		}

	};
