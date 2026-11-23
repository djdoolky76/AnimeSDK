#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F5BB19EB9B71F1C0_F5628F8349D4A8A6_A86A505C6A3AC27C_OFFSET UNITYSDK_OFFSET(0x3A7E810)
#define F5BB19EB9B71F1C0_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A80E50)
#define F5BB19EB9B71F1C0_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F5BB19EB9B71F1C0_F5628F8349D4A8A6_TypeDefinitionIndex = 12003;

class F5BB19EB9B71F1C0_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F5BB19EB9B71F1C0_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F5BB19EB9B71F1C0_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F5BB19EB9B71F1C0_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::String*>** StaticGet_BD38FA80B668E0D5()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(F5BB19EB9B71F1C0_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F5BB19EB9B71F1C0_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5BB19EB9B71F1C0_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void A86A505C6A3AC27C(::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F5BB19EB9B71F1C0_F5628F8349D4A8A6_A86A505C6A3AC27C_OFFSET))(this, B083BE7841B347C4);
	}
};
