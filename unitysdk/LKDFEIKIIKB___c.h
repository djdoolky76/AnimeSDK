#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMMFJBHLLEI;
namespace System { template <typename T> class Action_1; }

#define LKDFEIKIIKB___C_AIKNDJKJEKN_OFFSET UNITYSDK_OFFSET(0x1A60FA80)
#define LKDFEIKIIKB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A60FA30)
#define LKDFEIKIIKB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60FA70)

inline static constexpr unsigned int LKDFEIKIIKB___c_TypeDefinitionIndex = 82288;

class LKDFEIKIIKB___c : public ::System::Object
{
public:
	static ::System::Action_1<::DMMFJBHLLEI*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::DMMFJBHLLEI*>**)Il2CppClass::FromTypeDefinitionIndex(LKDFEIKIIKB___c_TypeDefinitionIndex)->GetStaticField(0x4BEF0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LKDFEIKIIKB___c_TypeDefinitionIndex)->GetStaticField(0x4BEF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKDFEIKIIKB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDFEIKIIKB___C__CTOR_OFFSET))(this);
	}

	::System::Void AIKNDJKJEKN(::DMMFJBHLLEI* GIIMGGLDHEA)
	{
		return ((::System::Void(*)(::PVOID, ::DMMFJBHLLEI*))((::PBYTE)hIl2Cpp + LKDFEIKIIKB___C_AIKNDJKJEKN_OFFSET))(this, GIIMGGLDHEA);
	}
};
