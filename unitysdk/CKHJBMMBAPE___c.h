#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CKHJBMMBAPE___C_JPEKDPMCKMP_OFFSET UNITYSDK_OFFSET(0x145CF4A0)
#define CKHJBMMBAPE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x145CF450)
#define CKHJBMMBAPE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x145CF490)

inline static constexpr unsigned int CKHJBMMBAPE___c_TypeDefinitionIndex = 58468;

class CKHJBMMBAPE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CKHJBMMBAPE___c_TypeDefinitionIndex)->GetStaticField(0x403A0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CKHJBMMBAPE___c_TypeDefinitionIndex)->GetStaticField(0x403A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKHJBMMBAPE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHJBMMBAPE___C__CTOR_OFFSET))(this);
	}

	::System::String* JPEKDPMCKMP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHJBMMBAPE___C_JPEKDPMCKMP_OFFSET))(this);
	}
};
