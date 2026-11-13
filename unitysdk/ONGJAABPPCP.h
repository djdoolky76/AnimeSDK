#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HPGLJFPJLMO;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CloseupShotData; }
namespace RPG::Client { class PlayableBindingControl; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define ONGJAABPPCP_AKOIHNHCOIA_OFFSET UNITYSDK_OFFSET(0x17D7E680)
#define ONGJAABPPCP_ALMGCBHDHNK_OFFSET UNITYSDK_OFFSET(0x17D7E6C0)
#define ONGJAABPPCP_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0x17D7D280)
#define ONGJAABPPCP_CTOR_OFFSET UNITYSDK_OFFSET(0x17D798D0)
#define ONGJAABPPCP_DOENJHJGLGA_OFFSET UNITYSDK_OFFSET(0x17D7DBC0)
#define ONGJAABPPCP_EAHPPEBENAO_OFFSET UNITYSDK_OFFSET(0x17D7D090)
#define ONGJAABPPCP_FFLAOKPJGDJ_OFFSET UNITYSDK_OFFSET(0x17D7AFF0)
#define ONGJAABPPCP_FNOFNOADEPB_OFFSET UNITYSDK_OFFSET(0x17D799E0)
#define ONGJAABPPCP_GHNMOODBJEL_OFFSET UNITYSDK_OFFSET(0x17D7C310)
#define ONGJAABPPCP_HAHCGJEMFMN_OFFSET UNITYSDK_OFFSET(0x17D7E6E0)
#define ONGJAABPPCP_HEKFHODGFLP_OFFSET UNITYSDK_OFFSET(0x17D7E5E0)
#define ONGJAABPPCP_HNHKBFLDBJI_OFFSET UNITYSDK_OFFSET(0x17D7D780)
#define ONGJAABPPCP_JAPHPJBKHNB_OFFSET UNITYSDK_OFFSET(0x17D7E6A0)
#define ONGJAABPPCP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x17D7C4E0)
#define ONGJAABPPCP_KNJEDFFCBNN_OFFSET UNITYSDK_OFFSET(0x17D7DC10)
#define ONGJAABPPCP_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x17D7E690)
#define ONGJAABPPCP_LMAEOLOIKMH_OFFSET UNITYSDK_OFFSET(0x17D7E470)
#define ONGJAABPPCP_MANBIHANJEL_OFFSET UNITYSDK_OFFSET(0x17D7DDA0)
#define ONGJAABPPCP_NMACAKEBCHE_OFFSET UNITYSDK_OFFSET(0x17D7E750)
#define ONGJAABPPCP_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x17D79A40)
#define ONGJAABPPCP_OEJBGDFIGJG_OFFSET UNITYSDK_OFFSET(0x17D7D8E0)
#define ONGJAABPPCP_PBBEINJGAOE_OFFSET UNITYSDK_OFFSET(0x17D7C380)

inline static constexpr unsigned int ONGJAABPPCP_TypeDefinitionIndex = 71568;

	class ONGJAABPPCP : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineVirtualCameraBase* EAJFHBDCFFO; // 0x10
		::UnityEngine::Playables::PlayableDirector* FLHIOLOPKPM; // 0x18
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x20
		::RPG::Client::PlayableBindingControl* IKINAOJEOFI; // 0x28
		::UnityEngine::GameObject* AAKLLPLGHBN; // 0x30
		::RPG::Client::CloseupShotData* JJHHGNJHFCB; // 0x38
		::HPGLJFPJLMO* KDMOOAEBPDP; // 0x40
		::UnityEngine::Transform* HHEFKGEMMKA; // 0x48
		::UnityEngine::Object* CFLHDLPMJOD; // 0x50
		::System::Nullable_1<::System::Double> JBELDBONNIK; // 0x58
		::System::Byte _padding0[0x8];
		::System::Boolean EJDEKKEOHBE; // 0x68
		::System::Boolean INJJGMIGFFD; // 0x69
		::System::Byte _padding1[0x2];
		::System::Int32 CCKPDMAHLNJ; // 0x6C
		::System::Nullable_1<::UnityEngine::Vector3> FNOKLIMCJFE; // 0x70
		::System::Byte _padding2[0x8];
		::System::Int32 LBDCGECLEPM; // 0x80
		::System::Nullable_1<::System::Single> NJIOJEBJDEN; // 0x84
		::System::Int32 MJHPCLJCCNK; // 0x8C
		::System::Nullable_1<::UnityEngine::Vector3> KOGCFJCMFLD; // 0x90
		::System::Byte _padding3[0x8];
		::System::Nullable_1<::UnityEngine::Quaternion> JMHPKMCKBJO; // 0xA0
		::System::Void _ctor(::RPG::Client::CloseupShotData* a1, ::RPG::Client::CameraDataAndFlags* a2, ::System::Nullable_1<::UnityEngine::Vector3> a3, ::System::Nullable_1<::UnityEngine::Quaternion> a4, ::System::Nullable_1<::UnityEngine::Vector3> a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CloseupShotData*, ::RPG::Client::CameraDataAndFlags*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + ONGJAABPPCP_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean FNOFNOADEPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJAABPPCP_FNOFNOADEPB_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJAABPPCP_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJAABPPCP_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void CIHFGJDCHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJAABPPCP_CIHFGJDCHIA_OFFSET))(this);
		}

		::System::Boolean FFLAOKPJGDJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJAABPPCP_FFLAOKPJGDJ_OFFSET))(this);
		}

		::System::Void PBBEINJGAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJAABPPCP_PBBEINJGAOE_OFFSET))(this);
		}

		::System::Void HNHKBFLDBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJAABPPCP_HNHKBFLDBJI_OFFSET))(this);
		}

		::System::Void DOENJHJGLGA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONGJAABPPCP_DOENJHJGLGA_OFFSET))(this, a1);
		}

		::System::Void KNJEDFFCBNN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONGJAABPPCP_KNJEDFFCBNN_OFFSET))(this, a1);
		}

		::System::Void MANBIHANJEL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONGJAABPPCP_MANBIHANJEL_OFFSET))(this, a1);
		}

		::System::Void LMAEOLOIKMH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONGJAABPPCP_LMAEOLOIKMH_OFFSET))(this, a1);
		}

		::System::Boolean EAHPPEBENAO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJAABPPCP_EAHPPEBENAO_OFFSET))(this);
		}

		::System::Nullable_1<::System::Double> HEKFHODGFLP()
		{
			return ((::System::Nullable_1<::System::Double>(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJAABPPCP_HEKFHODGFLP_OFFSET))(this);
		}

		::UnityEngine::Transform* OEJBGDFIGJG(::RPG::GameCore::TargetEvaluator* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + ONGJAABPPCP_OEJBGDFIGJG_OFFSET))(this, a1);
		}

		::System::Boolean AKOIHNHCOIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJAABPPCP_AKOIHNHCOIA_OFFSET))(this);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJAABPPCP_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Boolean GHNMOODBJEL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJAABPPCP_GHNMOODBJEL_OFFSET))(this);
		}

		::System::String* JAPHPJBKHNB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJAABPPCP_JAPHPJBKHNB_OFFSET))(this);
		}

		::System::Boolean ALMGCBHDHNK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJAABPPCP_ALMGCBHDHNK_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> HAHCGJEMFMN()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJAABPPCP_HAHCGJEMFMN_OFFSET))(this);
		}

		::RPG::Client::CloseupShotData* NMACAKEBCHE()
		{
			return ((::RPG::Client::CloseupShotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJAABPPCP_NMACAKEBCHE_OFFSET))(this);
		}

	};
