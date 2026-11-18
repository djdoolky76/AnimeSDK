#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LBBAHOBMOGN___C_NLBKNGCKLPP_OFFSET UNITYSDK_OFFSET(0x126C85F0)
#define LBBAHOBMOGN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x126C85A0)
#define LBBAHOBMOGN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x126C85E0)

inline static constexpr unsigned int LBBAHOBMOGN___c_TypeDefinitionIndex = 44965;

class LBBAHOBMOGN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LBBAHOBMOGN___c_TypeDefinitionIndex)->GetStaticField(0x3B930);
	}
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LBBAHOBMOGN___c_TypeDefinitionIndex)->GetStaticField(0x3B938);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBBAHOBMOGN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBAHOBMOGN___C__CTOR_OFFSET))(this);
	}

	::System::Void NLBKNGCKLPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBAHOBMOGN___C_NLBKNGCKLPP_OFFSET))(this);
	}
};
