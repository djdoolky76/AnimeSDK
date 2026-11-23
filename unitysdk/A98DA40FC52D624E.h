#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/A5F7BD813DE60ED2.h"

#define A98DA40FC52D624E_A21117EC8523D3E5_OFFSET UNITYSDK_OFFSET(0x3FF57C0)
#define A98DA40FC52D624E_E2108D7CE84D4997_OFFSET UNITYSDK_OFFSET(0x3FF5610)

inline static constexpr unsigned int A98DA40FC52D624E_TypeDefinitionIndex = 14541;

class A98DA40FC52D624E : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Object*>** StaticGet_BCC983483AC77F6E()
	{
		return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(A98DA40FC52D624E_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void E2108D7CE84D4997()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A98DA40FC52D624E_E2108D7CE84D4997_OFFSET))();
	}

	static ::A5F7BD813DE60ED2<::System::Object*> A21117EC8523D3E5()
	{
		return ((::A5F7BD813DE60ED2<::System::Object*>(*)())((::PBYTE)hIl2Cpp + A98DA40FC52D624E_A21117EC8523D3E5_OFFSET))();
	}
};
