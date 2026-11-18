#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DMOECAGFOMN_GOMOGOFLNMO__CCTOR_OFFSET UNITYSDK_OFFSET(0x134584A0)

inline static constexpr unsigned int DMOECAGFOMN_GOMOGOFLNMO_TypeDefinitionIndex = 38264;

class DMOECAGFOMN_GOMOGOFLNMO : public ::System::Object
{
public:
	static ::System::String** StaticGet_DBFANKDPBGF()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_GOMOGOFLNMO_TypeDefinitionIndex)->GetStaticField(0x37370);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOECAGFOMN_GOMOGOFLNMO__CCTOR_OFFSET))();
	}
};
