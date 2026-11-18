#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MKFANIOOGFA_PDIIJJLPGJE___C_MCCEHJLHDFO_OFFSET UNITYSDK_OFFSET(0x12FF8F20)
#define MKFANIOOGFA_PDIIJJLPGJE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FF8ED0)
#define MKFANIOOGFA_PDIIJJLPGJE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF8F10)

inline static constexpr unsigned int MKFANIOOGFA_PDIIJJLPGJE___c_TypeDefinitionIndex = 81522;

class MKFANIOOGFA_PDIIJJLPGJE___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MKFANIOOGFA_PDIIJJLPGJE___c_TypeDefinitionIndex)->GetStaticField(0x38640);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MKFANIOOGFA_PDIIJJLPGJE___c_TypeDefinitionIndex)->GetStaticField(0x38648);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKFANIOOGFA_PDIIJJLPGJE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFANIOOGFA_PDIIJJLPGJE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 MCCEHJLHDFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFANIOOGFA_PDIIJJLPGJE___C_MCCEHJLHDFO_OFFSET))(this);
	}
};
