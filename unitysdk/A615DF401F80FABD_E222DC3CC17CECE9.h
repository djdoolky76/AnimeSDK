#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/E71903803EDE1191.h"
#include "unitysdk/System/Object.h"

class A615DF401F80FABD;
namespace MiHoYo::SDK { class AccountModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A615DF401F80FABD_E222DC3CC17CECE9_A29321BD8A132B65_OFFSET UNITYSDK_OFFSET(0x399F9B0)
#define A615DF401F80FABD_E222DC3CC17CECE9_AEEBFAC400DAE0DD_OFFSET UNITYSDK_OFFSET(0x399FF50)
#define A615DF401F80FABD_E222DC3CC17CECE9_E54E17FEE6DB4F37_OFFSET UNITYSDK_OFFSET(0x399FF20)
#define A615DF401F80FABD_E222DC3CC17CECE9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A615DF401F80FABD_E222DC3CC17CECE9_TypeDefinitionIndex = 12543;

class A615DF401F80FABD_E222DC3CC17CECE9 : public ::System::Object
{
public:
	::A615DF401F80FABD* A544919C800E2923; // 0x10
	::BED79290917896D4::E71903803EDE1191 A288CB28FC2A6DA3; // 0x18
	::System::Byte _padding0[0x4];
	::MiHoYo::SDK::AccountModel* AE11B914AE12D7B2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A615DF401F80FABD_E222DC3CC17CECE9__CTOR_OFFSET))(this);
	}

	::System::Void E54E17FEE6DB4F37(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_E222DC3CC17CECE9_E54E17FEE6DB4F37_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void A29321BD8A132B65(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_E222DC3CC17CECE9_A29321BD8A132B65_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void AEEBFAC400DAE0DD(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_E222DC3CC17CECE9_AEEBFAC400DAE0DD_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}
};
