#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class Exception; }
namespace System { class String; }

#define HCPOGOIJDHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x16B72BF0)
#define HCPOGOIJDHI_CTOR_OFFSET UNITYSDK_OFFSET(0x16B72B90)

inline static constexpr unsigned int HCPOGOIJDHI_TypeDefinitionIndex = 69453;

	class HCPOGOIJDHI : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HCPOGOIJDHI_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + HCPOGOIJDHI_CTOR_1_OFFSET))(this, a1, a2);
		}

	};
