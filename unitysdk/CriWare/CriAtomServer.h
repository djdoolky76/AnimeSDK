#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

namespace System { template <typename T> class Action_1; }

#define CRIWARE_CRIATOMSERVER_A0032F63FB5A7535_OFFSET UNITYSDK_OFFSET(0x2ABA070)
#define CRIWARE_CRIATOMSERVER_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x2ABA140)
#define CRIWARE_CRIATOMSERVER_B5B4F68A9D0C6F29_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define CRIWARE_CRIATOMSERVER_B7FAEC2571CD6ADA_OFFSET UNITYSDK_OFFSET(0x2ABA350)
#define CRIWARE_CRIATOMSERVER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2ABA250)
#define CRIWARE_CRIATOMSERVER_E192657B25556063_OFFSET UNITYSDK_OFFSET(0x2AB9F50)
#define CRIWARE_CRIATOMSERVER_EDAF914FD44B5ECC_OFFSET UNITYSDK_OFFSET(0x2AB9FA0)
#define CRIWARE_CRIATOMSERVER_F417BC287AF6B4AF_OFFSET UNITYSDK_OFFSET(0x2ABA070)
#define CRIWARE_CRIATOMSERVER_F44821AF367248E5_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define CRIWARE_CRIATOMSERVER_FB808718E6D05ACC_OFFSET UNITYSDK_OFFSET(0x2AB9D40)
#define CRIWARE_CRIATOMSERVER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2AB9C50)
#define CRIWARE_CRIATOMSERVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x2ABA2B0)
#define CRIWARE_CRIATOMSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x2ABA320)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomServer_TypeDefinitionIndex = 19196;

	class CriAtomServer : public ::CriWare::CriMonoBehaviour
	{
	public:
		static ::CriWare::CriAtomServer** StaticGet_EAE0569B007CD057()
		{
			return (::CriWare::CriAtomServer**)Il2CppClass::FromTypeDefinitionIndex(CriAtomServer_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_BD4181D1417D302D()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriAtomServer_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Boolean* StaticGet_E8C18E53B7B34750()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriAtomServer_TypeDefinitionIndex)->GetStaticField(0x9);
		}
		::System::Action_1<::System::Boolean>* onApplicationPausePreProcess; // 0x30
		::System::Action_1<::System::Boolean>* onApplicationPausePostProcess; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER__CTOR_OFFSET))(this);
		}

		::System::Void B5B4F68A9D0C6F29()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_B5B4F68A9D0C6F29_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void A0032F63FB5A7535(::System::Boolean F43886F45ACA3649)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_A0032F63FB5A7535_OFFSET))(this, F43886F45ACA3649);
		}

		static ::System::Void FB808718E6D05ACC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_FB808718E6D05ACC_OFFSET))();
		}

		::System::Void F44821AF367248E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_F44821AF367248E5_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void E192657B25556063()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_E192657B25556063_OFFSET))(this);
		}

		::System::Void F417BC287AF6B4AF(::System::Boolean F43886F45ACA3649)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_F417BC287AF6B4AF_OFFSET))(this, F43886F45ACA3649);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		static ::CriWare::CriAtomServer* B7FAEC2571CD6ADA()
		{
			return ((::CriWare::CriAtomServer*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_B7FAEC2571CD6ADA_OFFSET))();
		}

		static ::System::Void EDAF914FD44B5ECC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_EDAF914FD44B5ECC_OFFSET))();
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER__CCTOR_OFFSET))();
		}
	};
}
