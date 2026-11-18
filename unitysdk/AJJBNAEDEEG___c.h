#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define AJJBNAEDEEG___C_BHNKLLAGEGG_OFFSET UNITYSDK_OFFSET(0x16D8AD70)
#define AJJBNAEDEEG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D8AD20)
#define AJJBNAEDEEG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8AD60)

inline static constexpr unsigned int AJJBNAEDEEG___c_TypeDefinitionIndex = 75205;

class AJJBNAEDEEG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AJJBNAEDEEG___c_TypeDefinitionIndex)->GetStaticField(0x4F190);
	}
	static ::System::Action_1<::System::Int32>** StaticGet___9__5_3()
	{
		return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AJJBNAEDEEG___c_TypeDefinitionIndex)->GetStaticField(0x4F198);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJJBNAEDEEG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJBNAEDEEG___C__CTOR_OFFSET))(this);
	}

	::System::Void BHNKLLAGEGG(::System::Int32 GNOHOICKMBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJJBNAEDEEG___C_BHNKLLAGEGG_OFFSET))(this, GNOHOICKMBI);
	}
};
