#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageCaptureAliasData; }
namespace RPG::GameCore { class StageCaptureAliasLookup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAGECAPTUREALIASLOOKUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADB710)
#define RPG_GAMECORE_STAGECAPTUREALIASLOOKUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADB630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageCaptureAliasLookup_TypeDefinitionIndex = 19167;

	class StageCaptureAliasLookup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::StageCaptureAliasData*>* LookupTable; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECAPTUREALIASLOOKUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageCaptureAliasLookup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageCaptureAliasLookup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECAPTUREALIASLOOKUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
