#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCEIJBFAOAI;
class HFBEJKNDLJF;

#define HFBEJKNDLJF_NKBFPMBIEDN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1A213640)
#define HFBEJKNDLJF_NKBFPMBIEDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A213700)

inline static constexpr unsigned int HFBEJKNDLJF_NKBFPMBIEDN_TypeDefinitionIndex = 82236;

	class HFBEJKNDLJF_NKBFPMBIEDN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBEJKNDLJF_NKBFPMBIEDN_CTOR_OFFSET))(this);
		}

		::HFBEJKNDLJF* BPLPBPMEODA(::CCEIJBFAOAI* a1, ::System::Int32 a2)
		{
			return ((::HFBEJKNDLJF*(*)(::PVOID, ::CCEIJBFAOAI*, ::System::Int32))((::PBYTE)hIl2Cpp + HFBEJKNDLJF_NKBFPMBIEDN_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
