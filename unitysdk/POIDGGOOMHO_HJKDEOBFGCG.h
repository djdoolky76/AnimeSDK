#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/POIDGGOOMHO_DisplayIntent.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AJPKLDCIKGL;
namespace RPG::GameCore { class GameEntity; }

#define POIDGGOOMHO_HJKDEOBFGCG_CMBOBDEIIAI_OFFSET UNITYSDK_OFFSET(0xC369FC0)
#define POIDGGOOMHO_HJKDEOBFGCG_CTOR_OFFSET UNITYSDK_OFFSET(0xC36A780)
#define POIDGGOOMHO_HJKDEOBFGCG_EGDDAGGPIBA_OFFSET UNITYSDK_OFFSET(0xC36A360)
#define POIDGGOOMHO_HJKDEOBFGCG_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xC36B720)
#define POIDGGOOMHO_HJKDEOBFGCG_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC36B740)
#define POIDGGOOMHO_HJKDEOBFGCG_GET_INTENT_OFFSET UNITYSDK_OFFSET(0xC36B730)
#define POIDGGOOMHO_HJKDEOBFGCG_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xC36B760)
#define POIDGGOOMHO_HJKDEOBFGCG_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xC36B790)
#define POIDGGOOMHO_HJKDEOBFGCG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC369D80)
#define POIDGGOOMHO_HJKDEOBFGCG_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC36B750)
#define POIDGGOOMHO_HJKDEOBFGCG_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xC36B780)
#define POIDGGOOMHO_HJKDEOBFGCG_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xC36B7A0)

inline static constexpr unsigned int POIDGGOOMHO_HJKDEOBFGCG_TypeDefinitionIndex = 80236;

	class POIDGGOOMHO_HJKDEOBFGCG : public ::System::Object
	{
	public:
		::AJPKLDCIKGL* _Instance_k__BackingField; // 0x10
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x18
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x20
		::System::Boolean EPFLDJJINLC; // 0x2C
		::System::Byte _padding0[0x3];
		::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x30
		::POIDGGOOMHO_DisplayIntent _Intent_k__BackingField; // 0x40
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::AJPKLDCIKGL* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::POIDGGOOMHO_DisplayIntent a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::AJPKLDCIKGL*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::POIDGGOOMHO_DisplayIntent))((::PBYTE)hIl2Cpp + POIDGGOOMHO_HJKDEOBFGCG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + POIDGGOOMHO_HJKDEOBFGCG_GET_ENTITY_OFFSET))(this);
		}

		::POIDGGOOMHO_DisplayIntent get_Intent()
		{
			return ((::POIDGGOOMHO_DisplayIntent(*)(::PVOID))((::PBYTE)hIl2Cpp + POIDGGOOMHO_HJKDEOBFGCG_GET_INTENT_OFFSET))(this);
		}

		::AJPKLDCIKGL* get_Instance()
		{
			return ((::AJPKLDCIKGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + POIDGGOOMHO_HJKDEOBFGCG_GET_INSTANCE_OFFSET))(this);
		}

		::System::Void set_Instance(::AJPKLDCIKGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJPKLDCIKGL*))((::PBYTE)hIl2Cpp + POIDGGOOMHO_HJKDEOBFGCG_SET_INSTANCE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + POIDGGOOMHO_HJKDEOBFGCG_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + POIDGGOOMHO_HJKDEOBFGCG_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + POIDGGOOMHO_HJKDEOBFGCG_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + POIDGGOOMHO_HJKDEOBFGCG_SET_ROTATION_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::AJPKLDCIKGL* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::AJPKLDCIKGL*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + POIDGGOOMHO_HJKDEOBFGCG_PAGKOAEOLKA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EGDDAGGPIBA(::AJPKLDCIKGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJPKLDCIKGL*))((::PBYTE)hIl2Cpp + POIDGGOOMHO_HJKDEOBFGCG_EGDDAGGPIBA_OFFSET))(this, a1);
		}

		::System::Boolean CMBOBDEIIAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POIDGGOOMHO_HJKDEOBFGCG_CMBOBDEIIAI_OFFSET))(this);
		}

	};
