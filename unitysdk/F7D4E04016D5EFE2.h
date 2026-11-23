#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TA::EnvironmentSystem { class ESCustomData; }
namespace TA::EnvironmentSystem { class ESVolume; }
namespace UnityEngine { class Camera; }

#define F7D4E04016D5EFE2_AAC3FA02974C6F9F_OFFSET UNITYSDK_OFFSET(0x28A0850)
#define F7D4E04016D5EFE2_B34C3F74919D7E4A_OFFSET UNITYSDK_OFFSET(0x28A0BB0)
#define F7D4E04016D5EFE2_B7F4F5A798757EE5_OFFSET UNITYSDK_OFFSET(0x28A0E50)
#define F7D4E04016D5EFE2_B899AE1B4E11C126_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define F7D4E04016D5EFE2_B916303F91D5DA45_OFFSET UNITYSDK_OFFSET(0x28A0250)
#define F7D4E04016D5EFE2_BC6BF5BA789B82F8_OFFSET UNITYSDK_OFFSET(0x28A0500)
#define F7D4E04016D5EFE2_BCE7751723775F5E_OFFSET UNITYSDK_OFFSET(0x28A0D00)
#define F7D4E04016D5EFE2_BFD0C27E08DB14D1_OFFSET UNITYSDK_OFFSET(0x28A10D0)
#define F7D4E04016D5EFE2_F0715F86377A7DD9_OFFSET UNITYSDK_OFFSET(0x28A0790)
#define F7D4E04016D5EFE2_F39D01A074742B2D_OFFSET UNITYSDK_OFFSET(0x28A0030)
#define F7D4E04016D5EFE2_F4FA64C8B2225CA8_OFFSET UNITYSDK_OFFSET(0x28A1050)
#define F7D4E04016D5EFE2_F7B0A23335A3DB16_OFFSET UNITYSDK_OFFSET(0x28A13A0)
#define F7D4E04016D5EFE2_FBD08428AD1DE417_OFFSET UNITYSDK_OFFSET(0x28A0A10)
#define F7D4E04016D5EFE2_FE9DB2E1BF8BE9DC_OFFSET UNITYSDK_OFFSET(0x28A06E0)
#define F7D4E04016D5EFE2__CCTOR_OFFSET UNITYSDK_OFFSET(0x28A0F20)
#define F7D4E04016D5EFE2__CTOR_OFFSET UNITYSDK_OFFSET(0x28A0F60)

inline static constexpr unsigned int F7D4E04016D5EFE2_TypeDefinitionIndex = 16243;

class F7D4E04016D5EFE2 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_BE5B27B9F95B924F()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(F7D4E04016D5EFE2_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::F7D4E04016D5EFE2** StaticGet_F2EC524D6D748B5F()
	{
		return (::F7D4E04016D5EFE2**)Il2CppClass::FromTypeDefinitionIndex(F7D4E04016D5EFE2_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::System::Collections::Generic::List_1<::TA::EnvironmentSystem::ESVolume*>* F919B39CD2F793D1; // 0x10
	::System::Collections::Generic::List_1<::TA::EnvironmentSystem::ESVolume*>* ED41D3D9F6319EB7; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::TA::EnvironmentSystem::ESCustomData*>* FA4843870A4F5B44; // 0x20
	::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::Type*, ::TA::EnvironmentSystem::ESCustomData*>*>* BEA172B8842D8EF2; // 0x28

	::System::Void F0715F86377A7DD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_F0715F86377A7DD9_OFFSET))(this);
	}

	::System::Boolean B7F4F5A798757EE5(::TA::EnvironmentSystem::ESVolume* AA88B9674AD08668)
	{
		return ((::System::Boolean(*)(::PVOID, ::TA::EnvironmentSystem::ESVolume*))((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_B7F4F5A798757EE5_OFFSET))(this, AA88B9674AD08668);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2__CTOR_OFFSET))(this);
	}

	::System::Void F39D01A074742B2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_F39D01A074742B2D_OFFSET))(this);
	}

	::System::Void AAC3FA02974C6F9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_AAC3FA02974C6F9F_OFFSET))(this);
	}

	::System::Void B34C3F74919D7E4A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_B34C3F74919D7E4A_OFFSET))(this);
	}

	::System::Void BCE7751723775F5E(::System::Single A79B8FBAFAEA290F)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_BCE7751723775F5E_OFFSET))(this, A79B8FBAFAEA290F);
	}

	::System::Void B916303F91D5DA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_B916303F91D5DA45_OFFSET))(this);
	}

	::UnityEngine::Camera* F4FA64C8B2225CA8()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_F4FA64C8B2225CA8_OFFSET))(this);
	}

	static ::F7D4E04016D5EFE2* F7B0A23335A3DB16()
	{
		return ((::F7D4E04016D5EFE2*(*)())((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_F7B0A23335A3DB16_OFFSET))();
	}

	::System::Void BC6BF5BA789B82F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_BC6BF5BA789B82F8_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Type*, ::TA::EnvironmentSystem::ESCustomData*>* B899AE1B4E11C126()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Type*, ::TA::EnvironmentSystem::ESCustomData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_B899AE1B4E11C126_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2__CCTOR_OFFSET))();
	}

	::System::Boolean FBD08428AD1DE417(::TA::EnvironmentSystem::ESVolume* AA88B9674AD08668)
	{
		return ((::System::Boolean(*)(::PVOID, ::TA::EnvironmentSystem::ESVolume*))((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_FBD08428AD1DE417_OFFSET))(this, AA88B9674AD08668);
	}

	::UnityEngine::Vector3 BFD0C27E08DB14D1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_BFD0C27E08DB14D1_OFFSET))(this);
	}

	::TA::EnvironmentSystem::ESCustomData* FE9DB2E1BF8BE9DC(::System::Type* A288CB28FC2A6DA3)
	{
		return ((::TA::EnvironmentSystem::ESCustomData*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + F7D4E04016D5EFE2_FE9DB2E1BF8BE9DC_OFFSET))(this, A288CB28FC2A6DA3);
	}
};
