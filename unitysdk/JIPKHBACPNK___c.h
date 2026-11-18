#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JIPKHBACPNK___C_KAJEKHPDKKB_OFFSET UNITYSDK_OFFSET(0x14A80DB0)
#define JIPKHBACPNK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A80D60)
#define JIPKHBACPNK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14A80DA0)

inline static constexpr unsigned int JIPKHBACPNK___c_TypeDefinitionIndex = 59960;

class JIPKHBACPNK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JIPKHBACPNK___c_TypeDefinitionIndex)->GetStaticField(0x3E310);
	}
	static ::System::Func_2<::System::String*, ::System::Char>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::System::String*, ::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(JIPKHBACPNK___c_TypeDefinitionIndex)->GetStaticField(0x3E318);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIPKHBACPNK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPKHBACPNK___C__CTOR_OFFSET))(this);
	}

	::System::Char KAJEKHPDKKB(::System::String* EMIKCAHJLGB)
	{
		return ((::System::Char(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JIPKHBACPNK___C_KAJEKHPDKKB_OFFSET))(this, EMIKCAHJLGB);
	}
};
