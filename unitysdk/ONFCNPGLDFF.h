#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ONFCNPGLDFF_CPKOCHPCJMI_OFFSET UNITYSDK_OFFSET(0x17D792E0)

inline static constexpr unsigned int ONFCNPGLDFF_TypeDefinitionIndex = 72911;

	class ONFCNPGLDFF : public ::System::Object
	{
	public:
		static ::System::String* CPKOCHPCJMI(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ONFCNPGLDFF_CPKOCHPCJMI_OFFSET))(a1);
		}

	};
