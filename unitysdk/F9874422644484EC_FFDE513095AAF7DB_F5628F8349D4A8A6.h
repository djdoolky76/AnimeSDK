#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define F9874422644484EC_FFDE513095AAF7DB_F5628F8349D4A8A6_A72E132BB84838F8_OFFSET UNITYSDK_OFFSET(0x2945760)
#define F9874422644484EC_FFDE513095AAF7DB_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2946E80)
#define F9874422644484EC_FFDE513095AAF7DB_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F9874422644484EC_FFDE513095AAF7DB_F5628F8349D4A8A6_TypeDefinitionIndex = 15359;

class F9874422644484EC_FFDE513095AAF7DB_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F9874422644484EC_FFDE513095AAF7DB_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F9874422644484EC_FFDE513095AAF7DB_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F9874422644484EC_FFDE513095AAF7DB_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::String*, ::System::Char>** StaticGet_B2B462D767EFBA79()
	{
		return (::System::Func_2<::System::String*, ::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(F9874422644484EC_FFDE513095AAF7DB_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F9874422644484EC_FFDE513095AAF7DB_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9874422644484EC_FFDE513095AAF7DB_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Char A72E132BB84838F8(::System::String* B9AEC57275825552)
	{
		return ((::System::Char(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F9874422644484EC_FFDE513095AAF7DB_F5628F8349D4A8A6_A72E132BB84838F8_OFFSET))(this, B9AEC57275825552);
	}
};
