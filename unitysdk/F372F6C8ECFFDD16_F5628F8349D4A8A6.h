#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBF5DC1AB751F82C;
namespace System { template <typename T> class Action_1; }

#define F372F6C8ECFFDD16_F5628F8349D4A8A6_AEC2C0D8AD302BB2_OFFSET UNITYSDK_OFFSET(0x2099D90)
#define F372F6C8ECFFDD16_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x209A190)
#define F372F6C8ECFFDD16_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F372F6C8ECFFDD16_F5628F8349D4A8A6_TypeDefinitionIndex = 8543;

class F372F6C8ECFFDD16_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F372F6C8ECFFDD16_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F372F6C8ECFFDD16_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F372F6C8ECFFDD16_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::FBF5DC1AB751F82C*>** StaticGet_A7539CEF38B4E00D()
	{
		return (::System::Action_1<::FBF5DC1AB751F82C*>**)Il2CppClass::FromTypeDefinitionIndex(F372F6C8ECFFDD16_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F372F6C8ECFFDD16_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F372F6C8ECFFDD16_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void AEC2C0D8AD302BB2(::FBF5DC1AB751F82C* FCA4B74FE834314F)
	{
		return ((::System::Void(*)(::PVOID, ::FBF5DC1AB751F82C*))((::PBYTE)hIl2Cpp + F372F6C8ECFFDD16_F5628F8349D4A8A6_AEC2C0D8AD302BB2_OFFSET))(this, FCA4B74FE834314F);
	}
};
