#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define DFAAINOMBCG___C_BCFBKOHLLDD_OFFSET UNITYSDK_OFFSET(0x1A1DD180)
#define DFAAINOMBCG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1DD130)
#define DFAAINOMBCG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1DD170)

inline static constexpr unsigned int DFAAINOMBCG___c_TypeDefinitionIndex = 49531;

class DFAAINOMBCG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DFAAINOMBCG___c_TypeDefinitionIndex)->GetStaticField(0x3D880);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__8_13()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DFAAINOMBCG___c_TypeDefinitionIndex)->GetStaticField(0x3D888);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFAAINOMBCG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAAINOMBCG___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BCFBKOHLLDD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAAINOMBCG___C_BCFBKOHLLDD_OFFSET))(this);
	}
};
