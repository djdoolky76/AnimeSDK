#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NBPLJLEGBLM___C_NBPDILGHAKP_OFFSET UNITYSDK_OFFSET(0x12FDDB50)
#define NBPLJLEGBLM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FDDB00)
#define NBPLJLEGBLM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12FDDB40)

inline static constexpr unsigned int NBPLJLEGBLM___c_TypeDefinitionIndex = 45682;

class NBPLJLEGBLM___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__9_11()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NBPLJLEGBLM___c_TypeDefinitionIndex)->GetStaticField(0x47450);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NBPLJLEGBLM___c_TypeDefinitionIndex)->GetStaticField(0x47458);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBPLJLEGBLM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPLJLEGBLM___C__CTOR_OFFSET))(this);
	}

	::System::Void NBPDILGHAKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPLJLEGBLM___C_NBPDILGHAKP_OFFSET))(this);
	}
};
