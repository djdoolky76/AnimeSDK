#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADHIHGCOHME;
class GHHJNCOAIJF;
class GHHJNCOAIJF_KKHGKLOBDFN;
class IHGIENOHBMJ;
namespace RPG::Client { class GridFightGameRef; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { template <typename T> class GridFightGameRefHttpRspBody_1; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD15A2B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__0_OFFSET UNITYSDK_OFFSET(0xD164E50)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__1_OFFSET UNITYSDK_OFFSET(0xD164E80)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__2_OFFSET UNITYSDK_OFFSET(0xD164F40)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__3_OFFSET UNITYSDK_OFFSET(0xD164F80)

namespace RPG::Client
{
	class GridFightGameRef___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::GHHJNCOAIJF* req; // 0x10
		::System::Action* callback; // 0x18
		::GHHJNCOAIJF_KKHGKLOBDFN* sendParams; // 0x20
		::RPG::Client::GridFightGameRef* __4__this; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _SendGridFightGetFavourListGameRefReq_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__0_OFFSET))(this);
		}

		::RPG::Client::GridFightGameRefHttpRspBody_1<::ADHIHGCOHME*>* _SendGridFightGetFavourListGameRefReq_b__1(::IHGIENOHBMJ* a1)
		{
			return ((::RPG::Client::GridFightGameRefHttpRspBody_1<::ADHIHGCOHME*>*(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__1_OFFSET))(this, a1);
		}

		::System::Void _SendGridFightGetFavourListGameRefReq_b__2(::RPG::Client::GridFightGameRefHttpRspBody_1<::ADHIHGCOHME*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefHttpRspBody_1<::ADHIHGCOHME*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__2_OFFSET))(this, a1);
		}

		::System::Void _SendGridFightGetFavourListGameRefReq_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__3_OFFSET))(this);
		}

	};
}
