#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCGFCHPPIDH;
class GHHJNCOAIJF;
class GHHJNCOAIJF_KKHGKLOBDFN;
class IHGIENOHBMJ;
class IIMDGCBKGLF;
namespace RPG::Client { class GridFightGameRef; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD15C440)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__0_OFFSET UNITYSDK_OFFSET(0xD165880)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__1_OFFSET UNITYSDK_OFFSET(0xD1658F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__2_OFFSET UNITYSDK_OFFSET(0xD165920)

namespace RPG::Client
{
	class GridFightGameRef___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::GHHJNCOAIJF* req; // 0x10
		::RPG::Client::GridFightGameRef* __4__this; // 0x18
		::GHHJNCOAIJF_KKHGKLOBDFN* sendParams; // 0x20
		::System::Action* callback; // 0x28
		::Il2CppArray<::System::String*>* ids; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::IIMDGCBKGLF* _SendGridFightGetGameRefInterectDataReq_b__0(::System::String* a1)
		{
			return ((::IIMDGCBKGLF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _SendGridFightGetGameRefInterectDataReq_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__1_OFFSET))(this);
		}

		::System::Void _SendGridFightGetGameRefInterectDataReq_b__2(::IHGIENOHBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__2_OFFSET))(this, a1);
		}

	};
}
