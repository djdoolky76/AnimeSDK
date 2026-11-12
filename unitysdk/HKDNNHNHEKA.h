#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HKDNNHNHEKA;
namespace RPG::GameCore { class DynamicFloat; }

#define HKDNNHNHEKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E099730)
#define HKDNNHNHEKA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E099740)
#define HKDNNHNHEKA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E099700)

inline static constexpr unsigned int HKDNNHNHEKA_TypeDefinitionIndex = 23667;

	class HKDNNHNHEKA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AAGKEBFHLMC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDNNHNHEKA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HKDNNHNHEKA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HKDNNHNHEKA*))((::PBYTE)hIl2Cpp + HKDNNHNHEKA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HKDNNHNHEKA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HKDNNHNHEKA*))((::PBYTE)hIl2Cpp + HKDNNHNHEKA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
