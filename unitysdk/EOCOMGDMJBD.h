#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/RtDefenceGlobalPropertyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EOCOMGDMJBD;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define EOCOMGDMJBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB2770)
#define EOCOMGDMJBD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDB2780)
#define EOCOMGDMJBD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDB2740)

inline static constexpr unsigned int EOCOMGDMJBD_TypeDefinitionIndex = 24183;

	class EOCOMGDMJBD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x18
		::RPG::GameCore::PropertyModifyFunction FKCKKFALPBK; // 0x20
		::RPG::GameCore::RtDefenceGlobalPropertyType ACHILGIPGKL; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCOMGDMJBD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EOCOMGDMJBD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EOCOMGDMJBD*))((::PBYTE)hIl2Cpp + EOCOMGDMJBD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EOCOMGDMJBD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EOCOMGDMJBD*))((::PBYTE)hIl2Cpp + EOCOMGDMJBD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
