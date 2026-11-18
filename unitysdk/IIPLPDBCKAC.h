#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityResSettingTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define IIPLPDBCKAC__CCTOR_OFFSET UNITYSDK_OFFSET(0x160AC9C0)
#define IIPLPDBCKAC__CTOR_OFFSET UNITYSDK_OFFSET(0x160AC9B0)

inline static constexpr unsigned int IIPLPDBCKAC_TypeDefinitionIndex = 85470;

class IIPLPDBCKAC : public ::System::Object
{
public:
	static ::Il2CppArray<::MoleMole::ActivityResSettingTag>** StaticGet_PNFHHPGPFKF()
	{
		return (::Il2CppArray<::MoleMole::ActivityResSettingTag>**)Il2CppClass::FromTypeDefinitionIndex(IIPLPDBCKAC_TypeDefinitionIndex)->GetStaticField(0x41DC0);
	}
	static ::Il2CppArray<::MoleMole::ActivityResSettingTag>** StaticGet_LLOJCAJJDIL()
	{
		return (::Il2CppArray<::MoleMole::ActivityResSettingTag>**)Il2CppClass::FromTypeDefinitionIndex(IIPLPDBCKAC_TypeDefinitionIndex)->GetStaticField(0x41DC8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_DLGAOGPNJMA()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IIPLPDBCKAC_TypeDefinitionIndex)->GetStaticField(0x41DD0);
	}
	// static const ::System::Int32 PBCHBFEKGFJ = 0x989680; // 0x0
	// static const ::System::Int32 GDODLLKJJKM = 0x1; // 0x0
	// static const ::System::Int32 MAOPLEKMELE = 0x2; // 0x0
	// static const ::System::Int32 AJHEBMLFBKI = 0x3; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPLPDBCKAC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIPLPDBCKAC__CCTOR_OFFSET))();
	}
};
