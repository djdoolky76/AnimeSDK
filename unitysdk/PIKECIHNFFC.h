#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PIKECIHNFFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1D7650)

inline static constexpr unsigned int PIKECIHNFFC_TypeDefinitionIndex = 80076;

class PIKECIHNFFC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JMNGBKDLDKJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PIKECIHNFFC_TypeDefinitionIndex)->GetStaticField(0x493B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIKECIHNFFC__CCTOR_OFFSET))();
	}
};
