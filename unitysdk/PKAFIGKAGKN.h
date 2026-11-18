#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PKAFIGKAGKN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D62C860)

inline static constexpr unsigned int PKAFIGKAGKN_TypeDefinitionIndex = 71820;

class PKAFIGKAGKN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JGNIIHABBPH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PKAFIGKAGKN_TypeDefinitionIndex)->GetStaticField(0x4B290);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKAFIGKAGKN__CCTOR_OFFSET))();
	}
};
