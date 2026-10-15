#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHJNCOAIJF;
class GHHJNCOAIJF_KKHGKLOBDFN;
class IHGIENOHBMJ;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD15D950)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__0_OFFSET UNITYSDK_OFFSET(0xD165240)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__1_OFFSET UNITYSDK_OFFSET(0xD165270)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__2_OFFSET UNITYSDK_OFFSET(0xD1652A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass12_0_TypeDefinitionIndex = 64706;

	class GridFightGameRef___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action* onResponce; // 0x10
		::GHHJNCOAIJF* req; // 0x18
		::System::Func_2<::System::String*, ::System::Object*>* getJsonBody; // 0x20
		::GHHJNCOAIJF_KKHGKLOBDFN* sendParams; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Object* __SendGameRefHttpReq_b__0(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __SendGameRefHttpReq_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__1_OFFSET))(this);
		}

		::System::Void __SendGameRefHttpReq_b__2(::IHGIENOHBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__2_OFFSET))(this, a1);
		}

	};
}
