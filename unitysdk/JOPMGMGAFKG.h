#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JOPMGMGAFKG;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define JOPMGMGAFKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D02AA10)
#define JOPMGMGAFKG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D02AAA0)
#define JOPMGMGAFKG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D02A960)

inline static constexpr unsigned int JOPMGMGAFKG_TypeDefinitionIndex = 24087;

	class JOPMGMGAFKG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::DynamicFloat* FMHMAHCNDGB; // 0x20
		::System::String* PODFJDMHFMK; // 0x28
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
