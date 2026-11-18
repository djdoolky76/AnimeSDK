#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define BANLLJNMJLA___C_DKNCANBIHNE_OFFSET UNITYSDK_OFFSET(0x18548BF0)
#define BANLLJNMJLA___C_OMJJNNLAOLI_OFFSET UNITYSDK_OFFSET(0x18548BE0)
#define BANLLJNMJLA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18548B90)
#define BANLLJNMJLA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18548BD0)

inline static constexpr unsigned int BANLLJNMJLA___c_TypeDefinitionIndex = 46572;

class BANLLJNMJLA___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__18_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BANLLJNMJLA___c_TypeDefinitionIndex)->GetStaticField(0x36D20);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BANLLJNMJLA___c_TypeDefinitionIndex)->GetStaticField(0x36D28);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__18_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BANLLJNMJLA___c_TypeDefinitionIndex)->GetStaticField(0x36D30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANLLJNMJLA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANLLJNMJLA___C__CTOR_OFFSET))(this);
	}

	::System::Boolean OMJJNNLAOLI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANLLJNMJLA___C_OMJJNNLAOLI_OFFSET))(this);
	}

	::System::Boolean DKNCANBIHNE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANLLJNMJLA___C_DKNCANBIHNE_OFFSET))(this);
	}
};
