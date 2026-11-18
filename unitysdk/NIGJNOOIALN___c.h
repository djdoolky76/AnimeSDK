#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NIGJNOOIALN___C_GCPFJIPHGDK_OFFSET UNITYSDK_OFFSET(0xE09DBF0)
#define NIGJNOOIALN___C_MPCMOAHKHPM_OFFSET UNITYSDK_OFFSET(0xE09DB00)
#define NIGJNOOIALN___C_NPOHPHOBPBH_OFFSET UNITYSDK_OFFSET(0xE09DBE0)
#define NIGJNOOIALN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE09DAB0)
#define NIGJNOOIALN___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE09DAF0)

inline static constexpr unsigned int NIGJNOOIALN___c_TypeDefinitionIndex = 87467;

class NIGJNOOIALN___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__0_9()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NIGJNOOIALN___c_TypeDefinitionIndex)->GetStaticField(0x35B90);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NIGJNOOIALN___c_TypeDefinitionIndex)->GetStaticField(0x35B98);
	}
	static ::System::Action** StaticGet___9__0_8()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NIGJNOOIALN___c_TypeDefinitionIndex)->GetStaticField(0x35BA0);
	}
	static ::System::Action** StaticGet___9__0_3()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NIGJNOOIALN___c_TypeDefinitionIndex)->GetStaticField(0x35BA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIGJNOOIALN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJNOOIALN___C__CTOR_OFFSET))(this);
	}

	::System::Void MPCMOAHKHPM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJNOOIALN___C_MPCMOAHKHPM_OFFSET))(this);
	}

	::System::Void NPOHPHOBPBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJNOOIALN___C_NPOHPHOBPBH_OFFSET))(this);
	}

	::System::Void GCPFJIPHGDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJNOOIALN___C_GCPFJIPHGDK_OFFSET))(this);
	}
};
