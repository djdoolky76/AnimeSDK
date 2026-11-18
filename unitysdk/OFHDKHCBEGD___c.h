#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define OFHDKHCBEGD___C_GOMFMOMANMF_OFFSET UNITYSDK_OFFSET(0x11B268B0)
#define OFHDKHCBEGD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B26860)
#define OFHDKHCBEGD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11B268A0)

inline static constexpr unsigned int OFHDKHCBEGD___c_TypeDefinitionIndex = 74104;

class OFHDKHCBEGD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OFHDKHCBEGD___c_TypeDefinitionIndex)->GetStaticField(0x4DDA0);
	}
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__12_3()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OFHDKHCBEGD___c_TypeDefinitionIndex)->GetStaticField(0x4DDA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFHDKHCBEGD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHDKHCBEGD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GOMFMOMANMF(::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFHDKHCBEGD___C_GOMFMOMANMF_OFFSET))(this, HBJOLKHGGDD);
	}
};
