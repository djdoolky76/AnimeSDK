#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define JAOBDGFAGHL___C_HDEGFNCJKGG_OFFSET UNITYSDK_OFFSET(0x13ABE020)
#define JAOBDGFAGHL___C_PHENNELAFJM_OFFSET UNITYSDK_OFFSET(0x13ABE060)
#define JAOBDGFAGHL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13ABDFD0)
#define JAOBDGFAGHL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13ABE010)

inline static constexpr unsigned int JAOBDGFAGHL___c_TypeDefinitionIndex = 89212;

class JAOBDGFAGHL___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__0_11()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JAOBDGFAGHL___c_TypeDefinitionIndex)->GetStaticField(0x4F690);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JAOBDGFAGHL___c_TypeDefinitionIndex)->GetStaticField(0x4F698);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__0_6()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JAOBDGFAGHL___c_TypeDefinitionIndex)->GetStaticField(0x4F6A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAOBDGFAGHL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOBDGFAGHL___C__CTOR_OFFSET))(this);
	}

	::System::String* HDEGFNCJKGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOBDGFAGHL___C_HDEGFNCJKGG_OFFSET))(this);
	}

	::System::String* PHENNELAFJM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAOBDGFAGHL___C_PHENNELAFJM_OFFSET))(this);
	}
};
