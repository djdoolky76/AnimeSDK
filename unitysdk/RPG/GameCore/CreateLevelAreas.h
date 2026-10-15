#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateLevelAreas; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_CREATELEVELAREAS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B61A0)
#define RPG_GAMECORE_CREATELEVELAREAS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B61B0)
#define RPG_GAMECORE_CREATELEVELAREAS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B6170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateLevelAreas_TypeDefinitionIndex = 20747;

	class CreateLevelAreas : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AssetPath; // 0x18
		::System::Boolean IsLocal; // 0x20
		::System::Boolean IsDefaultArea; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATELEVELAREAS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateLevelAreas* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateLevelAreas*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATELEVELAREAS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateLevelAreas* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateLevelAreas*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATELEVELAREAS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
