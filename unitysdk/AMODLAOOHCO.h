#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AMODLAOOHCO;
class BMNBIGCFJJB;
class CONGPILMBPA;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define AMODLAOOHCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB30A0)
#define AMODLAOOHCO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCB30E0)
#define AMODLAOOHCO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCB3040)

inline static constexpr unsigned int AMODLAOOHCO_TypeDefinitionIndex = 21065;

	class AMODLAOOHCO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GFNAPNFFGPJ; // 0x18
		::Il2CppArray<::BMNBIGCFJJB*>* AKFIIKNDBOH; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::CONGPILMBPA* GLOLLKPPFNE; // 0x30
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
