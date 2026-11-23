#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MiHoYoBaseSDK.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_MIHOYOSDK_A80228179E37A99D_OFFSET UNITYSDK_OFFSET(0x29363A0)
#define MIHOYO_SDK_MIHOYOSDK_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2935B90)
#define MIHOYO_SDK_MIHOYOSDK_AC9B2FDA79709E31_OFFSET UNITYSDK_OFFSET(0x2935BA0)
#define MIHOYO_SDK_MIHOYOSDK_AD620498D5D7ED5D_OFFSET UNITYSDK_OFFSET(0x2935CB0)
#define MIHOYO_SDK_MIHOYOSDK_B035DAADDB772799_OFFSET UNITYSDK_OFFSET(0x2935BF0)
#define MIHOYO_SDK_MIHOYOSDK_B73BFF252B4B8FD9_OFFSET UNITYSDK_OFFSET(0x2934C40)
#define MIHOYO_SDK_MIHOYOSDK_BCDF48B1C5180B2A_OFFSET UNITYSDK_OFFSET(0x2936900)
#define MIHOYO_SDK_MIHOYOSDK_E49F61A9E38991D4_OFFSET UNITYSDK_OFFSET(0x2935C90)
#define MIHOYO_SDK_MIHOYOSDK_EEA5D6E8F4B2655A_OFFSET UNITYSDK_OFFSET(0x29345B0)
#define MIHOYO_SDK_MIHOYOSDK_F035077C83FB8C0D_OFFSET UNITYSDK_OFFSET(0x2934560)
#define MIHOYO_SDK_MIHOYOSDK_F2BEFADE73FC075B_OFFSET UNITYSDK_OFFSET(0x2936570)
#define MIHOYO_SDK_MIHOYOSDK_F459A1CAE950E680_OFFSET UNITYSDK_OFFSET(0x2934880)
#define MIHOYO_SDK_MIHOYOSDK_F901FC832C4C8780_OFFSET UNITYSDK_OFFSET(0x29369B0)
#define MIHOYO_SDK_MIHOYOSDK_F9729043A0D20589_OFFSET UNITYSDK_OFFSET(0x2936AC0)
#define MIHOYO_SDK_MIHOYOSDK_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2934550)
#define MIHOYO_SDK_MIHOYOSDK_FE660AC4BC457822_OFFSET UNITYSDK_OFFSET(0x29367F0)
#define MIHOYO_SDK_MIHOYOSDK_FEC07C0575F3B92A_OFFSET UNITYSDK_OFFSET(0x29361F0)
#define MIHOYO_SDK_MIHOYOSDK_INVOKE_OFFSET UNITYSDK_OFFSET(0x2935550)
#define MIHOYO_SDK_MIHOYOSDK__CCTOR_OFFSET UNITYSDK_OFFSET(0x29366C0)
#define MIHOYO_SDK_MIHOYOSDK__CTOR_OFFSET UNITYSDK_OFFSET(0x29367A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDK_TypeDefinitionIndex = 15382;

	class MiHoYoSDK : public ::MiHoYo::SDK::MiHoYoBaseSDK
	{
	public:
		static ::System::Type** StaticGet_BE79FD290FD3B719()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_EE6C9E2E778F7908()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_A3317C288CF1330A()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_E061633136C9C27E()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::MiHoYo::SDK::MiHoYoSDK** StaticGet_EAE0569B007CD057()
		{
			return (::MiHoYo::SDK::MiHoYoSDK**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::System::Action_1<::System::String*>** StaticGet_ECB78B0C5F88A5B9()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		::System::Action_1<::System::String*>* FF0FE19F8C996C45; // 0x40

		static ::System::Void B035DAADDB772799(::System::String* B6018BB9F7294B44)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_B035DAADDB772799_OFFSET))(B6018BB9F7294B44);
		}

		::System::Void F2BEFADE73FC075B(::System::Int32 F5EF7E29767E03BF, ::System::Int32 F0961C93719F7B0D, ::System::Int32 BCCC5EF00D9F90C5, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* E04D2BE64FCE9814)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_F2BEFADE73FC075B_OFFSET))(this, F5EF7E29767E03BF, F0961C93719F7B0D, BCCC5EF00D9F90C5, E04D2BE64FCE9814);
		}

		static ::System::Void AD620498D5D7ED5D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_AD620498D5D7ED5D_OFFSET))();
		}

		::System::Void EEA5D6E8F4B2655A(::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::Boolean BC60C6DA58D0FC92)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_EEA5D6E8F4B2655A_OFFSET))(this, E04D2BE64FCE9814, BC60C6DA58D0FC92);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK__CCTOR_OFFSET))();
		}

		::System::Void BCDF48B1C5180B2A(::System::Action_1<::System::String*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_BCDF48B1C5180B2A_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::String* B73BFF252B4B8FD9(::System::String* E2692EDB678DEB5F, ::System::String* F0D3F87128A7C4CA)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_B73BFF252B4B8FD9_OFFSET))(this, E2692EDB678DEB5F, F0D3F87128A7C4CA);
		}

		static ::MiHoYo::SDK::MiHoYoSDK* F459A1CAE950E680()
		{
			return ((::MiHoYo::SDK::MiHoYoSDK*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_F459A1CAE950E680_OFFSET))();
		}

		static ::System::Void FE660AC4BC457822(::System::Action_1<::System::String*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_FE660AC4BC457822_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK__CTOR_OFFSET))(this);
		}

		static ::System::Void F901FC832C4C8780(::System::Action_1<::System::String*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_F901FC832C4C8780_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void E49F61A9E38991D4(::System::String* B6018BB9F7294B44)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_E49F61A9E38991D4_OFFSET))(this, B6018BB9F7294B44);
		}

		static ::System::String* AC9B2FDA79709E31()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_AC9B2FDA79709E31_OFFSET))();
		}

		::System::Void A80228179E37A99D(::System::Int32 F5EF7E29767E03BF, ::System::Int32 F0961C93719F7B0D, ::System::Int32 BCCC5EF00D9F90C5, ::System::Action_2<::System::Int32, ::Il2CppArray<::System::Byte>*>* E04D2BE64FCE9814)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::Il2CppArray<::System::Byte>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_A80228179E37A99D_OFFSET))(this, F5EF7E29767E03BF, F0961C93719F7B0D, BCCC5EF00D9F90C5, E04D2BE64FCE9814);
		}

		::System::Void Invoke(::System::String* E2692EDB678DEB5F, ::System::String* F0D3F87128A7C4CA, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_INVOKE_OFFSET))(this, E2692EDB678DEB5F, F0D3F87128A7C4CA, E04D2BE64FCE9814);
		}

		::System::Void FEC07C0575F3B92A(::System::Int32 FB34480EE13CC791, ::System::String* E7C99297BCFC5085, ::System::String* A4BDCD3E1E03909D, ::System::String* F3851C787B08F75B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_FEC07C0575F3B92A_OFFSET))(this, FB34480EE13CC791, E7C99297BCFC5085, A4BDCD3E1E03909D, F3851C787B08F75B);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void F9729043A0D20589(::System::Action_1<::System::String*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_F9729043A0D20589_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Int64 F035077C83FB8C0D(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C)
		{
			return ((::System::Int64(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_F035077C83FB8C0D_OFFSET))(this, F220A2D27F7C6B6C);
		}
	};
}
