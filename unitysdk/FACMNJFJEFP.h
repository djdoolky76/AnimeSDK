#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FACMNJFJEFP;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define FACMNJFJEFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC4840)
#define FACMNJFJEFP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDC4850)
#define FACMNJFJEFP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDC4810)

inline static constexpr unsigned int FACMNJFJEFP_TypeDefinitionIndex = 22540;

	class FACMNJFJEFP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* NDNEJBFPCHC; // 0x18
		::RPG::GameCore::TargetEvaluator* DPCFJILMMCL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FACMNJFJEFP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FACMNJFJEFP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FACMNJFJEFP*))((::PBYTE)hIl2Cpp + FACMNJFJEFP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FACMNJFJEFP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FACMNJFJEFP*))((::PBYTE)hIl2Cpp + FACMNJFJEFP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
