#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResolutionAdaptionConfigMapping; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESOLUTIONADAPTIONCONFIGMAPPING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98D700)
#define RPG_GAMECORE_RESOLUTIONADAPTIONCONFIGMAPPING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98D630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResolutionAdaptionConfigMapping_TypeDefinitionIndex = 17140;

	class ResolutionAdaptionConfigMapping : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Configs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOLUTIONADAPTIONCONFIGMAPPING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResolutionAdaptionConfigMapping* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResolutionAdaptionConfigMapping*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOLUTIONADAPTIONCONFIGMAPPING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
