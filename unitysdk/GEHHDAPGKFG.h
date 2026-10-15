#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { class Type; }

#define GEHHDAPGKFG_BJFCPHAFOCE_OFFSET UNITYSDK_OFFSET(0x159D69D0)

inline static constexpr unsigned int GEHHDAPGKFG_TypeDefinitionIndex = 49151;

	class GEHHDAPGKFG : public ::System::Object
	{
	public:
		static ::System::String* BJFCPHAFOCE(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + GEHHDAPGKFG_BJFCPHAFOCE_OFFSET))(a1, a2);
		}

	};
