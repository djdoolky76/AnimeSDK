#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DCAPDHHFBNN;
namespace System { template <typename T> class Action_1; }

#define KMFHOBLFKPJ___C_DHIPFOHDMOE_OFFSET UNITYSDK_OFFSET(0x129A7B80)
#define KMFHOBLFKPJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x129A7B30)
#define KMFHOBLFKPJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x129A7B70)

inline static constexpr unsigned int KMFHOBLFKPJ___c_TypeDefinitionIndex = 77872;

class KMFHOBLFKPJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KMFHOBLFKPJ___c_TypeDefinitionIndex)->GetStaticField(0x41470);
	}
	static ::System::Action_1<::DCAPDHHFBNN*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::DCAPDHHFBNN*>**)Il2CppClass::FromTypeDefinitionIndex(KMFHOBLFKPJ___c_TypeDefinitionIndex)->GetStaticField(0x41478);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMFHOBLFKPJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ___C__CTOR_OFFSET))(this);
	}

	::System::Void DHIPFOHDMOE(::DCAPDHHFBNN* BJCHAFCBJLB)
	{
		return ((::System::Void(*)(::PVOID, ::DCAPDHHFBNN*))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ___C_DHIPFOHDMOE_OFFSET))(this, BJCHAFCBJLB);
	}
};
