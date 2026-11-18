#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MJFPBLFGDMC___C_DPDGDEFEAJI_OFFSET UNITYSDK_OFFSET(0x17D36AA0)
#define MJFPBLFGDMC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D36A50)
#define MJFPBLFGDMC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D36A90)

inline static constexpr unsigned int MJFPBLFGDMC___c_TypeDefinitionIndex = 45625;

class MJFPBLFGDMC___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__8_8()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MJFPBLFGDMC___c_TypeDefinitionIndex)->GetStaticField(0x4F810);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MJFPBLFGDMC___c_TypeDefinitionIndex)->GetStaticField(0x4F818);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJFPBLFGDMC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFPBLFGDMC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean DPDGDEFEAJI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFPBLFGDMC___C_DPDGDEFEAJI_OFFSET))(this);
	}
};
