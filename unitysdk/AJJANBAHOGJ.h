#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComicDessertTalkBubbleType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AJJANBAHOGJ;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define AJJANBAHOGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03F320)
#define AJJANBAHOGJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E03F330)
#define AJJANBAHOGJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E03F2F0)

inline static constexpr unsigned int AJJANBAHOGJ_TypeDefinitionIndex = 21883;

	class AJJANBAHOGJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::DynamicString* DLHPOHJGBGI; // 0x20
		::System::String* NMMKDFFHOLL; // 0x28
		::System::Single IEHPFADHJFD; // 0x30
		::RPG::GameCore::ComicDessertTalkBubbleType KFEGFMDEHIA; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANBAHOGJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AJJANBAHOGJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AJJANBAHOGJ*))((::PBYTE)hIl2Cpp + AJJANBAHOGJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AJJANBAHOGJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AJJANBAHOGJ*))((::PBYTE)hIl2Cpp + AJJANBAHOGJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
