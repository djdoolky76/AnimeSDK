#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB07E24B584983C1.h"

#define A62C5F370697FE60_A3C2F655C6B4F5E2_OFFSET UNITYSDK_OFFSET(0x1CEBB10)
#define A62C5F370697FE60_AFD5178090BD77F2_OFFSET UNITYSDK_OFFSET(0x1CEB9C0)
#define A62C5F370697FE60__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEBC10)
#define A62C5F370697FE60__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A62C5F370697FE60_TypeDefinitionIndex = 9868;

class A62C5F370697FE60 : public ::AB07E24B584983C1
{
public:
	static ::System::UInt32* StaticGet_EFC7F89A24100A97()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(A62C5F370697FE60_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::UInt32 F1AD39C8B00EB5DB; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A62C5F370697FE60__CCTOR_OFFSET))();
	}

	::System::Void A3C2F655C6B4F5E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A62C5F370697FE60_A3C2F655C6B4F5E2_OFFSET))(this);
	}

	::System::Void AFD5178090BD77F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A62C5F370697FE60_AFD5178090BD77F2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A62C5F370697FE60__CTOR_OFFSET))(this);
	}
};
