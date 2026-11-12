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

#define ONGJAABPPCP_AKOIHNHCOIA_OFFSET UNITYSDK_OFFSET(0xC854AA0)
#define ONGJAABPPCP_ALMGCBHDHNK_OFFSET UNITYSDK_OFFSET(0xC854AE0)
#define ONGJAABPPCP_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0xC8536F0)
#define ONGJAABPPCP_CTOR_OFFSET UNITYSDK_OFFSET(0xC84FD20)
#define ONGJAABPPCP_DOENJHJGLGA_OFFSET UNITYSDK_OFFSET(0xC854030)
#define ONGJAABPPCP_EAHPPEBENAO_OFFSET UNITYSDK_OFFSET(0xC853510)
#define ONGJAABPPCP_FFLAOKPJGDJ_OFFSET UNITYSDK_OFFSET(0xC851460)
#define ONGJAABPPCP_FNOFNOADEPB_OFFSET UNITYSDK_OFFSET(0xC84FE30)
#define ONGJAABPPCP_GHNMOODBJEL_OFFSET UNITYSDK_OFFSET(0xC8527B0)
#define ONGJAABPPCP_HAHCGJEMFMN_OFFSET UNITYSDK_OFFSET(0xC854B00)
#define ONGJAABPPCP_HEKFHODGFLP_OFFSET UNITYSDK_OFFSET(0xC854A00)
#define ONGJAABPPCP_HNHKBFLDBJI_OFFSET UNITYSDK_OFFSET(0xC853BF0)
#define ONGJAABPPCP_JAPHPJBKHNB_OFFSET UNITYSDK_OFFSET(0xC854AC0)
#define ONGJAABPPCP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC852980)
#define ONGJAABPPCP_KNJEDFFCBNN_OFFSET UNITYSDK_OFFSET(0xC854080)
#define ONGJAABPPCP_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0xC854AB0)
#define ONGJAABPPCP_LMAEOLOIKMH_OFFSET UNITYSDK_OFFSET(0xC8548F0)
#define ONGJAABPPCP_MANBIHANJEL_OFFSET UNITYSDK_OFFSET(0xC854220)
#define ONGJAABPPCP_NMACAKEBCHE_OFFSET UNITYSDK_OFFSET(0xC854B70)
#define ONGJAABPPCP_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC84FE80)
#define ONGJAABPPCP_OEJBGDFIGJG_OFFSET UNITYSDK_OFFSET(0xC853D50)
#define ONGJAABPPCP_PBBEINJGAOE_OFFSET UNITYSDK_OFFSET(0xC852820)

inline static constexpr unsigned int ONGJAABPPCP_TypeDefinitionIndex = 71568;

	class ONGJAABPPCP : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* AAKLLPLGHBN; // 0x10
		::HPGLJFPJLMO* KDMOOAEBPDP; // 0x18
		::UnityEngine::Playables::PlayableDirector* FLHIOLOPKPM; // 0x20
		::UnityEngine::Transform* HHEFKGEMMKA; // 0x28
		::Cinemachine::CinemachineVirtualCameraBase* EAJFHBDCFFO; // 0x30
		::RPG::Client::PlayableBindingControl* IKINAOJEOFI; // 0x38
		::RPG::Client::CloseupShotData* JJHHGNJHFCB; // 0x40
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x48
		::UnityEngine::Object* CFLHDLPMJOD; // 0x50
		::System::Nullable_1<::System::Double> JBELDBONNIK; // 0x58
		::System::Byte _padding0[0x8];
		::System::Int32 LBDCGECLEPM; // 0x68
		::System::Nullable_1<::UnityEngine::Vector3> FNOKLIMCJFE; // 0x6C
		::System::Byte _padding1[0x8];
		::System::Nullable_1<::UnityEngine::Vector3> KOGCFJCMFLD; // 0x7C
		::System::Byte _padding2[0x8];
		::System::Int32 MJHPCLJCCNK; // 0x8C
		::System::Int32 CCKPDMAHLNJ; // 0x90
		::System::Boolean INJJGMIGFFD; // 0x94
		::System::Boolean EJDEKKEOHBE; // 0x95
		::System::Byte _padding3[0x2];
		::System::Nullable_1<::UnityEngine::Quaternion> JMHPKMCKBJO; // 0x98
		::System::Byte _padding4[0xC];
		::System::Nullable_1<::System::Single> NJIOJEBJDEN; // 0xAC
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
