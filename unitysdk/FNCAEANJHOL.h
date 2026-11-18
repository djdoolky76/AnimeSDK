#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FNCAEANJHOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x179B6F10)

inline static constexpr unsigned int FNCAEANJHOL_TypeDefinitionIndex = 57225;

class FNCAEANJHOL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OFLAMLCLONJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FNCAEANJHOL_TypeDefinitionIndex)->GetStaticField(0x3DC90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNCAEANJHOL__CCTOR_OFFSET))();
	}
};
