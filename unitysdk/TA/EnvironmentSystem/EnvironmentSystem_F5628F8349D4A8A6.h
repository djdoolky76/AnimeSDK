#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T> class ADDF5F55A85EB950; }

#define TA_ENVIRONMENTSYSTEM_ENVIRONMENTSYSTEM_F5628F8349D4A8A6_A2E16517AD9A6C22_OFFSET UNITYSDK_OFFSET(0x28EA840)
#define TA_ENVIRONMENTSYSTEM_ENVIRONMENTSYSTEM_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x28EA860)
#define TA_ENVIRONMENTSYSTEM_ENVIRONMENTSYSTEM_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int EnvironmentSystem_F5628F8349D4A8A6_TypeDefinitionIndex = 16381;

	class EnvironmentSystem_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::TA::EnvironmentSystem::EnvironmentSystem_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::TA::EnvironmentSystem::EnvironmentSystem_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::ADDF5F55A85EB950<::B07850EA97DBB75A<::System::Int32, ::System::Type*>>** StaticGet_B10A085834E493C5()
		{
			return (::System::ADDF5F55A85EB950<::B07850EA97DBB75A<::System::Int32, ::System::Type*>>**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ENVIRONMENTSYSTEM_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ENVIRONMENTSYSTEM_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Int32 A2E16517AD9A6C22(::B07850EA97DBB75A<::System::Int32, ::System::Type*> B35BBBE7E39341A2, ::B07850EA97DBB75A<::System::Int32, ::System::Type*> AE40CAA6BBFEAD2C)
		{
			return ((::System::Int32(*)(::PVOID, ::B07850EA97DBB75A<::System::Int32, ::System::Type*>, ::B07850EA97DBB75A<::System::Int32, ::System::Type*>))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ENVIRONMENTSYSTEM_F5628F8349D4A8A6_A2E16517AD9A6C22_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
		}
	};
}
