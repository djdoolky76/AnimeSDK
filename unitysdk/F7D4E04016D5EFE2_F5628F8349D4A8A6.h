#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class E891BA3236FD13E7; }
namespace TA::EnvironmentSystem { class ESVolume; }

#define F7D4E04016D5EFE2_F5628F8349D4A8A6_A2F2A291FFDED214_OFFSET UNITYSDK_OFFSET(0x28AA9C0)
#define F7D4E04016D5EFE2_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x28AAA00)
#define F7D4E04016D5EFE2_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F7D4E04016D5EFE2_F5628F8349D4A8A6_TypeDefinitionIndex = 16242;

class F7D4E04016D5EFE2_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F7D4E04016D5EFE2_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F7D4E04016D5EFE2_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F7D4E04016D5EFE2_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::E891BA3236FD13E7<::TA::EnvironmentSystem::ESVolume*>** StaticGet_E9ECEFD236E8FFBC()
	{
		return (::System::E891BA3236FD13E7<::TA::EnvironmentSystem::ESVolume*>**)Il2CppClass::FromTypeDefinitionIndex(F7D4E04016D5EFE2_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean A2F2A291FFDED214(::TA::EnvironmentSystem::ESVolume* B44B351D79166B65)
	{
		return ((::System::Boolean(*)(::PVOID, ::TA::EnvironmentSystem::ESVolume*))((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_F5628F8349D4A8A6_A2F2A291FFDED214_OFFSET))(this, B44B351D79166B65);
	}
};
