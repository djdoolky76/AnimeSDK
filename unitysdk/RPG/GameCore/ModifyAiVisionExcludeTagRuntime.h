#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifyAiVisionExcludeTagRuntime; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYAIVISIONEXCLUDETAGRUNTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D863270)
#define RPG_GAMECORE_MODIFYAIVISIONEXCLUDETAGRUNTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D863280)
#define RPG_GAMECORE_MODIFYAIVISIONEXCLUDETAGRUNTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D863230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyAiVisionExcludeTagRuntime_TypeDefinitionIndex = 21746;

	class ModifyAiVisionExcludeTagRuntime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::String* VisionID; // 0x20
		::System::Boolean IsAdd; // 0x28
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::EntityTag>* ModifyTag; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAIVISIONEXCLUDETAGRUNTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyAiVisionExcludeTagRuntime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyAiVisionExcludeTagRuntime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAIVISIONEXCLUDETAGRUNTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyAiVisionExcludeTagRuntime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyAiVisionExcludeTagRuntime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAIVISIONEXCLUDETAGRUNTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
