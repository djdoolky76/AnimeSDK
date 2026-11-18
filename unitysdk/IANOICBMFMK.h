#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IANOICBMFMK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1012C5E0)

inline static constexpr unsigned int IANOICBMFMK_TypeDefinitionIndex = 77356;

class IANOICBMFMK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NAGOMDIGNPD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IANOICBMFMK_TypeDefinitionIndex)->GetStaticField(0x3B220);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IANOICBMFMK__CCTOR_OFFSET))();
	}
};
