#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FFMONJGCKDI;
namespace RPG::GameCore { class DynamicFloat; }

#define FFMONJGCKDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E451C10)
#define FFMONJGCKDI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E451C20)
#define FFMONJGCKDI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E451BE0)

inline static constexpr unsigned int FFMONJGCKDI_TypeDefinitionIndex = 23258;

	class FFMONJGCKDI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* HEMMCOGMEFA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMONJGCKDI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FFMONJGCKDI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFMONJGCKDI*))((::PBYTE)hIl2Cpp + FFMONJGCKDI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FFMONJGCKDI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFMONJGCKDI*))((::PBYTE)hIl2Cpp + FFMONJGCKDI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
