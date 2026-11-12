#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LookAtSolverConfigBase.h"
namespace RPG::Client { class LookAtSolver; }
namespace System { class String; }

#define RPG_CLIENT_AVATARLOOKATSOLVERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xD060F00)
#define RPG_CLIENT_AVATARLOOKATSOLVERCONFIG_GETSOLVER_OFFSET UNITYSDK_OFFSET(0xD0601D0)
#define RPG_CLIENT_AVATARLOOKATSOLVERCONFIG_GETUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xD060190)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarLookAtSolverConfig_TypeDefinitionIndex = 70316;

	class AvatarLookAtSolverConfig : public ::RPG::Client::LookAtSolverConfigBase
	{
	public:
		::System::String* UniqueName; // 0x18
		::RPG::Client::LookAtSolver* Solver; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATSOLVERCONFIG_CTOR_OFFSET))(this);
		}

		::System::String* GetUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATSOLVERCONFIG_GETUNIQUENAME_OFFSET))(this);
		}

		::RPG::Client::LookAtSolver* GetSolver()
		{
			return ((::RPG::Client::LookAtSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATSOLVERCONFIG_GETSOLVER_OFFSET))(this);
		}

	};
}
