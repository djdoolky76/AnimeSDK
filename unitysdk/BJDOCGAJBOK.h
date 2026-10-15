#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGGELBFHJIM;

#define BJDOCGAJBOK_CTOR_OFFSET UNITYSDK_OFFSET(0xB799080)
#define BJDOCGAJBOK_LOMPGELJCLM_OFFSET UNITYSDK_OFFSET(0xB799090)

inline static constexpr unsigned int BJDOCGAJBOK_TypeDefinitionIndex = 79051;

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
