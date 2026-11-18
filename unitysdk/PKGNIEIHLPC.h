#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PKGNIEIHLPC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2B4770)

inline static constexpr unsigned int PKGNIEIHLPC_TypeDefinitionIndex = 57077;

class PKGNIEIHLPC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CIIAHIDOOOB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PKGNIEIHLPC_TypeDefinitionIndex)->GetStaticField(0x4FE40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKGNIEIHLPC__CCTOR_OFFSET))();
	}
};
