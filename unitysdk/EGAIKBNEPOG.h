#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EGAIKBNEPOG;
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define EGAIKBNEPOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4C710)
#define EGAIKBNEPOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD4C750)
#define EGAIKBNEPOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD4C6B0)

inline static constexpr unsigned int EGAIKBNEPOG_TypeDefinitionIndex = 23121;

	class EGAIKBNEPOG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* DCLGGMAEMAO; // 0x20
		::System::String* CIDCEJCGOGB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAIKBNEPOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EGAIKBNEPOG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EGAIKBNEPOG*))((::PBYTE)hIl2Cpp + EGAIKBNEPOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EGAIKBNEPOG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EGAIKBNEPOG*))((::PBYTE)hIl2Cpp + EGAIKBNEPOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
