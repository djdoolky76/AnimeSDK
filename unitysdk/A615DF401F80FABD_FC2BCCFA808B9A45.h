#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A615DF401F80FABD;
namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A615DF401F80FABD_FC2BCCFA808B9A45_B990B1A06B38C6F8_OFFSET UNITYSDK_OFFSET(0x39B7750)
#define A615DF401F80FABD_FC2BCCFA808B9A45_BD1EB04293C36D7C_OFFSET UNITYSDK_OFFSET(0x39B6C20)
#define A615DF401F80FABD_FC2BCCFA808B9A45_F58349DF9D652AFC_OFFSET UNITYSDK_OFFSET(0x39B7930)
#define A615DF401F80FABD_FC2BCCFA808B9A45_F5FAD29D15A9E49F_OFFSET UNITYSDK_OFFSET(0x39B69C0)
#define A615DF401F80FABD_FC2BCCFA808B9A45_FE0298B4E06593F2_OFFSET UNITYSDK_OFFSET(0x39B7770)
#define A615DF401F80FABD_FC2BCCFA808B9A45__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A615DF401F80FABD_FC2BCCFA808B9A45_TypeDefinitionIndex = 12550;

class A615DF401F80FABD_FC2BCCFA808B9A45 : public ::System::Object
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
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A615DF401F80FABD_FC2BCCFA808B9A45__CTOR_OFFSET))(this);
	}

	::System::Void B990B1A06B38C6F8(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_FC2BCCFA808B9A45_B990B1A06B38C6F8_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void F5FAD29D15A9E49F(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_FC2BCCFA808B9A45_F5FAD29D15A9E49F_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void FE0298B4E06593F2(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_FC2BCCFA808B9A45_FE0298B4E06593F2_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void F58349DF9D652AFC(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_FC2BCCFA808B9A45_F58349DF9D652AFC_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void BD1EB04293C36D7C(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_FC2BCCFA808B9A45_BD1EB04293C36D7C_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}
};
