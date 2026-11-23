#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A989E4DCA40DF00B;
namespace System { template <typename T> class Action_1; }

#define A3DBDF630C6BB8F3_F5628F8349D4A8A6_F70160E6BB117B75_OFFSET UNITYSDK_OFFSET(0x2081AD0)
#define A3DBDF630C6BB8F3_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2081CD0)
#define A3DBDF630C6BB8F3_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A3DBDF630C6BB8F3_F5628F8349D4A8A6_TypeDefinitionIndex = 8459;

class A3DBDF630C6BB8F3_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A3DBDF630C6BB8F3_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A3DBDF630C6BB8F3_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A3DBDF630C6BB8F3_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::A989E4DCA40DF00B*>** StaticGet_A11D69BF37F0CD6C()
	{
		return (::System::Action_1<::A989E4DCA40DF00B*>**)Il2CppClass::FromTypeDefinitionIndex(A3DBDF630C6BB8F3_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A3DBDF630C6BB8F3_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3DBDF630C6BB8F3_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void F70160E6BB117B75(::A989E4DCA40DF00B* EC35F88C87A83BEB)
	{
		return ((::System::Void(*)(::PVOID, ::A989E4DCA40DF00B*))((::PBYTE)hIl2Cpp + A3DBDF630C6BB8F3_F5628F8349D4A8A6_F70160E6BB117B75_OFFSET))(this, EC35F88C87A83BEB);
	}
};
