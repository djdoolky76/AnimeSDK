#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JJHEDDAJEDN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1308AE70)

inline static constexpr unsigned int JJHEDDAJEDN_TypeDefinitionIndex = 40439;

class JJHEDDAJEDN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DMOLGBICCEH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JJHEDDAJEDN_TypeDefinitionIndex)->GetStaticField(0x49FB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJHEDDAJEDN__CCTOR_OFFSET))();
	}
};
