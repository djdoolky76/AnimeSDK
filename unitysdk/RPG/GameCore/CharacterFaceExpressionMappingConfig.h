#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterFaceExpressionConfig; }
namespace RPG::GameCore { class CharacterFaceExpressionMappingConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERFACEEXPRESSIONMAPPINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D571460)
#define RPG_GAMECORE_CHARACTERFACEEXPRESSIONMAPPINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D571380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterFaceExpressionMappingConfig_TypeDefinitionIndex = 17451;

	class CharacterFaceExpressionMappingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterFaceExpressionConfig*>* SetConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFACEEXPRESSIONMAPPINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterFaceExpressionMappingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterFaceExpressionMappingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFACEEXPRESSIONMAPPINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
