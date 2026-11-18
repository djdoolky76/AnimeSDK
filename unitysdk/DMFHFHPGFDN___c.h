#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BLCIDFMMHIL;
namespace System { template <typename T1, typename T2> class Func_2; }

#define DMFHFHPGFDN___C_NMHNMHIAIKA_OFFSET UNITYSDK_OFFSET(0x148B3D10)
#define DMFHFHPGFDN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x148B3CC0)
#define DMFHFHPGFDN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x148B3D00)

inline static constexpr unsigned int DMFHFHPGFDN___c_TypeDefinitionIndex = 74025;

class DMFHFHPGFDN___c : public ::System::Object
{
public:
	static ::System::Func_2<::BLCIDFMMHIL*, ::System::Boolean>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::BLCIDFMMHIL*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DMFHFHPGFDN___c_TypeDefinitionIndex)->GetStaticField(0x3A9B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DMFHFHPGFDN___c_TypeDefinitionIndex)->GetStaticField(0x3A9B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMFHFHPGFDN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFHFHPGFDN___C__CTOR_OFFSET))(this);
	}

	::System::Boolean NMHNMHIAIKA(::BLCIDFMMHIL* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::BLCIDFMMHIL*))((::PBYTE)hIl2Cpp + DMFHFHPGFDN___C_NMHNMHIAIKA_OFFSET))(this, HAAEBCOBKFF);
	}
};
