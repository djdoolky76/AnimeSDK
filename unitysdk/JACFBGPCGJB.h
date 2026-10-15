#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/RPG/GameCore/ChenLingSoldierScale.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALMFLCJCHKP;
class JACFBGPCGJB;
namespace System { class String; }

#define JACFBGPCGJB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16540B90)
#define JACFBGPCGJB_CLEAR_OFFSET UNITYSDK_OFFSET(0x16540AD0)
#define JACFBGPCGJB_CTOR_OFFSET UNITYSDK_OFFSET(0x16540CA0)
#define JACFBGPCGJB_GET_ATK_OFFSET UNITYSDK_OFFSET(0x16541070)
#define JACFBGPCGJB_GET_ATTACKCD_OFFSET UNITYSDK_OFFSET(0x16541030)
#define JACFBGPCGJB_GET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0x16541010)
#define JACFBGPCGJB_GET_BATTLESCALE_OFFSET UNITYSDK_OFFSET(0x165411A0)
#define JACFBGPCGJB_GET_CRTCHANCE_OFFSET UNITYSDK_OFFSET(0x165410B0)
#define JACFBGPCGJB_GET_CRTDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x165410D0)
#define JACFBGPCGJB_GET_HP_OFFSET UNITYSDK_OFFSET(0x16541050)
#define JACFBGPCGJB_GET_ISPROMOTED_OFFSET UNITYSDK_OFFSET(0x16541110)
#define JACFBGPCGJB_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x165410F0)
#define JACFBGPCGJB_GET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0x16541090)
#define JACFBGPCGJB_GET_OVERRIDEMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x16541130)
#define JACFBGPCGJB_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x16541170)
#define JACFBGPCGJB_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x16541150)
#define JACFBGPCGJB_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x16540FF0)
#define JACFBGPCGJB_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x16540FB0)
#define JACFBGPCGJB_GET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x16540FD0)
#define JACFBGPCGJB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x16540F90)
#define JACFBGPCGJB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16540CB0)
#define JACFBGPCGJB_OMJHAMJFIDA_OFFSET UNITYSDK_OFFSET(0x16540F40)
#define JACFBGPCGJB_SET_ATK_OFFSET UNITYSDK_OFFSET(0x16541080)
#define JACFBGPCGJB_SET_ATTACKCD_OFFSET UNITYSDK_OFFSET(0x16541040)
#define JACFBGPCGJB_SET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0x16541020)
#define JACFBGPCGJB_SET_BATTLESCALE_OFFSET UNITYSDK_OFFSET(0x165411C0)
#define JACFBGPCGJB_SET_CRTCHANCE_OFFSET UNITYSDK_OFFSET(0x165410C0)
#define JACFBGPCGJB_SET_CRTDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x165410E0)
#define JACFBGPCGJB_SET_HP_OFFSET UNITYSDK_OFFSET(0x16541060)
#define JACFBGPCGJB_SET_ISPROMOTED_OFFSET UNITYSDK_OFFSET(0x16541120)
#define JACFBGPCGJB_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x16541100)
#define JACFBGPCGJB_SET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0x165410A0)
#define JACFBGPCGJB_SET_OVERRIDEMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x16541140)
#define JACFBGPCGJB_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x16541190)
#define JACFBGPCGJB_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x16541160)
#define JACFBGPCGJB_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x16541000)
#define JACFBGPCGJB_SET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x16540FC0)
#define JACFBGPCGJB_SET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x16540FE0)
#define JACFBGPCGJB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x16540FA0)

inline static constexpr unsigned int JACFBGPCGJB_TypeDefinitionIndex = 61438;

	class JACFBGPCGJB : public ::System::Object
	{
	public:
		::System::String* _OverrideMaterialPath_k__BackingField; // 0x10
		::System::String* _ModelPath_k__BackingField; // 0x18
		::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x20
		::System::Int32 _UniqueID_k__BackingField; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint _Atk_k__BackingField; // 0x38
		::RPG::GameCore::FixPoint _CrtDamageRatio_k__BackingField; // 0x40
		::System::UInt32 _SoldierID_k__BackingField; // 0x48
		::UnityEngine::Vector3 _BattleScale_k__BackingField; // 0x4C
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x58
		::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType _TeamType_k__BackingField; // 0x64
		::RPG::GameCore::FixPoint _AttackRange_k__BackingField; // 0x68
		::RPG::GameCore::FixPoint _HP_k__BackingField; // 0x70
		::System::Boolean _IsPromoted_k__BackingField; // 0x78
		::System::Byte _padding1[0x3];
		::RPG::GameCore::ChenLingSoldierScale _Scale_k__BackingField; // 0x7C
		::RPG::GameCore::FixPoint _AttackCD_k__BackingField; // 0x80
		::RPG::GameCore::FixPoint _CrtChance_k__BackingField; // 0x88
		::RPG::GameCore::FixPoint _MoveSpeed_k__BackingField; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_CLEAR_OFFSET))(this);
		}

		static ::JACFBGPCGJB* BPLPBPMEODA(::ALMFLCJCHKP* a1)
		{
			return ((::JACFBGPCGJB*(*)(::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + JACFBGPCGJB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void KPJGDHLENIP(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + JACFBGPCGJB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void OMJHAMJFIDA(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JACFBGPCGJB_OMJHAMJFIDA_OFFSET))(this, a1);
		}

		::System::Int32 get_UniqueID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_UNIQUEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SoldierID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_SOLDIERID_OFFSET))(this);
		}

		::System::Void set_SoldierID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_SOLDIERID_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType get_TeamType()
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_TEAMTYPE_OFFSET))(this);
		}

		::System::Void set_TeamType(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_TEAMTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingSoldierScale get_Scale()
		{
			return ((::RPG::GameCore::ChenLingSoldierScale(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::RPG::GameCore::ChenLingSoldierScale a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingSoldierScale))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_SCALE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_AttackRange()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_ATTACKRANGE_OFFSET))(this);
		}

		::System::Void set_AttackRange(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_ATTACKRANGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_AttackCD()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_ATTACKCD_OFFSET))(this);
		}

		::System::Void set_AttackCD(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_ATTACKCD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_HP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_HP_OFFSET))(this);
		}

		::System::Void set_HP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_HP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_Atk()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_ATK_OFFSET))(this);
		}

		::System::Void set_Atk(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_ATK_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MoveSpeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_MOVESPEED_OFFSET))(this);
		}

		::System::Void set_MoveSpeed(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_MOVESPEED_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CrtChance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_CRTCHANCE_OFFSET))(this);
		}

		::System::Void set_CrtChance(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_CRTCHANCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CrtDamageRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_CRTDAMAGERATIO_OFFSET))(this);
		}

		::System::Void set_CrtDamageRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_CRTDAMAGERATIO_OFFSET))(this, a1);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_MODELPATH_OFFSET))(this);
		}

		::System::Void set_ModelPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_MODELPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPromoted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_ISPROMOTED_OFFSET))(this);
		}

		::System::Void set_IsPromoted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_ISPROMOTED_OFFSET))(this, a1);
		}

		::System::String* get_OverrideMaterialPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_OVERRIDEMATERIALPATH_OFFSET))(this);
		}

		::System::Void set_OverrideMaterialPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_OVERRIDEMATERIALPATH_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_ROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_BattleScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBGPCGJB_GET_BATTLESCALE_OFFSET))(this);
		}

		::System::Void set_BattleScale(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JACFBGPCGJB_SET_BATTLESCALE_OFFSET))(this, a1);
		}

	};
