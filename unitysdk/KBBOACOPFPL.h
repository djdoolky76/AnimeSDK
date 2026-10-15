#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KBBOACOPFPL_OMLEGBGDEAC_OFFSET UNITYSDK_OFFSET(0xB2E6F90)

inline static constexpr unsigned int KBBOACOPFPL_TypeDefinitionIndex = 60112;

	class KBBOACOPFPL : public ::System::Object
	{
	public:
		static ::System::Single OMLEGBGDEAC(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + KBBOACOPFPL_OMLEGBGDEAC_OFFSET))(a1, a2);
		}

	};
