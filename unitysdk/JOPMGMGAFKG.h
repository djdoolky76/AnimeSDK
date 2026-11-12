#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JOPMGMGAFKG;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define JOPMGMGAFKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E247B30)
#define JOPMGMGAFKG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E247BC0)
#define JOPMGMGAFKG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E247A80)

inline static constexpr unsigned int JOPMGMGAFKG_TypeDefinitionIndex = 24546;

	class JOPMGMGAFKG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* FMHMAHCNDGB; // 0x18
		::System::String* PODFJDMHFMK; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPMGMGAFKG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JOPMGMGAFKG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JOPMGMGAFKG*))((::PBYTE)hIl2Cpp + JOPMGMGAFKG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JOPMGMGAFKG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JOPMGMGAFKG*))((::PBYTE)hIl2Cpp + JOPMGMGAFKG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
