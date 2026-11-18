#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IJBILMFOGOJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1987C470)

inline static constexpr unsigned int IJBILMFOGOJ_TypeDefinitionIndex = 79468;

class IJBILMFOGOJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FDFGLNMOAAN()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IJBILMFOGOJ_TypeDefinitionIndex)->GetStaticField(0x4D360);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJBILMFOGOJ__CCTOR_OFFSET))();
	}
};
