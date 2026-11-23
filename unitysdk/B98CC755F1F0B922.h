#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B98CC755F1F0B922_FDE6A3EBB57C454B_OFFSET UNITYSDK_OFFSET(0x444EE00)

inline static constexpr unsigned int B98CC755F1F0B922_TypeDefinitionIndex = 19025;

class B98CC755F1F0B922 : public ::System::Object
{
public:
	static ::System::String* FDE6A3EBB57C454B(::System::Int32 BB8C609F76620E45)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + B98CC755F1F0B922_FDE6A3EBB57C454B_OFFSET))(BB8C609F76620E45);
	}
};
