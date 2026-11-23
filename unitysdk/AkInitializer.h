#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkSurfaceReflector_BF06A591335C5733.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkWwiseInitializationSettings;
namespace UnityEngine { class GameObject; }

#define AKINITIALIZER_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x291A320)
#define AKINITIALIZER_A3A0BC6BFB8F7D90_OFFSET UNITYSDK_OFFSET(0x2919FB0)
#define AKINITIALIZER_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x291A2B0)
#define AKINITIALIZER_B256349F20C1665A_OFFSET UNITYSDK_OFFSET(0x291A170)
#define AKINITIALIZER_B6D04E23BF7E501F_OFFSET UNITYSDK_OFFSET(0x2919E80)
#define AKINITIALIZER_B8BC14E355EF5009_OFFSET UNITYSDK_OFFSET(0x291A270)
#define AKINITIALIZER_BE47A4C90145BA8D_OFFSET UNITYSDK_OFFSET(0x2919D10)
#define AKINITIALIZER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x291A350)
#define AKINITIALIZER_F355185A96BD4413_OFFSET UNITYSDK_OFFSET(0x2919F50)
#define AKINITIALIZER_F417BC287AF6B4AF_OFFSET UNITYSDK_OFFSET(0x291A220)
#define AKINITIALIZER_F5E407B60CCCAC07_OFFSET UNITYSDK_OFFSET(0x291A080)
#define AKINITIALIZER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2919C30)
#define AKINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int AkInitializer_TypeDefinitionIndex = 20438;

class AkInitializer : public ::UnityEngine::MonoBehaviour
{
public:
	static ::AkInitializer** StaticGet_EBB740135D712DE6()
	{
		return (::AkInitializer**)Il2CppClass::FromTypeDefinitionIndex(AkInitializer_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::AkSurfaceReflector_BF06A591335C5733* StaticGet_F025A218164CC66B()
	{
		return (::AkSurfaceReflector_BF06A591335C5733*)Il2CppClass::FromTypeDefinitionIndex(AkInitializer_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::AkSurfaceReflector_BF06A591335C5733* StaticGet_A72AE51C10D44EAF()
	{
		return (::AkSurfaceReflector_BF06A591335C5733*)Il2CppClass::FromTypeDefinitionIndex(AkInitializer_TypeDefinitionIndex)->GetStaticField(0x30);
	}
	::AkWwiseInitializationSettings* InitializationSettings; // 0x20

	::System::Void FDBCDBBFE02CD51A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_FDBCDBBFE02CD51A_OFFSET))(this);
	}

	::System::Void F355185A96BD4413()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_F355185A96BD4413_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER__CTOR_OFFSET))(this);
	}

	::System::Void F5E407B60CCCAC07()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_F5E407B60CCCAC07_OFFSET))(this);
	}

	::System::Boolean A3A0BC6BFB8F7D90()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_A3A0BC6BFB8F7D90_OFFSET))(this);
	}

	static ::UnityEngine::GameObject* B6D04E23BF7E501F()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + AKINITIALIZER_B6D04E23BF7E501F_OFFSET))();
	}

	::System::Void F417BC287AF6B4AF(::System::Boolean AAA502417CBF4C0E)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITIALIZER_F417BC287AF6B4AF_OFFSET))(this, AAA502417CBF4C0E);
	}

	::System::Void A28D6A0C3E793E7D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_A28D6A0C3E793E7D_OFFSET))(this);
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_BF13C91AD80643D2_OFFSET))(this);
	}

	::System::Void B256349F20C1665A(::System::Boolean EFBA426420FAFBC5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITIALIZER_B256349F20C1665A_OFFSET))(this, EFBA426420FAFBC5);
	}

	::System::Void BE47A4C90145BA8D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_BE47A4C90145BA8D_OFFSET))(this);
	}

	::System::Void B8BC14E355EF5009()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_B8BC14E355EF5009_OFFSET))(this);
	}

	::System::Void AB36E0EE549986E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_AB36E0EE549986E5_OFFSET))(this);
	}
};
