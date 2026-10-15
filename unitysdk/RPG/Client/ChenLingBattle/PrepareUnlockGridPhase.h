#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"
class GOCODBMFHPH;
class KCEJNBLDAFE;
namespace RPG::Client::ChenLingBattle { class GridIndex; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0xCA51FB0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xCA51FC0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xCA521C0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_REQUESTUNLOCKGRID_OFFSET UNITYSDK_OFFSET(0xCA52240)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE__ONCHENLINGUNLOCKGRIDSCRSP_OFFSET UNITYSDK_OFFSET(0xCA52460)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int PrepareUnlockGridPhase_TypeDefinitionIndex = 76308;

	class PrepareUnlockGridPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::System::Void _ctor(::GOCODBMFHPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOCODBMFHPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_ONENTER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_ONLEAVE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RequestUnlockGrid(::RPG::Client::ChenLingBattle::GridIndex* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::GridIndex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE_REQUESTUNLOCKGRID_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingUnlockGridScRsp(::KCEJNBLDAFE* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::KCEJNBLDAFE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE__ONCHENLINGUNLOCKGRIDSCRSP_OFFSET))(this, a1);
		}

	};
}
