#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BAAPFFNJAPN;
namespace System { template <typename T> class Action_1; }

#define ABMAOEDLDFF___C_NNIFGNIMBKN_OFFSET UNITYSDK_OFFSET(0x16FD4150)
#define ABMAOEDLDFF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FD4100)
#define ABMAOEDLDFF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD4140)

inline static constexpr unsigned int ABMAOEDLDFF___c_TypeDefinitionIndex = 47085;

class ABMAOEDLDFF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ABMAOEDLDFF___c_TypeDefinitionIndex)->GetStaticField(0x42C70);
	}
	static ::System::Action_1<::BAAPFFNJAPN*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::BAAPFFNJAPN*>**)Il2CppClass::FromTypeDefinitionIndex(ABMAOEDLDFF___c_TypeDefinitionIndex)->GetStaticField(0x42C78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABMAOEDLDFF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMAOEDLDFF___C__CTOR_OFFSET))(this);
	}

	::System::Void NNIFGNIMBKN(::BAAPFFNJAPN* HKBMDAPIILF)
	{
		return ((::System::Void(*)(::PVOID, ::BAAPFFNJAPN*))((::PBYTE)hIl2Cpp + ABMAOEDLDFF___C_NNIFGNIMBKN_OFFSET))(this, HKBMDAPIILF);
	}
};
