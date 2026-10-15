#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IHJOIKOLCBG;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define IHJOIKOLCBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE31B0)
#define IHJOIKOLCBG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEE31C0)
#define IHJOIKOLCBG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEE3180)

inline static constexpr unsigned int IHJOIKOLCBG_TypeDefinitionIndex = 22538;

	class IHJOIKOLCBG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MHNPFEMLEBL; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJOIKOLCBG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IHJOIKOLCBG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IHJOIKOLCBG*))((::PBYTE)hIl2Cpp + IHJOIKOLCBG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IHJOIKOLCBG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IHJOIKOLCBG*))((::PBYTE)hIl2Cpp + IHJOIKOLCBG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
