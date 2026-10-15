#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEditorDebugCapsuleDirection.h"
#include "unitysdk/RPG/GameCore/LittleGameEditorDebugDrawShapeType.h"
#include "unitysdk/RPG/MColor.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameEditorDebugDrawConfig; }

#define RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_AEIEODDPDAB_OFFSET UNITYSDK_OFFSET(0x1D7E1360)
#define RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_BJCFGKDLCGE_OFFSET UNITYSDK_OFFSET(0x1D7E1380)
#define RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_BMGGFDHGCEK_OFFSET UNITYSDK_OFFSET(0x1D7E13A0)
#define RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E0F90)
#define RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_FJCBAADGNHO_OFFSET UNITYSDK_OFFSET(0x1D7E13E0)
#define RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_IEPBMIJGLFD_OFFSET UNITYSDK_OFFSET(0x1D7E13C0)
#define RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E0FB0)
#define RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E0F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEditorDebugDrawConfig_TypeDefinitionIndex = 18859;

	class LittleGameEditorDebugDrawConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsDebugDraw; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::LittleGameEditorDebugDrawShapeType Shape; // 0x14
		::RPG::MColor GizmoColor; // 0x18
		::RPG::MVector3 Center; // 0x28
		::RPG::GameCore::LittleGameEditorDebugCapsuleDirection Direction; // 0x34
		::System::Single Radius; // 0x38
		::RPG::MVector3 Size; // 0x3C
		::System::Single Height; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameEditorDebugDrawConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameEditorDebugDrawConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameEditorDebugDrawConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameEditorDebugDrawConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Boolean AEIEODDPDAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_AEIEODDPDAB_OFFSET))(this);
		}

		::System::Boolean BJCFGKDLCGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_BJCFGKDLCGE_OFFSET))(this);
		}

		::System::Boolean BMGGFDHGCEK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_BMGGFDHGCEK_OFFSET))(this);
		}

		::System::Boolean IEPBMIJGLFD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_IEPBMIJGLFD_OFFSET))(this);
		}

		::System::Boolean FJCBAADGNHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_FJCBAADGNHO_OFFSET))(this);
		}

	};
}
