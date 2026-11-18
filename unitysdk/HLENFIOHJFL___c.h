#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define HLENFIOHJFL___C_PNMCAHHKGCJ_OFFSET UNITYSDK_OFFSET(0x17E54E70)
#define HLENFIOHJFL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E54E20)
#define HLENFIOHJFL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E54E60)

inline static constexpr unsigned int HLENFIOHJFL___c_TypeDefinitionIndex = 54197;

class HLENFIOHJFL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HLENFIOHJFL___c_TypeDefinitionIndex)->GetStaticField(0x464B0);
	}
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__9_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(HLENFIOHJFL___c_TypeDefinitionIndex)->GetStaticField(0x464B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLENFIOHJFL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLENFIOHJFL___C__CTOR_OFFSET))(this);
	}

	::System::Void PNMCAHHKGCJ(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL___C_PNMCAHHKGCJ_OFFSET))(this, BHDNBGLCNOM);
	}
};
