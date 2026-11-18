#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EGCGIAHBMKE___C_HABFPDHANFD_OFFSET UNITYSDK_OFFSET(0x17108250)
#define EGCGIAHBMKE___C_JGIDMDCEPOC_OFFSET UNITYSDK_OFFSET(0x17108380)
#define EGCGIAHBMKE___C_PMGMGNELCNB_OFFSET UNITYSDK_OFFSET(0x171081F0)
#define EGCGIAHBMKE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x171081A0)
#define EGCGIAHBMKE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x171081E0)

inline static constexpr unsigned int EGCGIAHBMKE___c_TypeDefinitionIndex = 90810;

class EGCGIAHBMKE___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__28_4()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EGCGIAHBMKE___c_TypeDefinitionIndex)->GetStaticField(0x316E0);
	}
	static ::System::Func_2<::System::String*, ::MIKOMFIBMBN>** StaticGet___9__40_0()
	{
		return (::System::Func_2<::System::String*, ::MIKOMFIBMBN>**)Il2CppClass::FromTypeDefinitionIndex(EGCGIAHBMKE___c_TypeDefinitionIndex)->GetStaticField(0x316E8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EGCGIAHBMKE___c_TypeDefinitionIndex)->GetStaticField(0x316F0);
	}
	static ::System::Action** StaticGet___9__28_3()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EGCGIAHBMKE___c_TypeDefinitionIndex)->GetStaticField(0x316F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGCGIAHBMKE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCGIAHBMKE___C__CTOR_OFFSET))(this);
	}

	::MIKOMFIBMBN PMGMGNELCNB(::System::String* EMIKCAHJLGB)
	{
		return ((::MIKOMFIBMBN(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EGCGIAHBMKE___C_PMGMGNELCNB_OFFSET))(this, EMIKCAHJLGB);
	}

	::System::Void HABFPDHANFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCGIAHBMKE___C_HABFPDHANFD_OFFSET))(this);
	}

	::System::Void JGIDMDCEPOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCGIAHBMKE___C_JGIDMDCEPOC_OFFSET))(this);
	}
};
