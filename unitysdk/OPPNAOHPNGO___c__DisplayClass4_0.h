#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLCOAJDPMJN;
class HMFFHLKHOMJ;
class OPPNAOHPNGO;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define OPPNAOHPNGO___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBFAF030)
#define OPPNAOHPNGO___C__DISPLAYCLASS4_0__SENDTEAMTOWERSFINISHPVESTAGECSREQ_B__0_OFFSET UNITYSDK_OFFSET(0xBFAF1D0)

inline static constexpr unsigned int OPPNAOHPNGO___c__DisplayClass4_0_TypeDefinitionIndex = 79047;

	class OPPNAOHPNGO___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::HMFFHLKHOMJ* resultData; // 0x10
		::OPPNAOHPNGO* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPNAOHPNGO___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::HMFFHLKHOMJ*>* _SendTeamTowersFinishPveStageCsReq_b__0(::CLCOAJDPMJN* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::HMFFHLKHOMJ*>*(*)(::PVOID, ::CLCOAJDPMJN*))((::PBYTE)hIl2Cpp + OPPNAOHPNGO___C__DISPLAYCLASS4_0__SENDTEAMTOWERSFINISHPVESTAGECSREQ_B__0_OFFSET))(this, a1);
		}

	};
