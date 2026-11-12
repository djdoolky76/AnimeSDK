#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NNHBMIGFPHN;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class SkillDamageTypePreshowConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NNHBMIGFPHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E440970)
#define NNHBMIGFPHN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E440A20)
#define NNHBMIGFPHN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E4408A0)

inline static constexpr unsigned int NNHBMIGFPHN_TypeDefinitionIndex = 24140;

	class NNHBMIGFPHN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::SkillDamageTypePreshowConfig*>* CMAHHEIJGBF; // 0x18
		::RPG::GameCore::PredicateConfig* FMAEENMABDJ; // 0x20
		::RPG::GameCore::DynamicFloat* PAKIOJMFKMB; // 0x28
		::RPG::GameCore::DynamicFloat* BOEJGHIJJIF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHBMIGFPHN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NNHBMIGFPHN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NNHBMIGFPHN*))((::PBYTE)hIl2Cpp + NNHBMIGFPHN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NNHBMIGFPHN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NNHBMIGFPHN*))((::PBYTE)hIl2Cpp + NNHBMIGFPHN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
