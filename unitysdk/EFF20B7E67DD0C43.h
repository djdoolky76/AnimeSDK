#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EDACB16C841CDECA;
namespace System { class String; }

#define EFF20B7E67DD0C43_A1B33BE789FF6C76_OFFSET UNITYSDK_OFFSET(0x2A17010)
#define EFF20B7E67DD0C43_F7B0A23335A3DB16_OFFSET UNITYSDK_OFFSET(0x2A17110)
#define EFF20B7E67DD0C43__CTOR_OFFSET UNITYSDK_OFFSET(0x2A170A0)

inline static constexpr unsigned int EFF20B7E67DD0C43_TypeDefinitionIndex = 15867;

class EFF20B7E67DD0C43 : public ::System::Object
{
public:
	static ::EFF20B7E67DD0C43** StaticGet_E0E7A5F93551109B()
	{
		return (::EFF20B7E67DD0C43**)Il2CppClass::FromTypeDefinitionIndex(EFF20B7E67DD0C43_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Object* B839423BB9ABD12C; // 0x10

	::EDACB16C841CDECA* A1B33BE789FF6C76(::System::Boolean E5CBBDD14A8F1A77, ::System::Int32 FE66CBFBE16BB5E3, ::System::Int32 E64FC9674ED7A57A, ::System::String* A5FA632BDDD49E07, ::System::Boolean E7B6DD453B79DFAB)
	{
		return ((::EDACB16C841CDECA*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + EFF20B7E67DD0C43_A1B33BE789FF6C76_OFFSET))(this, E5CBBDD14A8F1A77, FE66CBFBE16BB5E3, E64FC9674ED7A57A, A5FA632BDDD49E07, E7B6DD453B79DFAB);
	}

	static ::EFF20B7E67DD0C43* F7B0A23335A3DB16()
	{
		return ((::EFF20B7E67DD0C43*(*)())((::PBYTE)hIl2Cpp + EFF20B7E67DD0C43_F7B0A23335A3DB16_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFF20B7E67DD0C43__CTOR_OFFSET))(this);
	}
};
