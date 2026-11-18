#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }

#define CCOFNOGEBGM___C_JBPBEGAOJKK_OFFSET UNITYSDK_OFFSET(0x1DE47560)
#define CCOFNOGEBGM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE47510)
#define CCOFNOGEBGM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE47550)

inline static constexpr unsigned int CCOFNOGEBGM___c_TypeDefinitionIndex = 93634;

class CCOFNOGEBGM___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::ValueTuple_2<::System::String*, ::System::Int32>>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::System::String*, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(CCOFNOGEBGM___c_TypeDefinitionIndex)->GetStaticField(0x52770);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CCOFNOGEBGM___c_TypeDefinitionIndex)->GetStaticField(0x52778);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCOFNOGEBGM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOFNOGEBGM___C__CTOR_OFFSET))(this);
	}

	::System::Int32 JBPBEGAOJKK(::System::ValueTuple_2<::System::String*, ::System::Int32> EJCBEJMGFAJ, ::System::ValueTuple_2<::System::String*, ::System::Int32> EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::String*, ::System::Int32>, ::System::ValueTuple_2<::System::String*, ::System::Int32>))((::PBYTE)hIl2Cpp + CCOFNOGEBGM___C_JBPBEGAOJKK_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
