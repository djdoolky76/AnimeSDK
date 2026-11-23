#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/B926396B5989E03E.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define E4D030742A4A1CA8_A49E0FA3B917F657_OFFSET UNITYSDK_OFFSET(0x3A619F0)
#define E4D030742A4A1CA8_AA74D90A4B5584B4_OFFSET UNITYSDK_OFFSET(0x3A61EF0)
#define E4D030742A4A1CA8_BA374C3A99ACA9C4_OFFSET UNITYSDK_OFFSET(0x3A61C30)
#define E4D030742A4A1CA8_E3967F119B337577_OFFSET UNITYSDK_OFFSET(0x3A61930)
#define E4D030742A4A1CA8_E64C279F75234074_OFFSET UNITYSDK_OFFSET(0x3A61D40)
#define E4D030742A4A1CA8_E8CBD4AF44F524B6_OFFSET UNITYSDK_OFFSET(0x3A623D0)
#define E4D030742A4A1CA8_F47CB2481CA6CCED_OFFSET UNITYSDK_OFFSET(0x3A620B0)
#define E4D030742A4A1CA8_F69517CBBFE4C0BA_OFFSET UNITYSDK_OFFSET(0x3A62590)
#define E4D030742A4A1CA8_FDDD1105E41B1FFA_OFFSET UNITYSDK_OFFSET(0x3A61B20)
#define E4D030742A4A1CA8__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A62840)
#define E4D030742A4A1CA8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E4D030742A4A1CA8_TypeDefinitionIndex = 13044;

class E4D030742A4A1CA8 : public ::System::Object
{
public:
	static ::E4D030742A4A1CA8** StaticGet_EE999965A1D2099B()
	{
		return (::E4D030742A4A1CA8**)Il2CppClass::FromTypeDefinitionIndex(E4D030742A4A1CA8_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* F24FFB2F0435E7BD; // 0x10

	::System::Void F47CB2481CA6CCED(::System::String* E5ABD378DF0998D3, ::System::String* E0FC22FC7C7790C3, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>*))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_F47CB2481CA6CCED_OFFSET))(this, E5ABD378DF0998D3, E0FC22FC7C7790C3, E04D2BE64FCE9814);
	}

	::System::Void A49E0FA3B917F657(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>*))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_A49E0FA3B917F657_OFFSET))(this, E04D2BE64FCE9814);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8__CTOR_OFFSET))(this);
	}

	::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* E3967F119B337577(::System::Int32 AB46D6A196F8FF64, ::System::String* B083BE7841B347C4, ::MiHoYo::SDK::AccountModel* E0B1DDD91A901A3D)
	{
		return ((::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_E3967F119B337577_OFFSET))(this, AB46D6A196F8FF64, B083BE7841B347C4, E0B1DDD91A901A3D);
	}

	::System::Void FDDD1105E41B1FFA(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_FDDD1105E41B1FFA_OFFSET))(this, E04D2BE64FCE9814);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E4D030742A4A1CA8__CCTOR_OFFSET))();
	}

	::System::Void F69517CBBFE4C0BA(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_F69517CBBFE4C0BA_OFFSET))(this, E04D2BE64FCE9814);
	}

	::System::Void E8CBD4AF44F524B6(::System::String* B083BE7841B347C4, ::BED79290917896D4::B926396B5989E03E A288CB28FC2A6DA3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::BED79290917896D4::B926396B5989E03E))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_E8CBD4AF44F524B6_OFFSET))(this, B083BE7841B347C4, A288CB28FC2A6DA3);
	}

	::System::Void AA74D90A4B5584B4(::System::Action* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_AA74D90A4B5584B4_OFFSET))(this, E04D2BE64FCE9814);
	}

	::System::Void E64C279F75234074(::System::Int32 AB46D6A196F8FF64, ::System::String* B083BE7841B347C4, ::MiHoYo::SDK::AccountModel* E0B1DDD91A901A3D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_E64C279F75234074_OFFSET))(this, AB46D6A196F8FF64, B083BE7841B347C4, E0B1DDD91A901A3D);
	}

	::System::Void BA374C3A99ACA9C4(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_BA374C3A99ACA9C4_OFFSET))(this, E04D2BE64FCE9814);
	}
};
