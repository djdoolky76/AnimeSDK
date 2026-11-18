#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Texture2D; }

#define OKNCHDJGMED___C_BLNDJHHJLNF_OFFSET UNITYSDK_OFFSET(0xFD8D7F0)
#define OKNCHDJGMED___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD8D7A0)
#define OKNCHDJGMED___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFD8D7E0)

inline static constexpr unsigned int OKNCHDJGMED___c_TypeDefinitionIndex = 45285;

class OKNCHDJGMED___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(OKNCHDJGMED___c_TypeDefinitionIndex)->GetStaticField(0x36090);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OKNCHDJGMED___c_TypeDefinitionIndex)->GetStaticField(0x36098);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKNCHDJGMED___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNCHDJGMED___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Texture2D* BLNDJHHJLNF(::System::String* CJBJONJDOLI)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OKNCHDJGMED___C_BLNDJHHJLNF_OFFSET))(this, CJBJONJDOLI);
	}
};
