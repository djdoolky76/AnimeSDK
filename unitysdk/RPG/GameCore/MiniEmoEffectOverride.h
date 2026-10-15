#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiniEmoEffectNodeVisible; }
namespace RPG::GameCore { class MiniEmoEffectOverride; }
namespace System { class String; }

#define RPG_GAMECORE_MINIEMOEFFECTOVERRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D852880)
#define RPG_GAMECORE_MINIEMOEFFECTOVERRIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D852220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniEmoEffectOverride_TypeDefinitionIndex = 21862;

	class MiniEmoEffectOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Override_OffsetPosition; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::MVector3 OffsetPosition; // 0x14
		::System::Boolean Override_OffsetRotation; // 0x20
		::System::Byte _padding1[0x3];
		::RPG::MVector3 OffsetRotation; // 0x24
		::System::Boolean Override_AttachTarget; // 0x30
		::System::Byte _padding2[0x7];
		::System::String* AttachPoint; // 0x38
		::System::Boolean Override_NodeVisible; // 0x40
		::System::Byte _padding3[0x7];
		::Il2CppArray<::RPG::GameCore::MiniEmoEffectNodeVisible*>* NodeVisible; // 0x48
		::System::Boolean Override_Speed; // 0x50
		::System::Byte _padding4[0x3];
		::System::Single Speed; // 0x54
		::System::Boolean Override_Scale; // 0x58
		::System::Byte _padding5[0x3];
		::RPG::MVector3 Scale; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIEMOEFFECTOVERRIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiniEmoEffectOverride* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiniEmoEffectOverride*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIEMOEFFECTOVERRIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
