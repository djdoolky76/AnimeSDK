#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class NewDeviceInfoModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E2C0F4BBD584E55F_A5185F0BCE2C57F5_OFFSET UNITYSDK_OFFSET(0x3A32CD0)
#define E2C0F4BBD584E55F_A5852A95714D0447_OFFSET UNITYSDK_OFFSET(0x3A33FF0)
#define E2C0F4BBD584E55F_A77A58B90CADC089_OFFSET UNITYSDK_OFFSET(0x3A33D00)
#define E2C0F4BBD584E55F_A8B196E66A7B9BE5_OFFSET UNITYSDK_OFFSET(0x3A343A0)
#define E2C0F4BBD584E55F_B72DB7ADA6E0AF04_OFFSET UNITYSDK_OFFSET(0x181E4F0)
#define E2C0F4BBD584E55F_B791063858692214_OFFSET UNITYSDK_OFFSET(0x3A32C40)
#define E2C0F4BBD584E55F_B8AC95BBDED05EA9_OFFSET UNITYSDK_OFFSET(0x16D1B90)
#define E2C0F4BBD584E55F_BBEB074A520EAC52_OFFSET UNITYSDK_OFFSET(0x3A32FC0)
#define E2C0F4BBD584E55F_BF5C818AA8862A9F_OFFSET UNITYSDK_OFFSET(0x3A34250)
#define E2C0F4BBD584E55F_EBC023433511BB4D_OFFSET UNITYSDK_OFFSET(0x3A332B0)
#define E2C0F4BBD584E55F_EBD66F1D8A246F49_OFFSET UNITYSDK_OFFSET(0x3A341B0)
#define E2C0F4BBD584E55F_EC5171AF28209AB1_OFFSET UNITYSDK_OFFSET(0x184C910)
#define E2C0F4BBD584E55F_EF1C233F123F8EC0_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define E2C0F4BBD584E55F_F0185DB351649ECF_OFFSET UNITYSDK_OFFSET(0x3A33590)
#define E2C0F4BBD584E55F_F2A961DDA69C2F12_OFFSET UNITYSDK_OFFSET(0x3A342F0)
#define E2C0F4BBD584E55F_F4919B8274F96B04_OFFSET UNITYSDK_OFFSET(0x1BF9BA0)
#define E2C0F4BBD584E55F_F68A3009CECF221C_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define E2C0F4BBD584E55F_FAD65882071E7BD7_OFFSET UNITYSDK_OFFSET(0x3A33E60)
#define E2C0F4BBD584E55F__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A343E0)
#define E2C0F4BBD584E55F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E2C0F4BBD584E55F_TypeDefinitionIndex = 12964;

class E2C0F4BBD584E55F : public ::System::Object
{
public:
	static ::E2C0F4BBD584E55F** StaticGet_B0284B1FFFFF7B1F()
	{
		return (::E2C0F4BBD584E55F**)Il2CppClass::FromTypeDefinitionIndex(E2C0F4BBD584E55F_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Action* F4A87AB900EF0399; // 0x10
	::System::Action* E83A4192FD491E14; // 0x18
	::System::Action* E752A49A243D719B; // 0x20
	::System::Action* FAF961D775A191A3; // 0x28
	::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>* B1BCE65A8E42E0A5; // 0x30
	::System::Int32 EA4DD159B993C428; // 0x38
	::System::Byte _padding0[0x4];
	::MiHoYo::SDK::AccountModel* B6E4C90752556F8D; // 0x40

	::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>* EF1C233F123F8EC0()
	{
		return ((::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_EF1C233F123F8EC0_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F__CTOR_OFFSET))(this);
	}

	::System::Void A5852A95714D0447(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_A5852A95714D0447_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void B72DB7ADA6E0AF04(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_B72DB7ADA6E0AF04_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void BBEB074A520EAC52(::System::Int32 ABF943ED5C468F71)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_BBEB074A520EAC52_OFFSET))(this, ABF943ED5C468F71);
	}

	::System::Void BF5C818AA8862A9F(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_BF5C818AA8862A9F_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::MiHoYo::SDK::AccountModel* F68A3009CECF221C()
	{
		return ((::MiHoYo::SDK::AccountModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_F68A3009CECF221C_OFFSET))(this);
	}

	::System::Void EBD66F1D8A246F49(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_EBD66F1D8A246F49_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Boolean F0185DB351649ECF(::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>* B9B26B23B27A46C7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>*))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_F0185DB351649ECF_OFFSET))(this, B9B26B23B27A46C7);
	}

	::System::Void B791063858692214(::MiHoYo::SDK::AccountModel* B44B7249A0CEA238)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_B791063858692214_OFFSET))(this, B44B7249A0CEA238);
	}

	::System::Void F2A961DDA69C2F12(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_F2A961DDA69C2F12_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void A5185F0BCE2C57F5(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_A5185F0BCE2C57F5_OFFSET))(this, A6CAE7339066B0FB, E04D2BE64FCE9814);
	}

	::System::Void EBC023433511BB4D(::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_EBC023433511BB4D_OFFSET))(this, E0BB02EDCCFC0E4E, E04D2BE64FCE9814);
	}

	::System::Void FAD65882071E7BD7(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_FAD65882071E7BD7_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void EC5171AF28209AB1(::MiHoYo::SDK::AccountModel* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_EC5171AF28209AB1_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F__CCTOR_OFFSET))();
	}

	::System::Void A8B196E66A7B9BE5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_A8B196E66A7B9BE5_OFFSET))(this);
	}

	::System::Int32 B8AC95BBDED05EA9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_B8AC95BBDED05EA9_OFFSET))(this);
	}

	::System::Void F4919B8274F96B04(::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>*))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_F4919B8274F96B04_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void A77A58B90CADC089()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_A77A58B90CADC089_OFFSET))(this);
	}
};
