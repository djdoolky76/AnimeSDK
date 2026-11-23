#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/B597B91981F62C60.h"
#include "unitysdk/System/Object.h"

#define A73063430844AA37__CCTOR_OFFSET UNITYSDK_OFFSET(0x29992D0)
#define A73063430844AA37__CTOR_OFFSET UNITYSDK_OFFSET(0x2999320)

inline static constexpr unsigned int A73063430844AA37_TypeDefinitionIndex = 15624;

class A73063430844AA37 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_B3DC4A63FF2C7A97()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(A73063430844AA37_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int32* StaticGet_AFAA920F6F032123()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(A73063430844AA37_TypeDefinitionIndex)->GetStaticField(0x4);
	}
	::System::Int32 B60F317F5367C35A; // 0x10
	::BED79290917896D4::B597B91981F62C60 E1C9D5D57F5AB79E; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A73063430844AA37__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A73063430844AA37__CTOR_OFFSET))(this);
	}
};
