#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraSettleCommandBase.h"
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_CHIMERASETTLETOEVALUATIONCOMMAND_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8FF20)
#define RPG_CLIENT_CHIMERASETTLETOEVALUATIONCOMMAND__EXECUTEBYPROMISEIMPL_OFFSET UNITYSDK_OFFSET(0x1CE93350)
#define RPG_CLIENT_CHIMERASETTLETOEVALUATIONCOMMAND__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0x1CE932E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleToEvaluationCommand_TypeDefinitionIndex = 64901;

	class ChimeraSettleToEvaluationCommand : public ::RPG::Client::ChimeraSettleCommandBase
	{
	public:
		// static const ::System::String* _EVALUATION_PUZZLE_CUSTOM_STRING; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOEVALUATIONCOMMAND_CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOEVALUATIONCOMMAND__EXECUTEIMPL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ExecuteByPromiseImpl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOEVALUATIONCOMMAND__EXECUTEBYPROMISEIMPL_OFFSET))(this);
		}

	};
}
