#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define F28DBBA4179BDC6A_F5628F8349D4A8A6_EE5D41331AEE4F50_OFFSET UNITYSDK_OFFSET(0x440D4A0)
#define F28DBBA4179BDC6A_F5628F8349D4A8A6_F2757748A3BD71B5_OFFSET UNITYSDK_OFFSET(0x440D830)
#define F28DBBA4179BDC6A_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x440ED50)
#define F28DBBA4179BDC6A_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F28DBBA4179BDC6A_F5628F8349D4A8A6_TypeDefinitionIndex = 19439;

class F28DBBA4179BDC6A_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F28DBBA4179BDC6A_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F28DBBA4179BDC6A_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F28DBBA4179BDC6A_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::String*, ::System::DateTime>** StaticGet_AD64BB6C8EC2E491()
	{
		return (::System::Func_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(F28DBBA4179BDC6A_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Func_2<::System::DateTime, ::System::String*>** StaticGet_B3A8AFF65974F2A8()
	{
		return (::System::Func_2<::System::DateTime, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(F28DBBA4179BDC6A_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F28DBBA4179BDC6A_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F28DBBA4179BDC6A_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::DateTime EE5D41331AEE4F50(::System::String* B9AEC57275825552)
	{
		return ((::System::DateTime(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F28DBBA4179BDC6A_F5628F8349D4A8A6_EE5D41331AEE4F50_OFFSET))(this, B9AEC57275825552);
	}

	::System::String* F2757748A3BD71B5(::System::DateTime B9AEC57275825552)
	{
		return ((::System::String*(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + F28DBBA4179BDC6A_F5628F8349D4A8A6_F2757748A3BD71B5_OFFSET))(this, B9AEC57275825552);
	}
};
