#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AMODLAOOHCO;
class BMNBIGCFJJB;
class CONGPILMBPA;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define AMODLAOOHCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECAEB40)
#define AMODLAOOHCO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECAEB80)
#define AMODLAOOHCO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECAEAE0)

inline static constexpr unsigned int AMODLAOOHCO_TypeDefinitionIndex = 21403;

	class AMODLAOOHCO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::BMNBIGCFJJB*>* AKFIIKNDBOH; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::CONGPILMBPA* GLOLLKPPFNE; // 0x28
		::System::String* GFNAPNFFGPJ; // 0x30
		::System::Single IEHPFADHJFD; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMODLAOOHCO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AMODLAOOHCO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AMODLAOOHCO*))((::PBYTE)hIl2Cpp + AMODLAOOHCO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AMODLAOOHCO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AMODLAOOHCO*))((::PBYTE)hIl2Cpp + AMODLAOOHCO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
