#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJFLOOJJIFO;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering::Universal { class TextureSheetRenderer; }

#define JNPDIKCCDCB_EJIMMOHOPIG_OFFSET UNITYSDK_OFFSET(0x1F4A0970)
#define JNPDIKCCDCB_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x1F4A0CC0)
#define JNPDIKCCDCB_IKDJGDHFDBI_OFFSET UNITYSDK_OFFSET(0x1F4A0920)
#define JNPDIKCCDCB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1F4A0C10)
#define JNPDIKCCDCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4A0910)

inline static constexpr unsigned int JNPDIKCCDCB_TypeDefinitionIndex = 96498;

class JNPDIKCCDCB : public ::System::Object
{
public:
	::UnityEngine::Rendering::Universal::TextureSheetRenderer* NKPMAEFOHCO; // 0x10
	::UnityEngine::GameObject* JCFADCIKCOM; // 0x18
	::System::String* FCBDPCEKHOM; // 0x20
	::DJFLOOJJIFO* JNLBPMKIFNK; // 0x28
	::System::Boolean LLHOFGNKBBG; // 0x30
	::System::Boolean NHFFNCPFANO; // 0x31
	::System::Boolean NFHMOAPLKNM; // 0x32
	::System::Byte _padding0[0x1];
	::System::Single MDPPNMIPDMP; // 0x34
	::System::Int32 BDHIPEFBKPK; // 0x38
	::System::Single HACJFKBLODH; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPDIKCCDCB__CTOR_OFFSET))(this);
	}

	::System::Void IKDJGDHFDBI(::System::Boolean NDPMFLNEHOO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JNPDIKCCDCB_IKDJGDHFDBI_OFFSET))(this, NDPMFLNEHOO);
	}

	::UnityEngine::Rendering::Universal::TextureSheetRenderer* EJIMMOHOPIG()
	{
		return ((::UnityEngine::Rendering::Universal::TextureSheetRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPDIKCCDCB_EJIMMOHOPIG_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::System::String* FCBDPCEKHOM, ::UnityEngine::GameObject* JCFADCIKCOM, ::System::Int32 MDPPNMIPDMP, ::System::Int32 BDHIPEFBKPK, ::DJFLOOJJIFO* JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::DJFLOOJJIFO*))((::PBYTE)hIl2Cpp + JNPDIKCCDCB_OJENCMOGDKL_OFFSET))(this, FCBDPCEKHOM, JCFADCIKCOM, MDPPNMIPDMP, BDHIPEFBKPK, JNLBPMKIFNK);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPDIKCCDCB_IAHPLEHJFGB_OFFSET))(this);
	}
};
