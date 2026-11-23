#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define F827F0B5A9E9A9EB_F5628F8349D4A8A6_F1C178BF3A2C279F_OFFSET UNITYSDK_OFFSET(0x16965C0)
#define F827F0B5A9E9A9EB_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1696B30)
#define F827F0B5A9E9A9EB_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F827F0B5A9E9A9EB_F5628F8349D4A8A6_TypeDefinitionIndex = 389;

class F827F0B5A9E9A9EB_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F827F0B5A9E9A9EB_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F827F0B5A9E9A9EB_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F827F0B5A9E9A9EB_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet_E3CEE43317B9E051()
	{
		return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(F827F0B5A9E9A9EB_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F827F0B5A9E9A9EB_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F827F0B5A9E9A9EB_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::UInt32 F1C178BF3A2C279F(::System::UInt32 BC20491B4DBA8C05)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F827F0B5A9E9A9EB_F5628F8349D4A8A6_F1C178BF3A2C279F_OFFSET))(this, BC20491B4DBA8C05);
	}
};
