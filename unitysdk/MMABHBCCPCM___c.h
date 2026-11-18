#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MMABHBCCPCM___C_CNOEIFJBFED_OFFSET UNITYSDK_OFFSET(0x11F5F0F0)
#define MMABHBCCPCM___C_LLMEBJADPMM_OFFSET UNITYSDK_OFFSET(0x11F5F030)
#define MMABHBCCPCM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F5EFE0)
#define MMABHBCCPCM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11F5F020)

inline static constexpr unsigned int MMABHBCCPCM___c_TypeDefinitionIndex = 88232;

class MMABHBCCPCM___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__40_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MMABHBCCPCM___c_TypeDefinitionIndex)->GetStaticField(0x3E850);
	}
	static ::System::Action** StaticGet___9__24_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MMABHBCCPCM___c_TypeDefinitionIndex)->GetStaticField(0x3E858);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MMABHBCCPCM___c_TypeDefinitionIndex)->GetStaticField(0x3E860);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMABHBCCPCM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMABHBCCPCM___C__CTOR_OFFSET))(this);
	}

	::System::Void LLMEBJADPMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMABHBCCPCM___C_LLMEBJADPMM_OFFSET))(this);
	}

	::System::Void CNOEIFJBFED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMABHBCCPCM___C_CNOEIFJBFED_OFFSET))(this);
	}
};
