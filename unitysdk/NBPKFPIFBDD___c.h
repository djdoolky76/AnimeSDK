#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define NBPKFPIFBDD___C_CIBANEGMPBE_OFFSET UNITYSDK_OFFSET(0x13131AD0)
#define NBPKFPIFBDD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13131A80)
#define NBPKFPIFBDD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13131AC0)

inline static constexpr unsigned int NBPKFPIFBDD___c_TypeDefinitionIndex = 82996;

class NBPKFPIFBDD___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__11_13()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NBPKFPIFBDD___c_TypeDefinitionIndex)->GetStaticField(0x42460);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NBPKFPIFBDD___c_TypeDefinitionIndex)->GetStaticField(0x42468);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBPKFPIFBDD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPKFPIFBDD___C__CTOR_OFFSET))(this);
	}

	::System::String* CIBANEGMPBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPKFPIFBDD___C_CIBANEGMPBE_OFFSET))(this);
	}
};
