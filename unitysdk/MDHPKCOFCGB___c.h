#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MDHPKCOFCGB___C_CHJMJOKNBBH_OFFSET UNITYSDK_OFFSET(0x17D1B590)
#define MDHPKCOFCGB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D1B540)
#define MDHPKCOFCGB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1B580)

inline static constexpr unsigned int MDHPKCOFCGB___c_TypeDefinitionIndex = 75868;

class MDHPKCOFCGB___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_11()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MDHPKCOFCGB___c_TypeDefinitionIndex)->GetStaticField(0x4A2D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MDHPKCOFCGB___c_TypeDefinitionIndex)->GetStaticField(0x4A2D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDHPKCOFCGB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean CHJMJOKNBBH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB___C_CHJMJOKNBBH_OFFSET))(this);
	}
};
