#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGBKALNONBN.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define AKFCOMPHBLJ___C_LFHBHKDNJJD_OFFSET UNITYSDK_OFFSET(0x134D7810)
#define AKFCOMPHBLJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134D77C0)
#define AKFCOMPHBLJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134D7800)

inline static constexpr unsigned int AKFCOMPHBLJ___c_TypeDefinitionIndex = 77066;

class AKFCOMPHBLJ___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::GGBKALNONBN>** StaticGet___9__81_0()
	{
		return (::System::Comparison_1<::GGBKALNONBN>**)Il2CppClass::FromTypeDefinitionIndex(AKFCOMPHBLJ___c_TypeDefinitionIndex)->GetStaticField(0x3D3D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AKFCOMPHBLJ___c_TypeDefinitionIndex)->GetStaticField(0x3D3D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ___C__CTOR_OFFSET))(this);
	}

	::System::Int32 LFHBHKDNJJD(::GGBKALNONBN DPGFPHIMDEL, ::GGBKALNONBN DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::GGBKALNONBN, ::GGBKALNONBN))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ___C_LFHBHKDNJJD_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
