#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LegacyNullRegionPerformace; }
namespace System { class String; }

#define RPG_GAMECORE_LEGACYNULLREGIONPERFORMACE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A3920)
#define RPG_GAMECORE_LEGACYNULLREGIONPERFORMACE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A37C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LegacyNullRegionPerformace_TypeDefinitionIndex = 19221;

	class LegacyNullRegionPerformace : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* CPerformanceIDs; // 0x10
		::Il2CppArray<::System::String*>* DSPerformanceIDs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEGACYNULLREGIONPERFORMACE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LegacyNullRegionPerformace* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LegacyNullRegionPerformace*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEGACYNULLREGIONPERFORMACE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
