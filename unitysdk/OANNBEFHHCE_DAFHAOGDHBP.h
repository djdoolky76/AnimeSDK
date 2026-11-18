#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define OANNBEFHHCE_DAFHAOGDHBP__CCTOR_OFFSET UNITYSDK_OFFSET(0xB306ED0)

inline static constexpr unsigned int OANNBEFHHCE_DAFHAOGDHBP_TypeDefinitionIndex = 52226;

struct alignas(4) OANNBEFHHCE_DAFHAOGDHBP
{
	static ::OANNBEFHHCE_DAFHAOGDHBP* StaticGet_HEHIHPPDCDO()
	{
		return (::OANNBEFHHCE_DAFHAOGDHBP*)Il2CppClass::FromTypeDefinitionIndex(OANNBEFHHCE_DAFHAOGDHBP_TypeDefinitionIndex)->GetStaticField(0x11630);
	}
	::System::Int32 MGMDLMBEDJF; // 0x10
	::UnityEngine::Vector2 OHOGDOMNHNK; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OANNBEFHHCE_DAFHAOGDHBP__CCTOR_OFFSET))();
	}
};
