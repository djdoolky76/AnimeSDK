#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace RPG::GameCore { class LevelBattleAreaInfo; }
namespace System { class String; }

#define PKLOMDCOKOC_AHHOFGJPPHA_OFFSET UNITYSDK_OFFSET(0xC2E5FA0)
#define PKLOMDCOKOC_CJDLJMKBNON_OFFSET UNITYSDK_OFFSET(0xC2E5E60)
#define PKLOMDCOKOC_CLOAGHHEHGA_OFFSET UNITYSDK_OFFSET(0xC2E5F50)
#define PKLOMDCOKOC_CTOR_OFFSET UNITYSDK_OFFSET(0xC2E6310)
#define PKLOMDCOKOC_DKJCABPIMEC_OFFSET UNITYSDK_OFFSET(0xC2E6050)
#define PKLOMDCOKOC_EIMHFOMNDFP_OFFSET UNITYSDK_OFFSET(0xC2E5F00)
#define PKLOMDCOKOC_FEADGFCBPCL_OFFSET UNITYSDK_OFFSET(0xC2E6260)
#define PKLOMDCOKOC_GET_BATTLEAREAINFO_OFFSET UNITYSDK_OFFSET(0xC2E5E40)
#define PKLOMDCOKOC_GET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xC2E5DB0)
#define PKLOMDCOKOC_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xC2E5DD0)
#define PKLOMDCOKOC_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xC2E5DF0)
#define PKLOMDCOKOC_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xC2E5E20)
#define PKLOMDCOKOC_GOBACPCDNIA_OFFSET UNITYSDK_OFFSET(0xC2E62B0)
#define PKLOMDCOKOC_HCHPNIJCPPG_OFFSET UNITYSDK_OFFSET(0xC2E60B0)
#define PKLOMDCOKOC_HIOEANCOELL_OFFSET UNITYSDK_OFFSET(0xC2E6100)
#define PKLOMDCOKOC_HPEOKBFJFDO_OFFSET UNITYSDK_OFFSET(0xC2E5FF0)
#define PKLOMDCOKOC_JAAJKHPAOEA_OFFSET UNITYSDK_OFFSET(0xC2E6150)
#define PKLOMDCOKOC_MAOEFCJELJO_OFFSET UNITYSDK_OFFSET(0xC2E6200)
#define PKLOMDCOKOC_NGDOIGGHAOO_OFFSET UNITYSDK_OFFSET(0xC2E61A0)
#define PKLOMDCOKOC_PGMKBHDOHOI_OFFSET UNITYSDK_OFFSET(0xC2E5EB0)
#define PKLOMDCOKOC_SET_BATTLEAREAINFO_OFFSET UNITYSDK_OFFSET(0xC2E5E50)
#define PKLOMDCOKOC_SET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xC2E5DC0)
#define PKLOMDCOKOC_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xC2E5DE0)
#define PKLOMDCOKOC_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xC2E5E10)
#define PKLOMDCOKOC_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xC2E5E30)

	class PKLOMDCOKOC : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelBattleAreaInfo* _BattleAreaInfo_k__BackingField; // 0x10
		::System::UInt32 _InstanceID_k__BackingField; // 0x18
		::System::UInt32 _GroupInstanceID_k__BackingField; // 0x1C
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x20
		::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x2C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::RPG::GameCore::LevelBattleAreaInfo* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::GameCore::LevelBattleAreaInfo*))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_GroupInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_GET_GROUPINSTANCEID_OFFSET))(this);
		}

		::System::Void set_GroupInstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_SET_GROUPINSTANCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_SET_ROTATION_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelBattleAreaInfo* get_BattleAreaInfo()
		{
			return ((::RPG::GameCore::LevelBattleAreaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_GET_BATTLEAREAINFO_OFFSET))(this);
		}

		::System::Void set_BattleAreaInfo(::RPG::GameCore::LevelBattleAreaInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleAreaInfo*))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_SET_BATTLEAREAINFO_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* CJDLJMKBNON()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_CJDLJMKBNON_OFFSET))(this);
		}

		::System::String* PGMKBHDOHOI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_PGMKBHDOHOI_OFFSET))(this);
		}

		::System::String* EIMHFOMNDFP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_EIMHFOMNDFP_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* CLOAGHHEHGA()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_CLOAGHHEHGA_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* AHHOFGJPPHA()
		{
			return ((::Il2CppArray<::RPG::GameCore::AudioStateConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_AHHOFGJPPHA_OFFSET))(this);
		}

		::System::String* HPEOKBFJFDO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_HPEOKBFJFDO_OFFSET))(this);
		}

		::System::String* DKJCABPIMEC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_DKJCABPIMEC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* HCHPNIJCPPG()
		{
			return ((::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_HCHPNIJCPPG_OFFSET))(this);
		}

		::System::UInt32 HIOEANCOELL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_HIOEANCOELL_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* JAAJKHPAOEA()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_JAAJKHPAOEA_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* NGDOIGGHAOO()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_NGDOIGGHAOO_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* MAOEFCJELJO()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_MAOEFCJELJO_OFFSET))(this);
		}

		::System::UInt32 FEADGFCBPCL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_FEADGFCBPCL_OFFSET))(this);
		}

		::System::Boolean GOBACPCDNIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLOMDCOKOC_GOBACPCDNIA_OFFSET))(this);
		}

	};
