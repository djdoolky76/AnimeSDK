#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KKKHIPBDBFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x129A08A0)

inline static constexpr unsigned int KKKHIPBDBFE_TypeDefinitionIndex = 81908;

class KKKHIPBDBFE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MHKHGNOHMHM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KKKHIPBDBFE_TypeDefinitionIndex)->GetStaticField(0x41420);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKKHIPBDBFE__CCTOR_OFFSET))();
	}
};
