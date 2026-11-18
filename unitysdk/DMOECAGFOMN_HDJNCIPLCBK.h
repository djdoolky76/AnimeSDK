#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DMOECAGFOMN_HDJNCIPLCBK__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BD1F00)

inline static constexpr unsigned int DMOECAGFOMN_HDJNCIPLCBK_TypeDefinitionIndex = 38290;

class DMOECAGFOMN_HDJNCIPLCBK : public ::System::Object
{
public:
	static ::System::String** StaticGet_NGAMIIKFACO()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_HDJNCIPLCBK_TypeDefinitionIndex)->GetStaticField(0x45EA0);
	}
	static ::System::String** StaticGet_DBGJNFKBEJK()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_HDJNCIPLCBK_TypeDefinitionIndex)->GetStaticField(0x45EA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOECAGFOMN_HDJNCIPLCBK__CCTOR_OFFSET))();
	}
};
