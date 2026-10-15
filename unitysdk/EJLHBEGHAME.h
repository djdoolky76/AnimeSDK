#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EJLHBEGHAME;
class FCOEMCEDLNL;
namespace RPG::GameCore { class HitBoxConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define EJLHBEGHAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD910D0)
#define EJLHBEGHAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD910E0)
#define EJLHBEGHAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD910A0)

inline static constexpr unsigned int EJLHBEGHAME_TypeDefinitionIndex = 22854;

	class EJLHBEGHAME : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::HitBoxConfig* JHAPBIPNMOA; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Boolean NMMJBGFDNAI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLHBEGHAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EJLHBEGHAME* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJLHBEGHAME*))((::PBYTE)hIl2Cpp + EJLHBEGHAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EJLHBEGHAME* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJLHBEGHAME*))((::PBYTE)hIl2Cpp + EJLHBEGHAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
