#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CGHAKDCKPJN___C_JLGDBFPEBFM_OFFSET UNITYSDK_OFFSET(0x14F26200)
#define CGHAKDCKPJN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F261B0)
#define CGHAKDCKPJN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14F261F0)

inline static constexpr unsigned int CGHAKDCKPJN___c_TypeDefinitionIndex = 75677;

class CGHAKDCKPJN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CGHAKDCKPJN___c_TypeDefinitionIndex)->GetStaticField(0x31100);
	}
	static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CGHAKDCKPJN___c_TypeDefinitionIndex)->GetStaticField(0x31108);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGHAKDCKPJN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHAKDCKPJN___C__CTOR_OFFSET))(this);
	}

	::System::String* JLGDBFPEBFM(::System::String* HAAEBCOBKFF)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CGHAKDCKPJN___C_JLGDBFPEBFM_OFFSET))(this, HAAEBCOBKFF);
	}
};
