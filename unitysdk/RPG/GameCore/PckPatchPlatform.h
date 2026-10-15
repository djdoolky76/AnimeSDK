#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PckFileList; }
namespace RPG::GameCore { class PckPatchPlatform; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PCKPATCHPLATFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C6A60)
#define RPG_GAMECORE_PCKPATCHPLATFORM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D8C6A70)
#define RPG_GAMECORE_PCKPATCHPLATFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C6800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PckPatchPlatform_TypeDefinitionIndex = 16392;

	class PckPatchPlatform : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* SfxFiles; // 0x10
		::Il2CppArray<::System::String*>* MusicFiles; // 0x18
		::Il2CppArray<::System::String*>* VoFiles; // 0x20
		::Il2CppArray<::System::String*>* CommonFiles; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PckFileList*>* PackFileMap; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKPATCHPLATFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PckPatchPlatform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PckPatchPlatform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKPATCHPLATFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckPatchPlatform* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckPatchPlatform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKPATCHPLATFORM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
