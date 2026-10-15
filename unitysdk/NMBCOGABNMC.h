#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NMBCOGABNMC;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define NMBCOGABNMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2075A0)
#define NMBCOGABNMC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2075B0)
#define NMBCOGABNMC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D207570)

inline static constexpr unsigned int NMBCOGABNMC_TypeDefinitionIndex = 22613;

	class NMBCOGABNMC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* IHOPFAFJPHF; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::String* FHLJGDGMMHK; // 0x28
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBCOGABNMC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NMBCOGABNMC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMBCOGABNMC*))((::PBYTE)hIl2Cpp + NMBCOGABNMC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NMBCOGABNMC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMBCOGABNMC*))((::PBYTE)hIl2Cpp + NMBCOGABNMC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
