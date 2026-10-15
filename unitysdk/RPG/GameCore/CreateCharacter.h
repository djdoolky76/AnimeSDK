#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateCharacter; }
namespace System { class String; }

#define RPG_GAMECORE_CREATECHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E2DB0)
#define RPG_GAMECORE_CREATECHARACTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E2DD0)
#define RPG_GAMECORE_CREATECHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E2D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateCharacter_TypeDefinitionIndex = 20819;

	class CreateCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* AvatarID; // 0x20
		::System::Boolean NotLoadOnInit; // 0x28
		::System::Boolean UsePlayerPos; // 0x29
		::System::Byte _padding0[0x6];
		::System::String* AreaName; // 0x30
		::System::String* AnchorName; // 0x38
		::System::Boolean IsOverrideArtModelOffset; // 0x40
		::System::Byte _padding1[0x3];
		::RPG::MVector3 OverrideArtModelOffset; // 0x44
		::System::String* NPCAppearancePreset; // 0x50
		::Il2CppArray<::System::String*>* OverrideReplaceMaterialKeyList; // 0x58
		::System::String* AtlasFaceSetKey; // 0x60
		::System::Int32 PropSwitchMaterialIndex; // 0x68
		::System::Boolean IsInitPropState; // 0x6C
		::System::Byte _padding2[0x3];
		::RPG::GameCore::PropState InitPropState; // 0x70
		::System::Boolean DisableEmoGraph; // 0x74
		::System::Byte _padding3[0x3];
		::System::Int32 ArtReplaceIndex; // 0x78
		::System::Byte _padding4[0x4];
		::System::String* FloatingTemplateName; // 0x80
		::System::Boolean EnableStandByBreak; // 0x88
		::System::Byte _padding5[0x7];
		::System::String* StillGradeAnimID; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATECHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATECHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATECHARACTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
