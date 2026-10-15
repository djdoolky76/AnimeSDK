#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class ECAGMOOFEAI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define ECAGMOOFEAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD63D40)
#define ECAGMOOFEAI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD63D90)
#define ECAGMOOFEAI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD63CD0)

inline static constexpr unsigned int ECAGMOOFEAI_TypeDefinitionIndex = 24126;

	class ECAGMOOFEAI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::String* FMADKPNEFDD; // 0x20
		::System::Single IEHPFADHJFD; // 0x28
		::RPG::MVector3 LJDHGFECMHJ; // 0x2C
		::System::Single MLKAGGJKCGN; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAGMOOFEAI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ECAGMOOFEAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ECAGMOOFEAI*))((::PBYTE)hIl2Cpp + ECAGMOOFEAI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ECAGMOOFEAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ECAGMOOFEAI*))((::PBYTE)hIl2Cpp + ECAGMOOFEAI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
