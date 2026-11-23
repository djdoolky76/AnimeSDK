#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

namespace CriWare { class CriWareErrorHandler_A58A6DA0FD8844FB; }
namespace System { class String; }
template <typename T> class BE6DE38B2F5ACFD6;

#define CRIWARE_CRIWAREERRORHANDLER_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x2AC38C0)
#define CRIWARE_CRIWAREERRORHANDLER_A5F12B7E32E2F185_OFFSET UNITYSDK_OFFSET(0x2AC4480)
#define CRIWARE_CRIWAREERRORHANDLER_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2AC3750)
#define CRIWARE_CRIWAREERRORHANDLER_AEB3937AFDD7CE52_OFFSET UNITYSDK_OFFSET(0x2AC4310)
#define CRIWARE_CRIWAREERRORHANDLER_B0E487C239C13041_OFFSET UNITYSDK_OFFSET(0x2AC4220)
#define CRIWARE_CRIWAREERRORHANDLER_B2949A4F2042713E_OFFSET UNITYSDK_OFFSET(0x2AC3C60)
#define CRIWARE_CRIWAREERRORHANDLER_B5B4F68A9D0C6F29_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define CRIWARE_CRIWAREERRORHANDLER_B71F6F385CB3E478_OFFSET UNITYSDK_OFFSET(0x2AC3E20)
#define CRIWARE_CRIWAREERRORHANDLER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2AC3A70)
#define CRIWARE_CRIWAREERRORHANDLER_E0C8D4ED440AA25D_OFFSET UNITYSDK_OFFSET(0x2AC40A0)
#define CRIWARE_CRIWAREERRORHANDLER_E11980CC4282DF6C_OFFSET UNITYSDK_OFFSET(0x2AC3440)
#define CRIWARE_CRIWAREERRORHANDLER_E192657B25556063_OFFSET UNITYSDK_OFFSET(0x2AC32C0)
#define CRIWARE_CRIWAREERRORHANDLER_E30FFC857C9FA76D_OFFSET UNITYSDK_OFFSET(0x2AC36B0)
#define CRIWARE_CRIWAREERRORHANDLER_E52695B061A65240_OFFSET UNITYSDK_OFFSET(0x2AC4360)
#define CRIWARE_CRIWAREERRORHANDLER_EE820E652EDAE124_OFFSET UNITYSDK_OFFSET(0x2AC4570)
#define CRIWARE_CRIWAREERRORHANDLER_F3FE06F4E9FCB5AA_OFFSET UNITYSDK_OFFSET(0x2AC32C0)
#define CRIWARE_CRIWAREERRORHANDLER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2AC3120)
#define CRIWARE_CRIWAREERRORHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x2AC3F30)
#define CRIWARE_CRIWAREERRORHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x2AC4000)

namespace CriWare
{
	inline static constexpr unsigned int CriWareErrorHandler_TypeDefinitionIndex = 19199;

	class CriWareErrorHandler : public ::CriWare::CriMonoBehaviour
	{
	public:
		static ::System::String** StaticGet_ABFD6A9BDA5A02EF()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::String** StaticGet_B489A8B7B333A091()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::CriWare::CriWareErrorHandler_A58A6DA0FD8844FB** StaticGet_BCAC0219417A6E98()
		{
			return (::CriWare::CriWareErrorHandler_A58A6DA0FD8844FB**)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::CriWare::CriWareErrorHandler_A58A6DA0FD8844FB** StaticGet_EAC277E205EAE132()
		{
			return (::CriWare::CriWareErrorHandler_A58A6DA0FD8844FB**)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::System::Int32* StaticGet_B41773B055A9967E()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriWareErrorHandler_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		::System::Boolean enableDebugPrintOnTerminal; // 0x30
		::System::Boolean enableForceCrashOnError; // 0x31
		::System::Boolean dontDestroyOnLoad; // 0x32
		::System::Byte _padding0[0x1];
		::System::UInt32 messageBufferCounts; // 0x34
		::BE6DE38B2F5ACFD6<::System::String*>* AAEE80087B8F0270; // 0x38

		static ::System::String* AEB3937AFDD7CE52()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_AEB3937AFDD7CE52_OFFSET))();
		}

		::System::Void F3FE06F4E9FCB5AA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_F3FE06F4E9FCB5AA_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_A28D6A0C3E793E7D_OFFSET))(this);
		}

		static ::System::Void EE820E652EDAE124(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_EE820E652EDAE124_OFFSET))(E937D4885DAA1AE8);
		}

		static ::System::Void B0E487C239C13041(::CriWare::CriWareErrorHandler_A58A6DA0FD8844FB* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::CriWare::CriWareErrorHandler_A58A6DA0FD8844FB*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_B0E487C239C13041_OFFSET))(E937D4885DAA1AE8);
		}

		static ::System::Void E52695B061A65240(::CriWare::CriWareErrorHandler_A58A6DA0FD8844FB* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::CriWare::CriWareErrorHandler_A58A6DA0FD8844FB*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_E52695B061A65240_OFFSET))(E937D4885DAA1AE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER__CCTOR_OFFSET))();
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_BF13C91AD80643D2_OFFSET))(this);
		}

		static ::System::Void B2949A4F2042713E(::System::String* B26D616E593CD926)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_B2949A4F2042713E_OFFSET))(B26D616E593CD926);
		}

		static ::System::Void A5F12B7E32E2F185(::CriWare::CriWareErrorHandler_A58A6DA0FD8844FB* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::CriWare::CriWareErrorHandler_A58A6DA0FD8844FB*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_A5F12B7E32E2F185_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_AB36E0EE549986E5_OFFSET))(this);
		}

		static ::System::Boolean E30FFC857C9FA76D()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_E30FFC857C9FA76D_OFFSET))();
		}

		::System::Void B5B4F68A9D0C6F29()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_B5B4F68A9D0C6F29_OFFSET))(this);
		}

		::System::Void E192657B25556063()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_E192657B25556063_OFFSET))(this);
		}

		static ::System::Void E0C8D4ED440AA25D(::CriWare::CriWareErrorHandler_A58A6DA0FD8844FB* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::CriWare::CriWareErrorHandler_A58A6DA0FD8844FB*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_E0C8D4ED440AA25D_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void E11980CC4282DF6C(::System::String* B26D616E593CD926)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_E11980CC4282DF6C_OFFSET))(this, B26D616E593CD926);
		}

		static ::System::Void B71F6F385CB3E478()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_B71F6F385CB3E478_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER__CTOR_OFFSET))(this);
		}
	};
}
