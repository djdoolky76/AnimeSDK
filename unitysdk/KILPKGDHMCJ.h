#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KILPKGDHMCJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x177196F0)

inline static constexpr unsigned int KILPKGDHMCJ_TypeDefinitionIndex = 53397;

class KILPKGDHMCJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DOELAJIOCKF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KILPKGDHMCJ_TypeDefinitionIndex)->GetStaticField(0x38270);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KILPKGDHMCJ__CCTOR_OFFSET))();
	}
};
