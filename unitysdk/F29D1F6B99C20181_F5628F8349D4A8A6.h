#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define F29D1F6B99C20181_F5628F8349D4A8A6_B4501B05216DA4A3_OFFSET UNITYSDK_OFFSET(0x3ADF770)
#define F29D1F6B99C20181_F5628F8349D4A8A6_E8062EED12F1F3C4_OFFSET UNITYSDK_OFFSET(0x3ADF770)
#define F29D1F6B99C20181_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AE0370)
#define F29D1F6B99C20181_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F29D1F6B99C20181_F5628F8349D4A8A6_TypeDefinitionIndex = 12190;

class F29D1F6B99C20181_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F29D1F6B99C20181_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F29D1F6B99C20181_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F29D1F6B99C20181_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::String*, ::System::String*>** StaticGet_E3CEE43317B9E051()
	{
		return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(F29D1F6B99C20181_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Func_2<::System::String*, ::System::String*>** StaticGet_F96CC1DE2E7B6F41()
	{
		return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(F29D1F6B99C20181_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F29D1F6B99C20181_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F29D1F6B99C20181_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::String* B4501B05216DA4A3(::System::String* BB8C609F76620E45)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F29D1F6B99C20181_F5628F8349D4A8A6_B4501B05216DA4A3_OFFSET))(this, BB8C609F76620E45);
	}

	::System::String* E8062EED12F1F3C4(::System::String* BB8C609F76620E45)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F29D1F6B99C20181_F5628F8349D4A8A6_E8062EED12F1F3C4_OFFSET))(this, BB8C609F76620E45);
	}
};
