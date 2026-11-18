#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DOPPJIKLPKN___C_CHOHCIFPFNN_OFFSET UNITYSDK_OFFSET(0x10F189B0)
#define DOPPJIKLPKN___C_HCELAEPICIP_OFFSET UNITYSDK_OFFSET(0x10F189C0)
#define DOPPJIKLPKN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F18960)
#define DOPPJIKLPKN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F189A0)

inline static constexpr unsigned int DOPPJIKLPKN___c_TypeDefinitionIndex = 64492;

class DOPPJIKLPKN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DOPPJIKLPKN___c_TypeDefinitionIndex)->GetStaticField(0x3D9A0);
	}
	static ::System::Action** StaticGet___9__3_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DOPPJIKLPKN___c_TypeDefinitionIndex)->GetStaticField(0x3D9A8);
	}
	static ::System::Action** StaticGet___9__13_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DOPPJIKLPKN___c_TypeDefinitionIndex)->GetStaticField(0x3D9B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOPPJIKLPKN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPJIKLPKN___C__CTOR_OFFSET))(this);
	}

	::System::Void CHOHCIFPFNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPJIKLPKN___C_CHOHCIFPFNN_OFFSET))(this);
	}

	::System::Void HCELAEPICIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPJIKLPKN___C_HCELAEPICIP_OFFSET))(this);
	}
};
