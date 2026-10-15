#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class EnableElfEnvironment; }

#define RPG_CLIENT_ENABLEELFENVIRONMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F1E40)
#define RPG_CLIENT_ENABLEELFENVIRONMENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2F1E50)
#define RPG_CLIENT_ENABLEELFENVIRONMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2F1E10)

namespace RPG::Client
{
	inline static constexpr unsigned int EnableElfEnvironment_TypeDefinitionIndex = 10214;

	class EnableElfEnvironment : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENABLEELFENVIRONMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::EnableElfEnvironment* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::EnableElfEnvironment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENABLEELFENVIRONMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::EnableElfEnvironment* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::EnableElfEnvironment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENABLEELFENVIRONMENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
