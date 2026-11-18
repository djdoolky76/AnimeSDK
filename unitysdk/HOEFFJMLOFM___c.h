#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define HOEFFJMLOFM___C_PKGAFELDEGF_OFFSET UNITYSDK_OFFSET(0x17B1A760)
#define HOEFFJMLOFM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B1A710)
#define HOEFFJMLOFM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B1A750)

inline static constexpr unsigned int HOEFFJMLOFM___c_TypeDefinitionIndex = 75258;

class HOEFFJMLOFM___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__16_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(HOEFFJMLOFM___c_TypeDefinitionIndex)->GetStaticField(0x4F5F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HOEFFJMLOFM___c_TypeDefinitionIndex)->GetStaticField(0x4F5F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOEFFJMLOFM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEFFJMLOFM___C__CTOR_OFFSET))(this);
	}

	::System::Void PKGAFELDEGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEFFJMLOFM___C_PKGAFELDEGF_OFFSET))(this);
	}
};
