#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define EKBLKDABCND___C_GNPGEPGDBDK_OFFSET UNITYSDK_OFFSET(0x2006CEA0)
#define EKBLKDABCND___C_NFLJBALONHN_OFFSET UNITYSDK_OFFSET(0x2006CF60)
#define EKBLKDABCND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x2006CE50)
#define EKBLKDABCND___C__CTOR_OFFSET UNITYSDK_OFFSET(0x2006CE90)

inline static constexpr unsigned int EKBLKDABCND___c_TypeDefinitionIndex = 96583;

class EKBLKDABCND___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__60_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EKBLKDABCND___c_TypeDefinitionIndex)->GetStaticField(0x52F90);
	}
	static ::System::Action** StaticGet___9__20_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EKBLKDABCND___c_TypeDefinitionIndex)->GetStaticField(0x52F98);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EKBLKDABCND___c_TypeDefinitionIndex)->GetStaticField(0x52FA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKBLKDABCND___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBLKDABCND___C__CTOR_OFFSET))(this);
	}

	::System::Void GNPGEPGDBDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBLKDABCND___C_GNPGEPGDBDK_OFFSET))(this);
	}

	::System::Void NFLJBALONHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBLKDABCND___C_NFLJBALONHN_OFFSET))(this);
	}
};
