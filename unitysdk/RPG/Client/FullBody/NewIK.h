#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/NewSolverManager.h"

#define RPG_CLIENT_FULLBODY_NEWIK_CTOR_OFFSET UNITYSDK_OFFSET(0xD08A0A0)
#define RPG_CLIENT_FULLBODY_NEWIK_EFLLCMNJGPC_OFFSET UNITYSDK_OFFSET(0xD089CE0)
#define RPG_CLIENT_FULLBODY_NEWIK_KPKDAIGMCHM_OFFSET UNITYSDK_OFFSET(0xD089F30)
#define RPG_CLIENT_FULLBODY_NEWIK_NHEEOHLLJMB_OFFSET UNITYSDK_OFFSET(0xD089E30)

namespace RPG::Client::FullBody
{
	class NewIK : public ::RPG::Client::FullBody::NewSolverManager
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWIK_CTOR_OFFSET))(this);
		}

		::System::Void EFLLCMNJGPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWIK_EFLLCMNJGPC_OFFSET))(this);
		}

		::System::Void NHEEOHLLJMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWIK_NHEEOHLLJMB_OFFSET))(this);
		}

		::System::Void KPKDAIGMCHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWIK_KPKDAIGMCHM_OFFSET))(this);
		}

	};
}
