#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define HCCIPCBLPOH___C_JACLNOFDDHP_OFFSET UNITYSDK_OFFSET(0x149326C0)
#define HCCIPCBLPOH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14932670)
#define HCCIPCBLPOH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x149326B0)

inline static constexpr unsigned int HCCIPCBLPOH___c_TypeDefinitionIndex = 77924;

class HCCIPCBLPOH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HCCIPCBLPOH___c_TypeDefinitionIndex)->GetStaticField(0x44200);
	}
	static ::System::Action** StaticGet___9__12_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(HCCIPCBLPOH___c_TypeDefinitionIndex)->GetStaticField(0x44208);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCCIPCBLPOH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCIPCBLPOH___C__CTOR_OFFSET))(this);
	}

	::System::Void JACLNOFDDHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCIPCBLPOH___C_JACLNOFDDHP_OFFSET))(this);
	}
};
