#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HGDNNBOMHKL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AF53C0)

inline static constexpr unsigned int HGDNNBOMHKL_TypeDefinitionIndex = 69315;

class HGDNNBOMHKL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EKOGOENCHJH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HGDNNBOMHKL_TypeDefinitionIndex)->GetStaticField(0x51450);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGDNNBOMHKL__CCTOR_OFFSET))();
	}
};
