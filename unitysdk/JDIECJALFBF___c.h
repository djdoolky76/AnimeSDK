#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define JDIECJALFBF___C_HDEGFNCJKGG_OFFSET UNITYSDK_OFFSET(0x13CAC280)
#define JDIECJALFBF___C_KHDPGPNKGBN_OFFSET UNITYSDK_OFFSET(0x13CAC270)
#define JDIECJALFBF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CAC220)
#define JDIECJALFBF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13CAC260)

inline static constexpr unsigned int JDIECJALFBF___c_TypeDefinitionIndex = 62370;

class JDIECJALFBF___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__0_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JDIECJALFBF___c_TypeDefinitionIndex)->GetStaticField(0x46670);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JDIECJALFBF___c_TypeDefinitionIndex)->GetStaticField(0x46678);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__0_6()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JDIECJALFBF___c_TypeDefinitionIndex)->GetStaticField(0x46680);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDIECJALFBF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIECJALFBF___C__CTOR_OFFSET))(this);
	}

	::System::Boolean KHDPGPNKGBN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIECJALFBF___C_KHDPGPNKGBN_OFFSET))(this);
	}

	::System::String* HDEGFNCJKGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIECJALFBF___C_HDEGFNCJKGG_OFFSET))(this);
	}
};
