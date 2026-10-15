#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/POIDGGOOMHO_DisplayIntent.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AJPKLDCIKGL;
namespace RPG::GameCore { class GameEntity; }

#define POIDGGOOMHO_HJKDEOBFGCG_CMBOBDEIIAI_OFFSET UNITYSDK_OFFSET(0xC362890)
#define POIDGGOOMHO_HJKDEOBFGCG_CTOR_OFFSET UNITYSDK_OFFSET(0xC363050)
#define POIDGGOOMHO_HJKDEOBFGCG_EGDDAGGPIBA_OFFSET UNITYSDK_OFFSET(0xC362C30)
#define POIDGGOOMHO_HJKDEOBFGCG_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xC363FE0)
#define POIDGGOOMHO_HJKDEOBFGCG_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC364000)
#define POIDGGOOMHO_HJKDEOBFGCG_GET_INTENT_OFFSET UNITYSDK_OFFSET(0xC363FF0)
#define POIDGGOOMHO_HJKDEOBFGCG_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xC364020)
#define POIDGGOOMHO_HJKDEOBFGCG_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xC364050)
#define POIDGGOOMHO_HJKDEOBFGCG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC362650)
#define POIDGGOOMHO_HJKDEOBFGCG_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC364010)
#define POIDGGOOMHO_HJKDEOBFGCG_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xC364040)
#define POIDGGOOMHO_HJKDEOBFGCG_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xC364060)

inline static constexpr unsigned int POIDGGOOMHO_HJKDEOBFGCG_TypeDefinitionIndex = 80235;

	class POIDGGOOMHO_HJKDEOBFGCG : public ::System::Object
	{
	public:
		::AJPKLDCIKGL* _Instance_k__BackingField; // 0x10
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x18
		::POIDGGOOMHO_DisplayIntent _Intent_k__BackingField; // 0x20
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x24
		::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x30
		::System::Boolean EPFLDJJINLC; // 0x40
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
