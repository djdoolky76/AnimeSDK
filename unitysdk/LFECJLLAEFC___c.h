#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define LFECJLLAEFC___C_BABFLAEHOII_OFFSET UNITYSDK_OFFSET(0x1A6058A0)
#define LFECJLLAEFC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A605850)
#define LFECJLLAEFC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A605890)

inline static constexpr unsigned int LFECJLLAEFC___c_TypeDefinitionIndex = 52604;

class LFECJLLAEFC___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__8_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LFECJLLAEFC___c_TypeDefinitionIndex)->GetStaticField(0x48460);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LFECJLLAEFC___c_TypeDefinitionIndex)->GetStaticField(0x48468);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFECJLLAEFC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFECJLLAEFC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BABFLAEHOII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFECJLLAEFC___C_BABFLAEHOII_OFFSET))(this);
	}
};
