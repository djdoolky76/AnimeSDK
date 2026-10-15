#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SavedValueDimensionConfig; }

#define RPG_GAMECORE_SAVEDVALUEDIMENSIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5AD60)
#define RPG_GAMECORE_SAVEDVALUEDIMENSIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5AB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SavedValueDimensionConfig_TypeDefinitionIndex = 17347;

	class SavedValueDimensionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsExclusiveSaved; // 0x10
		::System::Boolean IsNeedMergeBack; // 0x11
		::System::Byte _padding0[0x2];
		::System::UInt32 RelatedContentID; // 0x14
		::System::UInt32 RelatedContentDimensionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVEDVALUEDIMENSIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SavedValueDimensionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SavedValueDimensionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVEDVALUEDIMENSIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
