#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/E71903803EDE1191.h"
#include "unitysdk/System/Object.h"

class A615DF401F80FABD;
namespace MiHoYo::SDK { class AccountModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A615DF401F80FABD_FDFB42BF22C45DBC_AE6BEC6A6BB0BE90_OFFSET UNITYSDK_OFFSET(0x399F980)
#define A615DF401F80FABD_FDFB42BF22C45DBC_E7F64A568FDA317A_OFFSET UNITYSDK_OFFSET(0x399F9B0)
#define A615DF401F80FABD_FDFB42BF22C45DBC_E8D4564DE665220E_OFFSET UNITYSDK_OFFSET(0x399F9D0)
#define A615DF401F80FABD_FDFB42BF22C45DBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A615DF401F80FABD_FDFB42BF22C45DBC_TypeDefinitionIndex = 12541;

class A615DF401F80FABD_FDFB42BF22C45DBC : public ::System::Object
{
public:
	::A615DF401F80FABD* A544919C800E2923; // 0x10
	::BED79290917896D4::E71903803EDE1191 A288CB28FC2A6DA3; // 0x18
	::System::Byte _padding0[0x4];
	::MiHoYo::SDK::AccountModel* AE11B914AE12D7B2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A615DF401F80FABD_FDFB42BF22C45DBC__CTOR_OFFSET))(this);
	}

	::System::Void AE6BEC6A6BB0BE90(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_FDFB42BF22C45DBC_AE6BEC6A6BB0BE90_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void E7F64A568FDA317A(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_FDFB42BF22C45DBC_E7F64A568FDA317A_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void E8D4564DE665220E(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_FDFB42BF22C45DBC_E8D4564DE665220E_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}
};
