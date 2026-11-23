#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BF52BA61B7503140__CCTOR_OFFSET UNITYSDK_OFFSET(0x4454670)
#define BF52BA61B7503140__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BF52BA61B7503140_TypeDefinitionIndex = 19052;

class BF52BA61B7503140 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_E479BD3B4884F4EB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BF52BA61B7503140_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int32* StaticGet_FE3C8CDA76403872()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BF52BA61B7503140_TypeDefinitionIndex)->GetStaticField(0x4);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF52BA61B7503140__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BF52BA61B7503140__CCTOR_OFFSET))();
	}
};
