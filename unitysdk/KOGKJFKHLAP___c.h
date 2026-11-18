#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HJDNNLKBHBA;
class NIBLLGOJFHK;
namespace System { template <typename T1, typename T2> class Action_2; }

#define KOGKJFKHLAP___C_AIKNDJKJEKN_OFFSET UNITYSDK_OFFSET(0x17672D70)
#define KOGKJFKHLAP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17672D20)
#define KOGKJFKHLAP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17672D60)

inline static constexpr unsigned int KOGKJFKHLAP___c_TypeDefinitionIndex = 64196;

class KOGKJFKHLAP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KOGKJFKHLAP___c_TypeDefinitionIndex)->GetStaticField(0x48440);
	}
	static ::System::Action_2<::HJDNNLKBHBA*, ::NIBLLGOJFHK*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::HJDNNLKBHBA*, ::NIBLLGOJFHK*>**)Il2CppClass::FromTypeDefinitionIndex(KOGKJFKHLAP___c_TypeDefinitionIndex)->GetStaticField(0x48448);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOGKJFKHLAP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOGKJFKHLAP___C__CTOR_OFFSET))(this);
	}

	::System::Void AIKNDJKJEKN(::HJDNNLKBHBA* POBADKEDFOE, ::NIBLLGOJFHK* GPCOCGGHPNM)
	{
		return ((::System::Void(*)(::PVOID, ::HJDNNLKBHBA*, ::NIBLLGOJFHK*))((::PBYTE)hIl2Cpp + KOGKJFKHLAP___C_AIKNDJKJEKN_OFFSET))(this, POBADKEDFOE, GPCOCGGHPNM);
	}
};
