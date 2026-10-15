#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttachNishastagaItemToScene; }
namespace System { class String; }

#define RPG_GAMECORE_ATTACHNISHASTAGAITEMTOSCENE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D4340)
#define RPG_GAMECORE_ATTACHNISHASTAGAITEMTOSCENE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3D4350)
#define RPG_GAMECORE_ATTACHNISHASTAGAITEMTOSCENE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3D4310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachNishastagaItemToScene_TypeDefinitionIndex = 22141;

	class AttachNishastagaItemToScene : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ItemGroupID; // 0x18
		::System::UInt32 ItemPropID; // 0x1C
		::System::UInt32 ItemIndex; // 0x20
		::System::UInt32 TargetGroupID; // 0x24
		::System::UInt32 TargetPropID; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* TargetAttachPointPath; // 0x30
		::System::Boolean Reset; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHNISHASTAGAITEMTOSCENE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttachNishastagaItemToScene* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttachNishastagaItemToScene*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHNISHASTAGAITEMTOSCENE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttachNishastagaItemToScene* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttachNishastagaItemToScene*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHNISHASTAGAITEMTOSCENE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
