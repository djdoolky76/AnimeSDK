#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHJNCOAIJF;
class GHHJNCOAIJF_KKHGKLOBDFN;
class IHGIENOHBMJ;
class JHFDPHILOOP;
namespace RPG::Client { class GridFightGameRef; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDB2BFF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS3_0__SENDGRIDFIGHTGAMEREFAPPLYREQ_B__0_OFFSET UNITYSDK_OFFSET(0xDB2C000)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS3_0__SENDGRIDFIGHTGAMEREFAPPLYREQ_B__1_OFFSET UNITYSDK_OFFSET(0xDB2C070)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS3_0__SENDGRIDFIGHTGAMEREFAPPLYREQ_B__2_OFFSET UNITYSDK_OFFSET(0xDB2C0A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass3_0_TypeDefinitionIndex = 66252;

	class GridFightGameRef___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameRef* __4__this; // 0x10
		::Il2CppArray<::System::String*>* ids; // 0x18
		::GHHJNCOAIJF* req; // 0x20
		::GHHJNCOAIJF_KKHGKLOBDFN* sendParams; // 0x28
		::System::Action_1<::System::Boolean>* callback; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::JHFDPHILOOP* _SendGridFightGameRefApplyReq_b__0(::System::String* a1)
		{
			return ((::JHFDPHILOOP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS3_0__SENDGRIDFIGHTGAMEREFAPPLYREQ_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>* _SendGridFightGameRefApplyReq_b__1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS3_0__SENDGRIDFIGHTGAMEREFAPPLYREQ_B__1_OFFSET))(this);
		}

		::System::Void _SendGridFightGameRefApplyReq_b__2(::IHGIENOHBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS3_0__SENDGRIDFIGHTGAMEREFAPPLYREQ_B__2_OFFSET))(this, a1);
		}

	};
}
