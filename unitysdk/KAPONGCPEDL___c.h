#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FNDAEEHOHPG;
namespace System { template <typename T> class Action_1; }

#define KAPONGCPEDL___C_IJEIOENOFOI_OFFSET UNITYSDK_OFFSET(0x1948A480)
#define KAPONGCPEDL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1948A430)
#define KAPONGCPEDL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1948A470)

inline static constexpr unsigned int KAPONGCPEDL___c_TypeDefinitionIndex = 93013;

class KAPONGCPEDL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KAPONGCPEDL___c_TypeDefinitionIndex)->GetStaticField(0x38140);
	}
	static ::System::Action_1<::FNDAEEHOHPG*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::FNDAEEHOHPG*>**)Il2CppClass::FromTypeDefinitionIndex(KAPONGCPEDL___c_TypeDefinitionIndex)->GetStaticField(0x38148);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAPONGCPEDL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPONGCPEDL___C__CTOR_OFFSET))(this);
	}

	::System::Void IJEIOENOFOI(::FNDAEEHOHPG* HMOGPHOOIGE)
	{
		return ((::System::Void(*)(::PVOID, ::FNDAEEHOHPG*))((::PBYTE)hIl2Cpp + KAPONGCPEDL___C_IJEIOENOFOI_OFFSET))(this, HMOGPHOOIGE);
	}
};
