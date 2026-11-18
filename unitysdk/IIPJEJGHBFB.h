#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IIPJEJGHBFB__CCTOR_OFFSET UNITYSDK_OFFSET(0x160AC940)

inline static constexpr unsigned int IIPJEJGHBFB_TypeDefinitionIndex = 66399;

class IIPJEJGHBFB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ILDEFJBAHDD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IIPJEJGHBFB_TypeDefinitionIndex)->GetStaticField(0x4E5A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIPJEJGHBFB__CCTOR_OFFSET))();
	}
};
