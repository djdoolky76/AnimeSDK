#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimCameraDOFConfig; }

#define RPG_GAMECORE_FIVEDIMCAMERADOFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D686200)
#define RPG_GAMECORE_FIVEDIMCAMERADOFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6852C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCameraDOFConfig_TypeDefinitionIndex = 18619;

	class FiveDimCameraDOFConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean EnableDOF; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single NearFocalRegion; // 0x14
		::System::Single FarFocalRegion; // 0x18
		::System::Single NearTransitionRegion; // 0x1C
		::System::Single FarTransitionRegion; // 0x20
		::System::Single DampDuration; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERADOFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCameraDOFConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCameraDOFConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERADOFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
