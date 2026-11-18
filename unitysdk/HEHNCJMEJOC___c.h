#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KEJINFHIHMM;
namespace System { template <typename T> class Action_1; }

#define HEHNCJMEJOC___C_IKEHBGKEPAC_OFFSET UNITYSDK_OFFSET(0x17A3F9E0)
#define HEHNCJMEJOC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A3F990)
#define HEHNCJMEJOC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A3F9D0)

inline static constexpr unsigned int HEHNCJMEJOC___c_TypeDefinitionIndex = 84305;

class HEHNCJMEJOC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HEHNCJMEJOC___c_TypeDefinitionIndex)->GetStaticField(0x37AE0);
	}
	static ::System::Action_1<::KEJINFHIHMM*>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::KEJINFHIHMM*>**)Il2CppClass::FromTypeDefinitionIndex(HEHNCJMEJOC___c_TypeDefinitionIndex)->GetStaticField(0x37AE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEHNCJMEJOC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHNCJMEJOC___C__CTOR_OFFSET))(this);
	}

	::System::Void IKEHBGKEPAC(::KEJINFHIHMM* DOJPDJKKAPG)
	{
		return ((::System::Void(*)(::PVOID, ::KEJINFHIHMM*))((::PBYTE)hIl2Cpp + HEHNCJMEJOC___C_IKEHBGKEPAC_OFFSET))(this, DOJPDJKKAPG);
	}
};
