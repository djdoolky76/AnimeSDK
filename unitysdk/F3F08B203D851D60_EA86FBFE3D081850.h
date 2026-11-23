#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F3F08B203D851D60;
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F3F08B203D851D60_EA86FBFE3D081850_A6B3230CCFCF1D54_OFFSET UNITYSDK_OFFSET(0x3985440)
#define F3F08B203D851D60_EA86FBFE3D081850_E3ACCBDCFB9CD61D_OFFSET UNITYSDK_OFFSET(0x3985500)
#define F3F08B203D851D60_EA86FBFE3D081850__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3F08B203D851D60_EA86FBFE3D081850_TypeDefinitionIndex = 12500;

class F3F08B203D851D60_EA86FBFE3D081850 : public ::System::Object
{
public:
	::F3F08B203D851D60* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3F08B203D851D60_EA86FBFE3D081850__CTOR_OFFSET))(this);
	}

	::System::Void A6B3230CCFCF1D54(::System::String* BB83557721B5F386, ::System::Action_1<::System::String*>* EC9C8F501F78C653)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + F3F08B203D851D60_EA86FBFE3D081850_A6B3230CCFCF1D54_OFFSET))(this, BB83557721B5F386, EC9C8F501F78C653);
	}

	::System::Void E3ACCBDCFB9CD61D(::System::String* BB83557721B5F386, ::System::Action_1<::System::String*>* F6C610B0E6430EE2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + F3F08B203D851D60_EA86FBFE3D081850_E3ACCBDCFB9CD61D_OFFSET))(this, BB83557721B5F386, F6C610B0E6430EE2);
	}
};
