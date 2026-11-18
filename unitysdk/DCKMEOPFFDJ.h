#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DCKMEOPFFDJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1CFBF0)

inline static constexpr unsigned int DCKMEOPFFDJ_TypeDefinitionIndex = 66849;

class DCKMEOPFFDJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PFLBGCCHDKA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DCKMEOPFFDJ_TypeDefinitionIndex)->GetStaticField(0x3D830);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCKMEOPFFDJ__CCTOR_OFFSET))();
	}
};
