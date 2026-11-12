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
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDB2B4B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__0_OFFSET UNITYSDK_OFFSET(0xDB2B4C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__1_OFFSET UNITYSDK_OFFSET(0xDB2B4F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__2_OFFSET UNITYSDK_OFFSET(0xDB2B5B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__3_OFFSET UNITYSDK_OFFSET(0xDB2B5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass0_0_TypeDefinitionIndex = 66243;

	class GridFightGameRef___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*>* callback; // 0x10
		::GHHJNCOAIJF* req; // 0x18
		::RPG::Client::GridFightGameRef* __4__this; // 0x20
		::GHHJNCOAIJF_KKHGKLOBDFN* sendParams; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>* _SendGridFightGetFavourListGameRefReq_b__0()
		{
			return ((::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__0_OFFSET))(this);
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
