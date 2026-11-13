#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EGAIKBNEPOG;
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define EGAIKBNEPOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F103F70)
#define EGAIKBNEPOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F103FB0)
#define EGAIKBNEPOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F103F10)

inline static constexpr unsigned int EGAIKBNEPOG_TypeDefinitionIndex = 23550;

	class EGAIKBNEPOG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CIDCEJCGOGB; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* DCLGGMAEMAO; // 0x28
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
