#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/NewIK.h"
namespace RPG::Client::FullBody { class IKSolver; }
namespace RPG::Client::FullBody { class IKSolverLimb; }

#define RPG_CLIENT_FULLBODY_NEWLIMBIK_CTOR_OFFSET UNITYSDK_OFFSET(0xD08A280)
#define RPG_CLIENT_FULLBODY_NEWLIMBIK_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0xD068510)
#define RPG_CLIENT_FULLBODY_NEWLIMBIK_GLBOCOILJCN_OFFSET UNITYSDK_OFFSET(0xD08A1A0)
#define RPG_CLIENT_FULLBODY_NEWLIMBIK_HHKCHIOIDOF_OFFSET UNITYSDK_OFFSET(0xD08A0C0)
#define RPG_CLIENT_FULLBODY_NEWLIMBIK_KLBPCOKCBKF_OFFSET UNITYSDK_OFFSET(0xD08A130)
#define RPG_CLIENT_FULLBODY_NEWLIMBIK_LNAHCNBGGIN_OFFSET UNITYSDK_OFFSET(0xD08A210)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int NewLimbIK_TypeDefinitionIndex = 74273;

	class NewLimbIK : public ::RPG::Client::FullBody::NewIK
	{
	public:
		::RPG::Client::FullBody::IKSolverLimb* solver; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWLIMBIK_CTOR_OFFSET))(this);
		}

		::System::Void HHKCHIOIDOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWLIMBIK_HHKCHIOIDOF_OFFSET))(this);
		}

		::System::Void KLBPCOKCBKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWLIMBIK_KLBPCOKCBKF_OFFSET))(this);
		}

		::System::Void GLBOCOILJCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWLIMBIK_GLBOCOILJCN_OFFSET))(this);
		}

		::System::Void LNAHCNBGGIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWLIMBIK_LNAHCNBGGIN_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKSolver* GetIKSolver()
		{
			return ((::RPG::Client::FullBody::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWLIMBIK_GETIKSOLVER_OFFSET))(this);
		}

	};
}
