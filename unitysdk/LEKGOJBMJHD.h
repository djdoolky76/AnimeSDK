#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapObjectState.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LLADGGNOJPG;
class NNDAJDLAHNC;
namespace Proto { class SceneEntityInfo; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define LEKGOJBMJHD_ASYNCLOAD_OFFSET UNITYSDK_OFFSET(0xB658B90)
#define LEKGOJBMJHD_BCHCNGLJCON_OFFSET UNITYSDK_OFFSET(0xB658760)
#define LEKGOJBMJHD_CTOR_OFFSET UNITYSDK_OFFSET(0xB658930)
#define LEKGOJBMJHD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB658970)
#define LEKGOJBMJHD_DOEJIIPDGGB_OFFSET UNITYSDK_OFFSET(0xB659900)
#define LEKGOJBMJHD_GET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB658850)
#define LEKGOJBMJHD_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xB6587E0)
#define LEKGOJBMJHD_GET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xB658770)
#define LEKGOJBMJHD_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xB658780)
#define LEKGOJBMJHD_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xB6588C0)
#define LEKGOJBMJHD_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xB6588B0)
#define LEKGOJBMJHD_GET_ISTOBEREMOVED_OFFSET UNITYSDK_OFFSET(0xB6588D0)
#define LEKGOJBMJHD_GET_MAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0xB658900)
#define LEKGOJBMJHD_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xB6587B0)
#define LEKGOJBMJHD_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xB6587F0)
#define LEKGOJBMJHD_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xB658810)
#define LEKGOJBMJHD_GET_SERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xB658790)
#define LEKGOJBMJHD_GET_STATE_OFFSET UNITYSDK_OFFSET(0xB6588F0)
#define LEKGOJBMJHD_HDDFGNLCJLI_OFFSET UNITYSDK_OFFSET(0xB658910)
#define LEKGOJBMJHD_HIKICLCMIOD_OFFSET UNITYSDK_OFFSET(0xB6595D0)
#define LEKGOJBMJHD_HMCIBNLDPOE_OFFSET UNITYSDK_OFFSET(0xB659400)
#define LEKGOJBMJHD_KDGKKJLBOMP_OFFSET UNITYSDK_OFFSET(0xB65A300)
#define LEKGOJBMJHD_LAPLIECDFCM_OFFSET UNITYSDK_OFFSET(0xB659660)
#define LEKGOJBMJHD_LDEJGJGLFLF_OFFSET UNITYSDK_OFFSET(0xB658A90)
#define LEKGOJBMJHD_MOGFCGJODMP_OFFSET UNITYSDK_OFFSET(0xB659380)
#define LEKGOJBMJHD_NLHCGMDBKCB_OFFSET UNITYSDK_OFFSET(0xB65A4C0)
#define LEKGOJBMJHD_NMAHJAPLIMP_OFFSET UNITYSDK_OFFSET(0xB659700)
#define LEKGOJBMJHD_OBNFKEBKLDK_OFFSET UNITYSDK_OFFSET(0xB6592F0)
#define LEKGOJBMJHD_PFOGNOGOFJL_OFFSET UNITYSDK_OFFSET(0xB65A040)
#define LEKGOJBMJHD_POCJCHJHGJC_OFFSET UNITYSDK_OFFSET(0xB658840)
#define LEKGOJBMJHD_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xB6587D0)
#define LEKGOJBMJHD_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xB658800)
#define LEKGOJBMJHD_SET_SCALE_OFFSET UNITYSDK_OFFSET(0xB658830)
#define LEKGOJBMJHD_SET_STATE_OFFSET UNITYSDK_OFFSET(0xB6588E0)
#define LEKGOJBMJHD_SYNCLOAD_OFFSET UNITYSDK_OFFSET(0xB658C20)
#define LEKGOJBMJHD_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB65A240)
#define LEKGOJBMJHD__BEGINFADEOUT_B__52_0_OFFSET UNITYSDK_OFFSET(0xB65A510)

	class LEKGOJBMJHD : public ::System::Object
	{
	public:
		::LLADGGNOJPG* KBPHHANBMAN; // 0x10
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x18
		::UnityEngine::Vector3 _Scale_k__BackingField; // 0x20
		::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x2C
		::System::Boolean PIBHMHOCEDH; // 0x3C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x40
		::RPG::Client::MapObjectState _State_k__BackingField; // 0x4C
		::System::Void _ctor(::LLADGGNOJPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLADGGNOJPG*))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_CTOR_OFFSET))(this, a1);
		}

		::LLADGGNOJPG* BCHCNGLJCON()
		{
			return ((::LLADGGNOJPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_BCHCNGLJCON_OFFSET))(this);
		}

		::System::UInt32 get_GroupInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_GET_GROUPINSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_GET_INSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ServerEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_GET_SERVERENTITYID_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_SET_POSITION_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_GET_ENTITY_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_SET_ROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Scale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_SET_SCALE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* POCJCHJHGJC()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_POCJCHJHGJC_OFFSET))(this);
		}

		::System::UInt32 get_EntityRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_GET_ENTITYRUNTIMEID_OFFSET))(this);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_GET_ISLOADED_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Boolean get_IsToBeRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_GET_ISTOBEREMOVED_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::MapObjectState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapObjectState))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::Client::MapObjectState get_State()
		{
			return ((::RPG::Client::MapObjectState(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_GET_STATE_OFFSET))(this);
		}

		::RPG::Client::MapEntityDef* get_MapEntityDef()
		{
			return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_GET_MAPENTITYDEF_OFFSET))(this);
		}

		::System::UInt32 HDDFGNLCJLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_HDDFGNLCJLI_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* AsyncLoad()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_ASYNCLOAD_OFFSET))(this);
		}

		::System::Void SyncLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_SYNCLOAD_OFFSET))(this);
		}

		::System::Boolean MOGFCGJODMP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_MOGFCGJODMP_OFFSET))(this, a1, a2);
		}

		::System::Void HMCIBNLDPOE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_HMCIBNLDPOE_OFFSET))(this, a1);
		}

		::System::Boolean HIKICLCMIOD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_HIKICLCMIOD_OFFSET))(this);
		}

		::System::Void OBNFKEBKLDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_OBNFKEBKLDK_OFFSET))(this);
		}

		::System::Void LDEJGJGLFLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_LDEJGJGLFLF_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* LAPLIECDFCM(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_LAPLIECDFCM_OFFSET))(this, a1);
		}

		::System::Boolean NMAHJAPLIMP(::Proto::SceneEntityInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_NMAHJAPLIMP_OFFSET))(this, a1);
		}

		::System::String* DOEJIIPDGGB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_DOEJIIPDGGB_OFFSET))(this);
		}

		::System::Void PFOGNOGOFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_PFOGNOGOFJL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_TOSTRING_OFFSET))(this);
		}

		::System::Void KDGKKJLBOMP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_KDGKKJLBOMP_OFFSET))(this, a1);
		}

		::RPG::GameCore::EntityClassifyType NLHCGMDBKCB()
		{
			return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD_NLHCGMDBKCB_OFFSET))(this);
		}

		::System::Void _BeginFadeOut_b__52_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKGOJBMJHD__BEGINFADEOUT_B__52_0_OFFSET))(this);
		}

	};
