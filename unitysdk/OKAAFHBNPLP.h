#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OKAAFHBNPLP;
namespace RPG::GameCore { class TargetEvaluator; }

#define OKAAFHBNPLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E492BE0)
#define OKAAFHBNPLP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E492C10)
#define OKAAFHBNPLP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E492B90)

inline static constexpr unsigned int OKAAFHBNPLP_TypeDefinitionIndex = 22410;

	class OKAAFHBNPLP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKAAFHBNPLP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OKAAFHBNPLP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OKAAFHBNPLP*))((::PBYTE)hIl2Cpp + OKAAFHBNPLP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OKAAFHBNPLP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OKAAFHBNPLP*))((::PBYTE)hIl2Cpp + OKAAFHBNPLP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
