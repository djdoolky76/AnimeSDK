#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CANBAEOKAJD;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define CANBAEOKAJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D29E0)
#define CANBAEOKAJD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9D2A20)
#define CANBAEOKAJD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9D2980)

inline static constexpr unsigned int CANBAEOKAJD_TypeDefinitionIndex = 23170;

	class CANBAEOKAJD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANBAEOKAJD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CANBAEOKAJD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CANBAEOKAJD*))((::PBYTE)hIl2Cpp + CANBAEOKAJD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CANBAEOKAJD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CANBAEOKAJD*))((::PBYTE)hIl2Cpp + CANBAEOKAJD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
