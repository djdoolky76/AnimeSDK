#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayVideoSequence; }
namespace RPG::GameCore { class VideoSequenceItem; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYVIDEOSEQUENCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D932D10)
#define RPG_GAMECORE_PLAYVIDEOSEQUENCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D932D20)
#define RPG_GAMECORE_PLAYVIDEOSEQUENCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D932CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayVideoSequence_TypeDefinitionIndex = 21923;

	class PlayVideoSequence : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BlockAlias; // 0x18
		::System::String* PrefabAlias; // 0x20
		::System::Boolean GotoNext; // 0x28
		::System::Boolean GotoNextImmediately; // 0x29
		::System::Byte _padding0[0x6];
		::Il2CppArray<::RPG::GameCore::VideoSequenceItem*>* VideoList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVIDEOSEQUENCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayVideoSequence* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVIDEOSEQUENCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayVideoSequence* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVIDEOSEQUENCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
