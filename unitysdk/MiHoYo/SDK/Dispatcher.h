#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_DISPATCHER_A5AB7E1F7380639E_OFFSET UNITYSDK_OFFSET(0x2A06FA0)
#define MIHOYO_SDK_DISPATCHER_A788EA8D7C189191_OFFSET UNITYSDK_OFFSET(0x2A06CC0)
#define MIHOYO_SDK_DISPATCHER_B0901FA4AD0438C3_1_OFFSET UNITYSDK_OFFSET(0x2A06EF0)
#define MIHOYO_SDK_DISPATCHER_B0901FA4AD0438C3_OFFSET UNITYSDK_OFFSET(0x2A06E30)
#define MIHOYO_SDK_DISPATCHER_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x2A070D0)
#define MIHOYO_SDK_DISPATCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x2A073D0)
#define MIHOYO_SDK_DISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Dispatcher_TypeDefinitionIndex = 15939;

	class Dispatcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::Dispatcher** StaticGet_EAE0569B007CD057()
		{
			return (::MiHoYo::SDK::Dispatcher**)Il2CppClass::FromTypeDefinitionIndex(Dispatcher_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_B040866FEE9C6AF7()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Dispatcher_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_FF1CCD9C5DDFF70B()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Dispatcher_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_E6B58551834C89DD()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Dispatcher_TypeDefinitionIndex)->GetStaticField(0x18);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER__CTOR_OFFSET))(this);
		}

		static ::System::Void B0901FA4AD0438C3(::System::Action_1<::System::Object*>* BC288918C940C7A6, ::System::Object* E5EB06E4FD2C32F7)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_B0901FA4AD0438C3_OFFSET))(BC288918C940C7A6, E5EB06E4FD2C32F7);
		}

		static ::System::Void A5AB7E1F7380639E(::System::Action* BC288918C940C7A6)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_A5AB7E1F7380639E_OFFSET))(BC288918C940C7A6);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER__CCTOR_OFFSET))();
		}

		static ::System::Void A788EA8D7C189191()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_A788EA8D7C189191_OFFSET))();
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_E02954280801633F_OFFSET))(this);
		}

		static ::System::Void B0901FA4AD0438C3_1(::System::Action* BC288918C940C7A6)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_B0901FA4AD0438C3_1_OFFSET))(BC288918C940C7A6);
		}
	};
}
