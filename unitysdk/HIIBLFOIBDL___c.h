#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define HIIBLFOIBDL___C_BCIFAFIBLBG_OFFSET UNITYSDK_OFFSET(0x16F40330)
#define HIIBLFOIBDL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F402E0)
#define HIIBLFOIBDL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F40320)

inline static constexpr unsigned int HIIBLFOIBDL___c_TypeDefinitionIndex = 71534;

class HIIBLFOIBDL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HIIBLFOIBDL___c_TypeDefinitionIndex)->GetStaticField(0x3DEF0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__9_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HIIBLFOIBDL___c_TypeDefinitionIndex)->GetStaticField(0x3DEF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIIBLFOIBDL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIBLFOIBDL___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BCIFAFIBLBG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIBLFOIBDL___C_BCIFAFIBLBG_OFFSET))(this);
	}
};
