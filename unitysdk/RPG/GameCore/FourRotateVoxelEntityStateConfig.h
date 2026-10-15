#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelEntityStateActionConfig; }
namespace RPG::GameCore { class FourRotateVoxelEntityStateConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FOURROTATEVOXELENTITYSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EDAC0)
#define RPG_GAMECORE_FOURROTATEVOXELENTITYSTATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6EDAD0)
#define RPG_GAMECORE_FOURROTATEVOXELENTITYSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EDA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelEntityStateConfig_TypeDefinitionIndex = 16776;

	class FourRotateVoxelEntityStateConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsEntityState; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* BindLevelVarName; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FourRotateVoxelEntityStateActionConfig*>* EntityStateActionConfigs; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELENTITYSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelEntityStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelEntityStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELENTITYSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelEntityStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelEntityStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELENTITYSTATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
