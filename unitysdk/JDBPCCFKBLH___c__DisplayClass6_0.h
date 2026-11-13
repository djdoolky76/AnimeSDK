#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJIKNDKJDLG;
class JBPOKKNFOKM;
class JDBPCCFKBLH;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define JDBPCCFKBLH___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16980360)
#define JDBPCCFKBLH___C__DISPLAYCLASS6_0___REQUESTRANKBOARD_B__0_OFFSET UNITYSDK_OFFSET(0x16980F80)

inline static constexpr unsigned int JDBPCCFKBLH___c__DisplayClass6_0_TypeDefinitionIndex = 84872;

	class JDBPCCFKBLH___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::BJIKNDKJDLG*>* promise; // 0x10
		::JDBPCCFKBLH* __4__this; // 0x18
		::RPG::Client::Promises::IPromise* friendListReady; // 0x20
		::System::UInt32 challengeID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBPCCFKBLH___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __RequestRankBoard_b__0(::JBPOKKNFOKM* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::JBPOKKNFOKM*))((::PBYTE)hIl2Cpp + JDBPCCFKBLH___C__DISPLAYCLASS6_0___REQUESTRANKBOARD_B__0_OFFSET))(this, a1);
		}

	};
