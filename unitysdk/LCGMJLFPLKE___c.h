#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define LCGMJLFPLKE___C_IBOCBMPEIOP_OFFSET UNITYSDK_OFFSET(0x15BB6AF0)
#define LCGMJLFPLKE___C_PFKOGHFMLOA_OFFSET UNITYSDK_OFFSET(0x15BB6BB0)
#define LCGMJLFPLKE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BB6AA0)
#define LCGMJLFPLKE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB6AE0)

inline static constexpr unsigned int LCGMJLFPLKE___c_TypeDefinitionIndex = 66102;

class LCGMJLFPLKE___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__9_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LCGMJLFPLKE___c_TypeDefinitionIndex)->GetStaticField(0x32A80);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LCGMJLFPLKE___c_TypeDefinitionIndex)->GetStaticField(0x32A88);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__11_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LCGMJLFPLKE___c_TypeDefinitionIndex)->GetStaticField(0x32A90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCGMJLFPLKE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMJLFPLKE___C__CTOR_OFFSET))(this);
	}

	::System::Boolean IBOCBMPEIOP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMJLFPLKE___C_IBOCBMPEIOP_OFFSET))(this);
	}

	::System::Boolean PFKOGHFMLOA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMJLFPLKE___C_PFKOGHFMLOA_OFFSET))(this);
	}
};
