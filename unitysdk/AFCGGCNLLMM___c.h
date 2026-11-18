#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define AFCGGCNLLMM___C_MBENPKFKFBC_OFFSET UNITYSDK_OFFSET(0x16FE3CF0)
#define AFCGGCNLLMM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FE3CA0)
#define AFCGGCNLLMM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE3CE0)

inline static constexpr unsigned int AFCGGCNLLMM___c_TypeDefinitionIndex = 81016;

class AFCGGCNLLMM___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__16_8()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AFCGGCNLLMM___c_TypeDefinitionIndex)->GetStaticField(0x42CB0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AFCGGCNLLMM___c_TypeDefinitionIndex)->GetStaticField(0x42CB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFCGGCNLLMM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCGGCNLLMM___C__CTOR_OFFSET))(this);
	}

	::System::String* MBENPKFKFBC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCGGCNLLMM___C_MBENPKFKFBC_OFFSET))(this);
	}
};
