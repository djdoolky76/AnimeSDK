#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NKJLGFPNLBD;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define EACOAHODCJC___C_FCEIJDPECDA_OFFSET UNITYSDK_OFFSET(0x1721A350)
#define EACOAHODCJC___C_GIIIJCCEGPI_OFFSET UNITYSDK_OFFSET(0x1721A390)
#define EACOAHODCJC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1721A300)
#define EACOAHODCJC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1721A340)

inline static constexpr unsigned int EACOAHODCJC___c_TypeDefinitionIndex = 78261;

class EACOAHODCJC___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__10_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EACOAHODCJC___c_TypeDefinitionIndex)->GetStaticField(0x4F3C0);
	}
	static ::System::Action_1<::NKJLGFPNLBD*>** StaticGet___9__10_0()
	{
		return (::System::Action_1<::NKJLGFPNLBD*>**)Il2CppClass::FromTypeDefinitionIndex(EACOAHODCJC___c_TypeDefinitionIndex)->GetStaticField(0x4F3C8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EACOAHODCJC___c_TypeDefinitionIndex)->GetStaticField(0x4F3D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EACOAHODCJC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACOAHODCJC___C__CTOR_OFFSET))(this);
	}

	::System::Void FCEIJDPECDA(::NKJLGFPNLBD* JBNBMFNNELP)
	{
		return ((::System::Void(*)(::PVOID, ::NKJLGFPNLBD*))((::PBYTE)hIl2Cpp + EACOAHODCJC___C_FCEIJDPECDA_OFFSET))(this, JBNBMFNNELP);
	}

	::System::Void GIIIJCCEGPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACOAHODCJC___C_GIIIJCCEGPI_OFFSET))(this);
	}
};
