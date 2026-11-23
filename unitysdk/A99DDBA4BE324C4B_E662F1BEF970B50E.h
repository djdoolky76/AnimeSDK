#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A99DDBA4BE324C4B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A99DDBA4BE324C4B_E662F1BEF970B50E_B87B1A3EF308D7F7_OFFSET UNITYSDK_OFFSET(0x16C4320)
#define A99DDBA4BE324C4B_E662F1BEF970B50E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A99DDBA4BE324C4B_E662F1BEF970B50E_TypeDefinitionIndex = 482;

class A99DDBA4BE324C4B_E662F1BEF970B50E : public ::System::Object
{
public:
	::A99DDBA4BE324C4B* A544919C800E2923; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* F426885C8D5F0E99; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A99DDBA4BE324C4B_E662F1BEF970B50E__CTOR_OFFSET))(this);
	}

	::System::Int32 B87B1A3EF308D7F7(::System::UInt32 BB8C609F76620E45, ::System::UInt32 A0A0D02932F12CFD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + A99DDBA4BE324C4B_E662F1BEF970B50E_B87B1A3EF308D7F7_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
	}
};
