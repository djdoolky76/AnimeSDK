#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameFireEffectParams; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEFIREEFFECTPARAMS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7B5930)
#define RPG_GAMECORE_LITTLEGAMEFIREEFFECTPARAMS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D7B5830)
#define RPG_GAMECORE_LITTLEGAMEFIREEFFECTPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B5820)
#define RPG_GAMECORE_LITTLEGAMEFIREEFFECTPARAMS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B5430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameFireEffectParams_TypeDefinitionIndex = 18889;

	class LittleGameFireEffectParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean SyncFire; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* EffectPath; // 0x18
		::System::String* EffectName; // 0x20
		::System::String* GlobalUniqueName; // 0x28
		::System::String* AttachPointName; // 0x30
		::System::Boolean PendIfArtNotReady; // 0x38
		::System::Byte _padding1[0x3];
		::RPG::MVector3 PositionOffset; // 0x3C
		::RPG::MVector3 RotationOffset; // 0x48
		static ::RPG::GameCore::LittleGameFireEffectParams** StaticGet__ProtoType()
		{
			return (::RPG::GameCore::LittleGameFireEffectParams**)UnitySDK::FromName("RPG.GameCore", "LittleGameFireEffectParams")->GetStaticField(0x41A00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFIREEFFECTPARAMS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFIREEFFECTPARAMS_CCTOR_OFFSET))();
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameFireEffectParams* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameFireEffectParams*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFIREEFFECTPARAMS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFIREEFFECTPARAMS_CLEAR_OFFSET))(this);
		}

	};
}
