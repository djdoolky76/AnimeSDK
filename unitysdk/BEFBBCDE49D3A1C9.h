#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BEFBBCDE49D3A1C9_F00E6DA08DD8B285_OFFSET UNITYSDK_OFFSET(0x44157A0)
#define BEFBBCDE49D3A1C9_F1B4740111D550DC_OFFSET UNITYSDK_OFFSET(0x4415740)
#define BEFBBCDE49D3A1C9_F93C7C9383BE6B1A_OFFSET UNITYSDK_OFFSET(0x4415870)
#define BEFBBCDE49D3A1C9__CTOR_OFFSET UNITYSDK_OFFSET(0x44156D0)

inline static constexpr unsigned int BEFBBCDE49D3A1C9_TypeDefinitionIndex = 19001;

class BEFBBCDE49D3A1C9 : public ::System::Object
{
public:
	::Il2CppArray<::System::SByte>* BD61B8671BC80BD4; // 0x10
	::System::Int32 F6A75E6942D0ED9F; // 0x18

	::System::Void F1B4740111D550DC(::System::Boolean AAB7315A70A77741, ::System::Int32 F5EF7E29767E03BF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + BEFBBCDE49D3A1C9_F1B4740111D550DC_OFFSET))(this, AAB7315A70A77741, F5EF7E29767E03BF);
	}

	::System::Void F93C7C9383BE6B1A(::System::Int32 BB8C609F76620E45, ::System::Boolean AAB7315A70A77741)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BEFBBCDE49D3A1C9_F93C7C9383BE6B1A_OFFSET))(this, BB8C609F76620E45, AAB7315A70A77741);
	}

	::Il2CppArray<::System::SByte>* F00E6DA08DD8B285(::System::Int32 A73B96BE7F2DEBF7)
	{
		return ((::Il2CppArray<::System::SByte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEFBBCDE49D3A1C9_F00E6DA08DD8B285_OFFSET))(this, A73B96BE7F2DEBF7);
	}

	::System::Void _ctor(::System::Int32 F5EF7E29767E03BF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEFBBCDE49D3A1C9__CTOR_OFFSET))(this, F5EF7E29767E03BF);
	}
};
