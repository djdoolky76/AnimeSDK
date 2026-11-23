#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A615DF401F80FABD;
namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A615DF401F80FABD_ABA63CD965063A2F_ADA2D969DF33932E_OFFSET UNITYSDK_OFFSET(0x39B69A0)
#define A615DF401F80FABD_ABA63CD965063A2F_B6447D38F87B0584_OFFSET UNITYSDK_OFFSET(0x39B6C20)
#define A615DF401F80FABD_ABA63CD965063A2F_B7D64AB4D2F2310E_OFFSET UNITYSDK_OFFSET(0x39B6A10)
#define A615DF401F80FABD_ABA63CD965063A2F_E980096D096C9518_OFFSET UNITYSDK_OFFSET(0x39B69C0)
#define A615DF401F80FABD_ABA63CD965063A2F_F01CCFF77CDE9F8C_OFFSET UNITYSDK_OFFSET(0x39B6BD0)
#define A615DF401F80FABD_ABA63CD965063A2F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A615DF401F80FABD_ABA63CD965063A2F_TypeDefinitionIndex = 12547;

class A615DF401F80FABD_ABA63CD965063A2F : public ::System::Object
{
public:
	::A615DF401F80FABD* A544919C800E2923; // 0x10
	::System::Action* BF3B584778569F37; // 0x18
	::System::Action_1<::System::String*>* E181C29DAADF6D18; // 0x20
	::MiHoYo::SDK::AccountModel* AE11B914AE12D7B2; // 0x28
	::System::Boolean B9FF204A96C1AAFE; // 0x30
	::System::Boolean E877B04A6574B72C; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A615DF401F80FABD_ABA63CD965063A2F__CTOR_OFFSET))(this);
	}

	::System::Void ADA2D969DF33932E(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_ABA63CD965063A2F_ADA2D969DF33932E_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void E980096D096C9518(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_ABA63CD965063A2F_E980096D096C9518_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void B7D64AB4D2F2310E(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_ABA63CD965063A2F_B7D64AB4D2F2310E_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void F01CCFF77CDE9F8C(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_ABA63CD965063A2F_F01CCFF77CDE9F8C_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void B6447D38F87B0584(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_ABA63CD965063A2F_B6447D38F87B0584_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}
};
