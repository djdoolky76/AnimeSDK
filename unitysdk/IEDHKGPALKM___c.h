#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define IEDHKGPALKM___C_MACHJHGEPPO_OFFSET UNITYSDK_OFFSET(0x1656D8B0)
#define IEDHKGPALKM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1656D860)
#define IEDHKGPALKM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1656D8A0)

inline static constexpr unsigned int IEDHKGPALKM___c_TypeDefinitionIndex = 89862;

class IEDHKGPALKM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IEDHKGPALKM___c_TypeDefinitionIndex)->GetStaticField(0x443D0);
	}
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__2_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(IEDHKGPALKM___c_TypeDefinitionIndex)->GetStaticField(0x443D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEDHKGPALKM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDHKGPALKM___C__CTOR_OFFSET))(this);
	}

	::System::Void MACHJHGEPPO(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM___C_MACHJHGEPPO_OFFSET))(this, LJBPECKCCEA);
	}
};
