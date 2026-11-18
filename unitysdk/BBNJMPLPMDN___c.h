#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define BBNJMPLPMDN___C_PFPPBGCAOLH_OFFSET UNITYSDK_OFFSET(0x143CBE70)
#define BBNJMPLPMDN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x143CBE20)
#define BBNJMPLPMDN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x143CBE60)

inline static constexpr unsigned int BBNJMPLPMDN___c_TypeDefinitionIndex = 73044;

class BBNJMPLPMDN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BBNJMPLPMDN___c_TypeDefinitionIndex)->GetStaticField(0x4F1C0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__23_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BBNJMPLPMDN___c_TypeDefinitionIndex)->GetStaticField(0x4F1C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBNJMPLPMDN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNJMPLPMDN___C__CTOR_OFFSET))(this);
	}

	::System::String* PFPPBGCAOLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNJMPLPMDN___C_PFPPBGCAOLH_OFFSET))(this);
	}
};
