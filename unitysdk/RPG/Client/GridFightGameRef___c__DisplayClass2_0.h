#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHJNCOAIJF;
class GHHJNCOAIJF_KKHGKLOBDFN;
class IHGIENOHBMJ;
class LPKIJFEEOEA;
namespace RPG::Client { class GridFightGameRef; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD15B210)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS2_0__SENDGRIDFIGHTGAMEREFLIKEREQ_B__0_OFFSET UNITYSDK_OFFSET(0xD165480)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS2_0__SENDGRIDFIGHTGAMEREFLIKEREQ_B__1_OFFSET UNITYSDK_OFFSET(0xD165500)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS2_0__SENDGRIDFIGHTGAMEREFLIKEREQ_B__2_OFFSET UNITYSDK_OFFSET(0xD165530)

namespace RPG::Client
{
	class GridFightGameRef___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::GHHJNCOAIJF_KKHGKLOBDFN* sendParams; // 0x10
		::System::Action* callback; // 0x18
		::GHHJNCOAIJF* req; // 0x20
		::System::String* id; // 0x28
		::RPG::Client::GridFightGameRef* __4__this; // 0x30
		::System::Boolean isLike; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::LPKIJFEEOEA* _SendGridFightGameRefLikeReq_b__0(::System::String* a1)
		{
			return ((::LPKIJFEEOEA*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS2_0__SENDGRIDFIGHTGAMEREFLIKEREQ_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _SendGridFightGameRefLikeReq_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS2_0__SENDGRIDFIGHTGAMEREFLIKEREQ_B__1_OFFSET))(this);
		}

		::System::Void _SendGridFightGameRefLikeReq_b__2(::IHGIENOHBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS2_0__SENDGRIDFIGHTGAMEREFLIKEREQ_B__2_OFFSET))(this, a1);
		}

	};
}
