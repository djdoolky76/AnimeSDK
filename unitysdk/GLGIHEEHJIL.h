#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GLGIHEEHJIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CD14F0)

inline static constexpr unsigned int GLGIHEEHJIL_TypeDefinitionIndex = 62015;

class GLGIHEEHJIL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LFFAAIAJLJG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GLGIHEEHJIL_TypeDefinitionIndex)->GetStaticField(0x37910);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLGIHEEHJIL__CCTOR_OFFSET))();
	}
};
