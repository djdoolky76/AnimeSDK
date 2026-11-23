#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BB8559CEF83DD869.h"

class BA7A0A5584C0A1B4;
namespace System { class String; }

#define AC01B98728DB51DB_F2DC7ACFEB0DBA61_OFFSET UNITYSDK_OFFSET(0x2A0D970)
#define AC01B98728DB51DB__CTOR_OFFSET UNITYSDK_OFFSET(0x2A0DA40)

inline static constexpr unsigned int AC01B98728DB51DB_TypeDefinitionIndex = 15870;

class AC01B98728DB51DB : public ::BB8559CEF83DD869
{
public:
	::System::Void _ctor(::System::String* F929E3192CE81609, ::System::String* B2BA3F042BDF7499, ::System::String* BD2C65BCCC92F212, ::System::String* A325D3DED758A5CA, ::System::String* EAAFA9E91B6B3EB6, ::System::String* B966D6EDF409A537)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AC01B98728DB51DB__CTOR_OFFSET))(this, F929E3192CE81609, B2BA3F042BDF7499, BD2C65BCCC92F212, A325D3DED758A5CA, EAAFA9E91B6B3EB6, B966D6EDF409A537);
	}

	::System::Void F2DC7ACFEB0DBA61(::BA7A0A5584C0A1B4* A0EB125A66A994BD)
	{
		return ((::System::Void(*)(::PVOID, ::BA7A0A5584C0A1B4*))((::PBYTE)hIl2Cpp + AC01B98728DB51DB_F2DC7ACFEB0DBA61_OFFSET))(this, A0EB125A66A994BD);
	}
};
