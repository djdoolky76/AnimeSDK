#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ELABNOEFDHI;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EFJDAMADHGB___C_PCMDIBCOPDI_OFFSET UNITYSDK_OFFSET(0xFDDBE40)
#define EFJDAMADHGB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDDBDF0)
#define EFJDAMADHGB___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFDDBE30)

inline static constexpr unsigned int EFJDAMADHGB___c_TypeDefinitionIndex = 54526;

class EFJDAMADHGB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EFJDAMADHGB___c_TypeDefinitionIndex)->GetStaticField(0x47DC0);
	}
	static ::System::Func_2<::ELABNOEFDHI*, ::System::String*>** StaticGet___9__4_1()
	{
		return (::System::Func_2<::ELABNOEFDHI*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EFJDAMADHGB___c_TypeDefinitionIndex)->GetStaticField(0x47DC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFJDAMADHGB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJDAMADHGB___C__CTOR_OFFSET))(this);
	}

	::System::String* PCMDIBCOPDI(::ELABNOEFDHI* HMMMOCJAEOA)
	{
		return ((::System::String*(*)(::PVOID, ::ELABNOEFDHI*))((::PBYTE)hIl2Cpp + EFJDAMADHGB___C_PCMDIBCOPDI_OFFSET))(this, HMMMOCJAEOA);
	}
};
