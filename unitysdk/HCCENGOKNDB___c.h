#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define HCCENGOKNDB___C_OCJOEGFAKNA_OFFSET UNITYSDK_OFFSET(0x17A35BE0)
#define HCCENGOKNDB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A35B90)
#define HCCENGOKNDB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A35BD0)

inline static constexpr unsigned int HCCENGOKNDB___c_TypeDefinitionIndex = 77959;

class HCCENGOKNDB___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__7_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(HCCENGOKNDB___c_TypeDefinitionIndex)->GetStaticField(0x49CD0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HCCENGOKNDB___c_TypeDefinitionIndex)->GetStaticField(0x49CD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCCENGOKNDB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCENGOKNDB___C__CTOR_OFFSET))(this);
	}

	::System::Void OCJOEGFAKNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCENGOKNDB___C_OCJOEGFAKNA_OFFSET))(this);
	}
};
