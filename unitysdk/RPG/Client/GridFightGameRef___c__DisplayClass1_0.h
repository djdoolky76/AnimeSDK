#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHJNCOAIJF;
class GHHJNCOAIJF_KKHGKLOBDFN;
class IHGIENOHBMJ;
class PNBHMHOHHGL;
namespace RPG::Client { class GridFightGameRef; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD15AB40)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS1_0__SENDGRIDFIGHTGAMEREFFAVOURREQ_B__0_OFFSET UNITYSDK_OFFSET(0xD1652C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS1_0__SENDGRIDFIGHTGAMEREFFAVOURREQ_B__1_OFFSET UNITYSDK_OFFSET(0xD165340)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS1_0__SENDGRIDFIGHTGAMEREFFAVOURREQ_B__2_OFFSET UNITYSDK_OFFSET(0xD165370)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass1_0_TypeDefinitionIndex = 64707;

	class GridFightGameRef___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::RPG::Client::GridFightGameRef* __4__this; // 0x18
		::GHHJNCOAIJF* req; // 0x20
		::GHHJNCOAIJF_KKHGKLOBDFN* sendParams; // 0x28
		::System::String* id; // 0x30
		::System::Boolean isFavour; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::PNBHMHOHHGL* _SendGridFightGameRefFavourReq_b__0(::System::String* a1)
		{
			return ((::PNBHMHOHHGL*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS1_0__SENDGRIDFIGHTGAMEREFFAVOURREQ_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _SendGridFightGameRefFavourReq_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS1_0__SENDGRIDFIGHTGAMEREFFAVOURREQ_B__1_OFFSET))(this);
		}

		::System::Void _SendGridFightGameRefFavourReq_b__2(::IHGIENOHBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS1_0__SENDGRIDFIGHTGAMEREFFAVOURREQ_B__2_OFFSET))(this, a1);
		}

	};
}
