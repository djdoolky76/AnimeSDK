#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/NewSolverManager.h"

#define RPG_CLIENT_FULLBODY_NEWIK_CTOR_OFFSET UNITYSDK_OFFSET(0xDA125C0)
#define RPG_CLIENT_FULLBODY_NEWIK_EFLLCMNJGPC_OFFSET UNITYSDK_OFFSET(0xDA12200)
#define RPG_CLIENT_FULLBODY_NEWIK_KPKDAIGMCHM_OFFSET UNITYSDK_OFFSET(0xDA12450)
#define RPG_CLIENT_FULLBODY_NEWIK_NHEEOHLLJMB_OFFSET UNITYSDK_OFFSET(0xDA12350)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int NewIK_TypeDefinitionIndex = 76420;

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
