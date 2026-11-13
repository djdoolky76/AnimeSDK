#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPFBIPPLJAP;
class GHHJNCOAIJF;
class GHHJNCOAIJF_KKHGKLOBDFN;
class IHGIENOHBMJ;
class LJDINJEOLCC;
namespace RPG::Client { class GridFightGameRef; }
namespace RPG::Client { template <typename T> class GridFightGameRefHttpRspBody_1; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD40560)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS7_0__SENDGETGRIDFIGHTGAMEREFSHARECODEREQ_B__0_OFFSET UNITYSDK_OFFSET(0x1CD40570)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS7_0__SENDGETGRIDFIGHTGAMEREFSHARECODEREQ_B__1_OFFSET UNITYSDK_OFFSET(0x1CD405E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS7_0__SENDGETGRIDFIGHTGAMEREFSHARECODEREQ_B__2_OFFSET UNITYSDK_OFFSET(0x1CD40610)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass7_0_TypeDefinitionIndex = 66258;

	class GridFightGameRef___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::String* shareCode; // 0x10
		::GHHJNCOAIJF* req; // 0x18
		::System::Action_1<::RPG::Client::GridFightGameRefHttpRspBody_1<::DPFBIPPLJAP*>*>* callback; // 0x20
		::RPG::Client::GridFightGameRef* __4__this; // 0x28
		::GHHJNCOAIJF_KKHGKLOBDFN* sendParams; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::LJDINJEOLCC* _SendGetGridFightGameRefShareCodeReq_b__0(::System::String* a1)
		{
			return ((::LJDINJEOLCC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS7_0__SENDGETGRIDFIGHTGAMEREFSHARECODEREQ_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>* _SendGetGridFightGameRefShareCodeReq_b__1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS7_0__SENDGETGRIDFIGHTGAMEREFSHARECODEREQ_B__1_OFFSET))(this);
		}

		::System::Void _SendGetGridFightGameRefShareCodeReq_b__2(::IHGIENOHBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS7_0__SENDGETGRIDFIGHTGAMEREFSHARECODEREQ_B__2_OFFSET))(this, a1);
		}

	};
}
