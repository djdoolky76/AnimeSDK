#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define AENEFHBMEMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C52FF50)
#define AENEFHBMEMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C52FB80)

inline static constexpr unsigned int AENEFHBMEMJ_TypeDefinitionIndex = 41627;

	class AENEFHBMEMJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENEFHBMEMJ_CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AENEFHBMEMJ_TOSTRING_OFFSET))(this);
		}

	};
