#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageLodEditorConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAGELODEDITORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE3070)
#define RPG_GAMECORE_STAGELODEDITORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE2F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageLodEditorConfig_TypeDefinitionIndex = 19206;

	class StageLodEditorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SourceNormDistanceLodMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* RuntimeExceptionNormDistanceLodMap; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGELODEDITORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageLodEditorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageLodEditorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGELODEDITORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
