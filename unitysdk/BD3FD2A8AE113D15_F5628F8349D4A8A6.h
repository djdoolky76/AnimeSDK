#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F14A0731FBC1DD2E;
namespace System { template <typename T1, typename T2> class Func_2; }

#define BD3FD2A8AE113D15_F5628F8349D4A8A6_E96754A8C7DBA4C8_OFFSET UNITYSDK_OFFSET(0x1CFE900)
#define BD3FD2A8AE113D15_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFED10)
#define BD3FD2A8AE113D15_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BD3FD2A8AE113D15_F5628F8349D4A8A6_TypeDefinitionIndex = 9915;

class BD3FD2A8AE113D15_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::BD3FD2A8AE113D15_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::BD3FD2A8AE113D15_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(BD3FD2A8AE113D15_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::F14A0731FBC1DD2E*, ::System::Boolean>** StaticGet_BD38FA80B668E0D5()
	{
		return (::System::Func_2<::F14A0731FBC1DD2E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BD3FD2A8AE113D15_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BD3FD2A8AE113D15_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD3FD2A8AE113D15_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean E96754A8C7DBA4C8(::F14A0731FBC1DD2E* BB8C609F76620E45)
	{
		return ((::System::Boolean(*)(::PVOID, ::F14A0731FBC1DD2E*))((::PBYTE)hIl2Cpp + BD3FD2A8AE113D15_F5628F8349D4A8A6_E96754A8C7DBA4C8_OFFSET))(this, BB8C609F76620E45);
	}
};
