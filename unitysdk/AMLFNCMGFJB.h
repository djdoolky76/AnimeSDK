#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AMLFNCMGFJB__CCTOR_OFFSET UNITYSDK_OFFSET(0x14377450)

inline static constexpr unsigned int AMLFNCMGFJB_TypeDefinitionIndex = 47982;

class AMLFNCMGFJB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KEFJJPPEMBH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AMLFNCMGFJB_TypeDefinitionIndex)->GetStaticField(0x3D440);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMLFNCMGFJB__CCTOR_OFFSET))();
	}
};
