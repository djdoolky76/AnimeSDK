#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IHNJCJPPBIH;
namespace System { template <typename T1, typename T2> class Func_2; }

#define FNJOKMFJGEH___C_IGHLINCAGJF_OFFSET UNITYSDK_OFFSET(0x1FCD8AB0)
#define FNJOKMFJGEH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCD8A60)
#define FNJOKMFJGEH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCD8AA0)

inline static constexpr unsigned int FNJOKMFJGEH___c_TypeDefinitionIndex = 18126;

class FNJOKMFJGEH___c : public ::System::Object
{
public:
	static ::System::Func_2<::IHNJCJPPBIH*, ::System::Boolean>** StaticGet___9__3_4()
	{
		return (::System::Func_2<::IHNJCJPPBIH*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FNJOKMFJGEH___c_TypeDefinitionIndex)->GetStaticField(0x80F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FNJOKMFJGEH___c_TypeDefinitionIndex)->GetStaticField(0x80F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNJOKMFJGEH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNJOKMFJGEH___C__CTOR_OFFSET))(this);
	}

	::System::Boolean IGHLINCAGJF(::IHNJCJPPBIH* NAPFALLANDL)
	{
		return ((::System::Boolean(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + FNJOKMFJGEH___C_IGHLINCAGJF_OFFSET))(this, NAPFALLANDL);
	}
};
