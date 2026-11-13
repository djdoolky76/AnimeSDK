#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingHPChangeFormatType.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/CirticalTrackType.h"
#include "unitysdk/RPG/GameCore/ChenLingDamageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12BD30)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GETHPCHANGEFORMATTYPE_OFFSET UNITYSDK_OFFSET(0x1E12BCD0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_ANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1E12D4F0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x1E12D580)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_DELTAHP_OFFSET UNITYSDK_OFFSET(0x1E12D520)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_HPCHANGEFORMATTYPE_OFFSET UNITYSDK_OFFSET(0x1E12D5A0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_SHOWJUMPTEXT_OFFSET UNITYSDK_OFFSET(0x1E12D560)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x1E12D540)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_ANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1E12D510)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x1E12D590)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_DELTAHP_OFFSET UNITYSDK_OFFSET(0x1E12D530)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_HPCHANGEFORMATTYPE_OFFSET UNITYSDK_OFFSET(0x1E12D5B0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_SHOWJUMPTEXT_OFFSET UNITYSDK_OFFSET(0x1E12D570)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0x1E12D550)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int HPChangeData_TypeDefinitionIndex = 80559;

	class HPChangeData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 _AnchorPosition_k__BackingField; // 0x10
		::System::Int32 _DeltaHP_k__BackingField; // 0x1C
		::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType _HPChangeFormatType_k__BackingField; // 0x20
		::System::Boolean _ShowJumpText_k__BackingField; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single _CurrentHP_k__BackingField; // 0x28
		::System::Int32 _UID_k__BackingField; // 0x2C
		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Single a5, ::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Single, ::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType GetHPChangeFormatType(::RPG::Client::LittleGame::ChenLing::CirticalTrackType a1, ::RPG::GameCore::ChenLingDamageType a2)
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType(*)(::RPG::Client::LittleGame::ChenLing::CirticalTrackType, ::RPG::GameCore::ChenLingDamageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GETHPCHANGEFORMATTYPE_OFFSET))(a1, a2);
		}

		::UnityEngine::Vector3 get_AnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_ANCHORPOSITION_OFFSET))(this);
		}

		::System::Void set_AnchorPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_ANCHORPOSITION_OFFSET))(this, a1);
		}

		::System::Int32 get_DeltaHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_DELTAHP_OFFSET))(this);
		}

		::System::Void set_DeltaHP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_DELTAHP_OFFSET))(this, a1);
		}

		::System::Int32 get_UID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_UID_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowJumpText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_SHOWJUMPTEXT_OFFSET))(this);
		}

		::System::Void set_ShowJumpText(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_SHOWJUMPTEXT_OFFSET))(this, a1);
		}

		::System::Single get_CurrentHP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_CURRENTHP_OFFSET))(this);
		}

		::System::Void set_CurrentHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_CURRENTHP_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType get_HPChangeFormatType()
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_HPCHANGEFORMATTYPE_OFFSET))(this);
		}

		::System::Void set_HPChangeFormatType(::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_HPCHANGEFORMATTYPE_OFFSET))(this, a1);
		}

	};
}
