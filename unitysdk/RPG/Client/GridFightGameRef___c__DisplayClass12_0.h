#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHJNCOAIJF;
class GHHJNCOAIJF_KKHGKLOBDFN;
class IHGIENOHBMJ;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD155290)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__0_OFFSET UNITYSDK_OFFSET(0xD15D230)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__1_OFFSET UNITYSDK_OFFSET(0xD15D260)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__2_OFFSET UNITYSDK_OFFSET(0xD15D290)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass12_0_TypeDefinitionIndex = 64706;

	class GridFightGameRef___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::GHHJNCOAIJF_KKHGKLOBDFN* sendParams; // 0x10
		::GHHJNCOAIJF* req; // 0x18
		::System::Func_2<::System::String*, ::System::Object*>* getJsonBody; // 0x20
		::System::Action_1<::IHGIENOHBMJ*>* onResponce; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Object* __SendGameRefHttpReq_b__0(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>* __SendGameRefHttpReq_b__1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__1_OFFSET))(this);
		}

		::System::Void __SendGameRefHttpReq_b__2(::IHGIENOHBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__2_OFFSET))(this, a1);
		}

	};
}
