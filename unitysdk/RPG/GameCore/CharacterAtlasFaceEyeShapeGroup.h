#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterAtlasFaceEyeShapeGroup; }

#define RPG_GAMECORE_CHARACTERATLASFACEEYESHAPEGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D53BA80)
#define RPG_GAMECORE_CHARACTERATLASFACEEYESHAPEGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D53B9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAtlasFaceEyeShapeGroup_TypeDefinitionIndex = 17454;

	class CharacterAtlasFaceEyeShapeGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::Int32>* IndexList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACEEYESHAPEGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterAtlasFaceEyeShapeGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterAtlasFaceEyeShapeGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACEEYESHAPEGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
