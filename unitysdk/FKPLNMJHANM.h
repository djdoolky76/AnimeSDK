#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class HHPKNCPMPOJ;
namespace RPG::Client { class MirrormentValleyConfig; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FKPLNMJHANM_AJGHKBPIEKC_OFFSET UNITYSDK_OFFSET(0x1581A4A0)
#define FKPLNMJHANM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1581ABF0)
#define FKPLNMJHANM_CPNEMOBKHEL_OFFSET UNITYSDK_OFFSET(0x1581A7F0)
#define FKPLNMJHANM_CTOR_OFFSET UNITYSDK_OFFSET(0x1581A2A0)
#define FKPLNMJHANM_DHFLECOHKFF_OFFSET UNITYSDK_OFFSET(0x1581A4E0)
#define FKPLNMJHANM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1581A340)
#define FKPLNMJHANM_FAMCENEFPKP_OFFSET UNITYSDK_OFFSET(0x1581A8B0)
#define FKPLNMJHANM_GET_BOARD_OFFSET UNITYSDK_OFFSET(0x1581ABB0)
#define FKPLNMJHANM_GET_DESIGNPATHS_OFFSET UNITYSDK_OFFSET(0x1581ABD0)
#define FKPLNMJHANM_GET_MIRRORVALLEYCONFIG_OFFSET UNITYSDK_OFFSET(0x1581AB90)
#define FKPLNMJHANM_GET_PATHINDEX_OFFSET UNITYSDK_OFFSET(0x1581AB50)
#define FKPLNMJHANM_GET_REACHPOINT_OFFSET UNITYSDK_OFFSET(0x1581AB70)
#define FKPLNMJHANM_HFPFIBDOACC_OFFSET UNITYSDK_OFFSET(0x1581A950)
#define FKPLNMJHANM_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1581A3E0)
#define FKPLNMJHANM_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1581A390)
#define FKPLNMJHANM_SET_BOARD_OFFSET UNITYSDK_OFFSET(0x1581ABC0)
#define FKPLNMJHANM_SET_DESIGNPATHS_OFFSET UNITYSDK_OFFSET(0x1581ABE0)
#define FKPLNMJHANM_SET_MIRRORVALLEYCONFIG_OFFSET UNITYSDK_OFFSET(0x1581ABA0)
#define FKPLNMJHANM_SET_PATHINDEX_OFFSET UNITYSDK_OFFSET(0x1581AB60)
#define FKPLNMJHANM_SET_REACHPOINT_OFFSET UNITYSDK_OFFSET(0x1581AB80)

inline static constexpr unsigned int FKPLNMJHANM_TypeDefinitionIndex = 78718;

	class FKPLNMJHANM : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* _DesignPaths_k__BackingField; // 0x10
		::RPG::Client::Prop::OpticalIllusionPuzzleBoard* _Board_k__BackingField; // 0x18
		::RPG::Client::MirrormentValleyConfig* _MirrorValleyConfig_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::HHPKNCPMPOJ*>* NBKBBNNBDKP; // 0x28
		::System::Int32 _ReachPoint_k__BackingField; // 0x30
		::System::Int32 _PathIndex_k__BackingField; // 0x34
		static ::System::String** StaticGet_IOKLAPPFMNL()
		{
			return (::System::String**)UnitySDK::FromName("", "FKPLNMJHANM")->GetStaticField(0x10D60);
		}

		static ::System::String** StaticGet_OLJCEBKIPFA()
		{
			return (::System::String**)UnitySDK::FromName("", "FKPLNMJHANM")->GetStaticField(0x10D68);
		}

		::System::Void _ctor(::RPG::Client::Prop::OpticalIllusionPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard*))((::PBYTE)hIl2Cpp + FKPLNMJHANM_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKPLNMJHANM_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLNMJHANM_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLNMJHANM_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLNMJHANM_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void AJGHKBPIEKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLNMJHANM_AJGHKBPIEKC_OFFSET))(this);
		}

		::System::Void DHFLECOHKFF(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::System::String* a5, ::UnityEngine::Transform* a6, ::System::Boolean a7, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + FKPLNMJHANM_DHFLECOHKFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void CPNEMOBKHEL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FKPLNMJHANM_CPNEMOBKHEL_OFFSET))(this, a1);
		}

		::System::Void FAMCENEFPKP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FKPLNMJHANM_FAMCENEFPKP_OFFSET))(this, a1);
		}

		::System::Void HFPFIBDOACC(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FKPLNMJHANM_HFPFIBDOACC_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_PathIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLNMJHANM_GET_PATHINDEX_OFFSET))(this);
		}

		::System::Void set_PathIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKPLNMJHANM_SET_PATHINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_ReachPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLNMJHANM_GET_REACHPOINT_OFFSET))(this);
		}

		::System::Void set_ReachPoint(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKPLNMJHANM_SET_REACHPOINT_OFFSET))(this, a1);
		}

		::RPG::Client::MirrormentValleyConfig* get_MirrorValleyConfig()
		{
			return ((::RPG::Client::MirrormentValleyConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLNMJHANM_GET_MIRRORVALLEYCONFIG_OFFSET))(this);
		}

		::System::Void set_MirrorValleyConfig(::RPG::Client::MirrormentValleyConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MirrormentValleyConfig*))((::PBYTE)hIl2Cpp + FKPLNMJHANM_SET_MIRRORVALLEYCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::OpticalIllusionPuzzleBoard* get_Board()
		{
			return ((::RPG::Client::Prop::OpticalIllusionPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLNMJHANM_GET_BOARD_OFFSET))(this);
		}

		::System::Void set_Board(::RPG::Client::Prop::OpticalIllusionPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard*))((::PBYTE)hIl2Cpp + FKPLNMJHANM_SET_BOARD_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_DesignPaths()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLNMJHANM_GET_DESIGNPATHS_OFFSET))(this);
		}

		::System::Void set_DesignPaths(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FKPLNMJHANM_SET_DESIGNPATHS_OFFSET))(this, a1);
		}

	};
