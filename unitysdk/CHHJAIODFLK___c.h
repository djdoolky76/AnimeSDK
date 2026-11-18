#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define CHHJAIODFLK___C_HFDJKNDGMEH_OFFSET UNITYSDK_OFFSET(0x16A2B040)
#define CHHJAIODFLK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A2AFF0)
#define CHHJAIODFLK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2B030)

inline static constexpr unsigned int CHHJAIODFLK___c_TypeDefinitionIndex = 50528;

class CHHJAIODFLK___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__0_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(CHHJAIODFLK___c_TypeDefinitionIndex)->GetStaticField(0x3D620);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CHHJAIODFLK___c_TypeDefinitionIndex)->GetStaticField(0x3D628);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHHJAIODFLK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHJAIODFLK___C__CTOR_OFFSET))(this);
	}

	::System::Void HFDJKNDGMEH(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CHHJAIODFLK___C_HFDJKNDGMEH_OFFSET))(this, KGFGOODAFDH);
	}
};
