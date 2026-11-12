#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightActivationType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitBaseConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_GRIDFIGHTTRAITBASECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E959CB0)
#define RPG_GAMECORE_GRIDFIGHTTRAITBASECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9596B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitBaseConfigRow_TypeDefinitionIndex = 13791;

	class GridFightTraitBaseConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TraitEffectList; // 0x10
		::System::String* LevelGraphPath; // 0x18
		::System::String* CutinPath; // 0x20
		::System::String* IconPath; // 0x28
		::System::String* TraitSearchKey; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* BaseDescParamList; // 0x38
		::Il2CppArray<::System::UInt32>* BEIDList; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* TraitLayerList; // 0x48
		::System::String* MiniIconPath; // 0x50
		::RPG::Client::TextID TraitBaseSimpleDesc; // 0x58
		::System::UInt32 SeasonID; // 0x68
		::RPG::GameCore::GridFightTraitType TraitType; // 0x6C
		::System::UInt32 ID; // 0x70
		::RPG::GameCore::GridFightActivationType ActivationType; // 0x74
		::System::UInt32 TraitSortPriority; // 0x78
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TraitBaseDesc; // 0x80
		::RPG::Client::TextID TraitName; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBASECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTraitBaseConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBASECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
