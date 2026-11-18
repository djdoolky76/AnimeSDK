#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DMOECAGFOMN_IOHAHKLGPOC__CCTOR_OFFSET UNITYSDK_OFFSET(0x120924C0)

inline static constexpr unsigned int DMOECAGFOMN_IOHAHKLGPOC_TypeDefinitionIndex = 38278;

class DMOECAGFOMN_IOHAHKLGPOC : public ::System::Object
{
public:
	static ::System::String** StaticGet_DBGJNFKBEJK()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_IOHAHKLGPOC_TypeDefinitionIndex)->GetStaticField(0x431F0);
	}
	static ::System::String** StaticGet_OHLGFAMCOOL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_IOHAHKLGPOC_TypeDefinitionIndex)->GetStaticField(0x431F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOECAGFOMN_IOHAHKLGPOC__CCTOR_OFFSET))();
	}
};
