#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ReplayChangeEvent;
namespace System { template <typename T1, typename T2> class Func_2; }

#define OCGDICIMEHF___C_HHNHJKCJNEG_OFFSET UNITYSDK_OFFSET(0x1CEB0760)
#define OCGDICIMEHF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEB0710)
#define OCGDICIMEHF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB0750)

inline static constexpr unsigned int OCGDICIMEHF___c_TypeDefinitionIndex = 34714;

class OCGDICIMEHF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OCGDICIMEHF___c_TypeDefinitionIndex)->GetStaticField(0x2A6F0);
	}
	static ::System::Func_2<::ReplayChangeEvent*, ::System::Single>** StaticGet___9__24_0()
	{
		return (::System::Func_2<::ReplayChangeEvent*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(OCGDICIMEHF___c_TypeDefinitionIndex)->GetStaticField(0x2A6F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCGDICIMEHF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGDICIMEHF___C__CTOR_OFFSET))(this);
	}

	::System::Single HHNHJKCJNEG(::ReplayChangeEvent* HAAEBCOBKFF)
	{
		return ((::System::Single(*)(::PVOID, ::ReplayChangeEvent*))((::PBYTE)hIl2Cpp + OCGDICIMEHF___C_HHNHJKCJNEG_OFFSET))(this, HAAEBCOBKFF);
	}
};
