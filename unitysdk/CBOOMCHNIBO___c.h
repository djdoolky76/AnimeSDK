#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CBOOMCHNIBO___C_IMJCGIHHEPI_OFFSET UNITYSDK_OFFSET(0x14C77A60)
#define CBOOMCHNIBO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C77A10)
#define CBOOMCHNIBO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C77A50)

inline static constexpr unsigned int CBOOMCHNIBO___c_TypeDefinitionIndex = 70089;

class CBOOMCHNIBO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CBOOMCHNIBO___c_TypeDefinitionIndex)->GetStaticField(0x42FA0);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__63_11()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CBOOMCHNIBO___c_TypeDefinitionIndex)->GetStaticField(0x42FA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBOOMCHNIBO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOOMCHNIBO___C__CTOR_OFFSET))(this);
	}

	::System::Int32 IMJCGIHHEPI(::System::UInt32 MGMDLMBEDJF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBOOMCHNIBO___C_IMJCGIHHEPI_OFFSET))(this, MGMDLMBEDJF);
	}
};
