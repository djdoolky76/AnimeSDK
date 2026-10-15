#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define KPILKHOIGKH_CTOR_OFFSET UNITYSDK_OFFSET(0xB5B9420)
#define KPILKHOIGKH_EIMGHNKOOKC_OFFSET UNITYSDK_OFFSET(0xB5B96A0)
#define KPILKHOIGKH_ENINMFDCANG_OFFSET UNITYSDK_OFFSET(0xB5B9560)
#define KPILKHOIGKH_HCGPKOHODNP_1_OFFSET UNITYSDK_OFFSET(0xB5B9710)
#define KPILKHOIGKH_HCGPKOHODNP_OFFSET UNITYSDK_OFFSET(0xB5B9630)
#define KPILKHOIGKH_LBBLIMMEMCO_OFFSET UNITYSDK_OFFSET(0xB5B95C0)

inline static constexpr unsigned int KPILKHOIGKH_TypeDefinitionIndex = 80256;

	class KPILKHOIGKH : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::Client::ChatMessageInviteData*, ::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>* KOIMPMDAGBO; // 0x10
		::System::Func_2<::RPG::Client::ChatMessageData*, ::System::Boolean>* MGLMHNHKMMK; // 0x18
		::System::Func_1<::System::String*>* POAOHGHIHBL; // 0x20
		::System::Action_1<::RPG::Client::ChatMessageData*>* BIICKOAFFPJ; // 0x28
		::System::Func_2<::RPG::Client::ChatMessageData*, ::System::Boolean>* GDHIBCFIAHF; // 0x30
		::System::Void _ctor(::System::Func_1<::System::String*>* a1, ::System::Func_2<::RPG::Client::ChatMessageData*, ::System::Boolean>* a2, ::System::Action_1<::RPG::Client::ChatMessageData*>* a3, ::System::Func_2<::RPG::Client::ChatMessageData*, ::System::Boolean>* a4, ::System::Func_2<::RPG::Client::ChatMessageInviteData*, ::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*, ::System::Func_2<::RPG::Client::ChatMessageData*, ::System::Boolean>*, ::System::Action_1<::RPG::Client::ChatMessageData*>*, ::System::Func_2<::RPG::Client::ChatMessageData*, ::System::Boolean>*, ::System::Func_2<::RPG::Client::ChatMessageInviteData*, ::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>*))((::PBYTE)hIl2Cpp + KPILKHOIGKH_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* ENINMFDCANG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPILKHOIGKH_ENINMFDCANG_OFFSET))(this);
		}

		::System::Boolean LBBLIMMEMCO(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + KPILKHOIGKH_LBBLIMMEMCO_OFFSET))(this, a1);
		}

		::System::Void HCGPKOHODNP(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + KPILKHOIGKH_HCGPKOHODNP_OFFSET))(this, a1);
		}

		::System::Boolean EIMGHNKOOKC(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + KPILKHOIGKH_EIMGHNKOOKC_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* HCGPKOHODNP_1(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + KPILKHOIGKH_HCGPKOHODNP_1_OFFSET))(this, a1);
		}

	};
