#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OEBGKHGBCIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F6D2D0)

inline static constexpr unsigned int OEBGKHGBCIG_TypeDefinitionIndex = 92375;

class OEBGKHGBCIG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OBJHDJOKFCG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OEBGKHGBCIG_TypeDefinitionIndex)->GetStaticField(0x491B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEBGKHGBCIG__CCTOR_OFFSET))();
	}
};
