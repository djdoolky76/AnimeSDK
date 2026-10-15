#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGGELBFHJIM;

#define BJDOCGAJBOK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7942B0)
#define BJDOCGAJBOK_LOMPGELJCLM_OFFSET UNITYSDK_OFFSET(0xB7942C0)

inline static constexpr unsigned int BJDOCGAJBOK_TypeDefinitionIndex = 79050;

	class BJDOCGAJBOK : public ::System::Object
	{
	public:
		::LGGELBFHJIM* LBNAGLIGKIO; // 0x10
		::System::Void _ctor(::LGGELBFHJIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGGELBFHJIM*))((::PBYTE)hIl2Cpp + BJDOCGAJBOK_CTOR_OFFSET))(this, a1);
		}

		::System::Void LOMPGELJCLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDOCGAJBOK_LOMPGELJCLM_OFFSET))(this);
		}

	};
