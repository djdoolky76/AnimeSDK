#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPAGJNNOMM_VCameraType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CJOJDEPDCBK;
class LGAJFEPPGLD;
class LHBGGEHHLJC;
namespace Cinemachine { class CinemachineCRPVirtualCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define CJJCNKJHNEA_ANHOAEIEIJG_OFFSET UNITYSDK_OFFSET(0xD2148F0)
#define CJJCNKJHNEA_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xD2160D0)
#define CJJCNKJHNEA_CIPJBBAOLBD_OFFSET UNITYSDK_OFFSET(0xD214040)
#define CJJCNKJHNEA_CTOR_OFFSET UNITYSDK_OFFSET(0xD213F60)
#define CJJCNKJHNEA_DGDKOGJLNNI_OFFSET UNITYSDK_OFFSET(0xD215D40)
#define CJJCNKJHNEA_EDKFLMCNMDJ_OFFSET UNITYSDK_OFFSET(0xD216000)
#define CJJCNKJHNEA_ENHBJHABDAL_OFFSET UNITYSDK_OFFSET(0xD215DC0)
#define CJJCNKJHNEA_FJMACPENDKD_OFFSET UNITYSDK_OFFSET(0xD2158F0)
#define CJJCNKJHNEA_GET_CAMERATYPE_OFFSET UNITYSDK_OFFSET(0xD216420)
#define CJJCNKJHNEA_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xD215FA0)
#define CJJCNKJHNEA_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xD216460)
#define CJJCNKJHNEA_GET_ISAVAILABLEFORREUSE_OFFSET UNITYSDK_OFFSET(0xD2164A0)
#define CJJCNKJHNEA_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0xD216440)
#define CJJCNKJHNEA_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xD216480)
#define CJJCNKJHNEA_GET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xD216070)
#define CJJCNKJHNEA_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xD2164B0)
#define CJJCNKJHNEA_GJGCLIHCLMK_OFFSET UNITYSDK_OFFSET(0xD2144F0)
#define CJJCNKJHNEA_GPPJNJELPCI_OFFSET UNITYSDK_OFFSET(0xD214FB0)
#define CJJCNKJHNEA_HGIFAPDKLNF_OFFSET UNITYSDK_OFFSET(0xD215BD0)
#define CJJCNKJHNEA_HPJKIPELMAE_OFFSET UNITYSDK_OFFSET(0xD2142C0)
#define CJJCNKJHNEA_IOHKGLPBMOB_OFFSET UNITYSDK_OFFSET(0xD214420)
#define CJJCNKJHNEA_JEPJALFAELK_OFFSET UNITYSDK_OFFSET(0xD2146C0)
#define CJJCNKJHNEA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xD2145D0)
#define CJJCNKJHNEA_JLFMONHPKIJ_OFFSET UNITYSDK_OFFSET(0xD215C60)
#define CJJCNKJHNEA_KDDMCMIOFGH_OFFSET UNITYSDK_OFFSET(0xD215010)
#define CJJCNKJHNEA_KLEDGOLAFBP_OFFSET UNITYSDK_OFFSET(0xD216540)
#define CJJCNKJHNEA_LEJMCJKEBHO_OFFSET UNITYSDK_OFFSET(0xD214280)
#define CJJCNKJHNEA_LHLMEINHBFN_OFFSET UNITYSDK_OFFSET(0xD2141D0)
#define CJJCNKJHNEA_LJMNKABEHCJ_OFFSET UNITYSDK_OFFSET(0xD215F30)
#define CJJCNKJHNEA_MMAFJFKAKCJ_OFFSET UNITYSDK_OFFSET(0xD2164D0)
#define CJJCNKJHNEA_MOBJOGHFIOE_OFFSET UNITYSDK_OFFSET(0xD215A60)
#define CJJCNKJHNEA_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0xD215E90)
#define CJJCNKJHNEA_NMFEGLCFEKG_OFFSET UNITYSDK_OFFSET(0xD2165E0)
#define CJJCNKJHNEA_ODLNMJPGGON_OFFSET UNITYSDK_OFFSET(0xD216160)
#define CJJCNKJHNEA_OEFPFBNCKOA_OFFSET UNITYSDK_OFFSET(0xD215CD0)
#define CJJCNKJHNEA_OGKHDLPFJGB_OFFSET UNITYSDK_OFFSET(0xD215B50)
#define CJJCNKJHNEA_PILBPNGEPKA_OFFSET UNITYSDK_OFFSET(0xD2159E0)
#define CJJCNKJHNEA_SET_CAMERATYPE_OFFSET UNITYSDK_OFFSET(0xD216430)
#define CJJCNKJHNEA_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xD216470)
#define CJJCNKJHNEA_SET_ISCREATED_OFFSET UNITYSDK_OFFSET(0xD216450)
#define CJJCNKJHNEA_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xD216490)
#define CJJCNKJHNEA_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xD2164C0)

	class CJJCNKJHNEA : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* DOKFAOCAKND; // 0x10
		::LHBGGEHHLJC* BDPEJCHDNDA; // 0x18
		::Cinemachine::CinemachineCRPVirtualCamera* OPPBGAELANN; // 0x20
		::System::Collections::Generic::List_1<::CJOJDEPDCBK*>* EAOOEFNNKIO; // 0x28
		::LGAJFEPPGLD* HPGGCNCOKBG; // 0x30
		::System::UInt32 _RuntimeID_k__BackingField; // 0x38
		::System::Boolean _IsActive_k__BackingField; // 0x3C
		::System::Boolean _IsDestroyed_k__BackingField; // 0x3D
		::System::Boolean _IsCreated_k__BackingField; // 0x3E
		::System::Byte _padding0[0x1];
		::System::Int32 IIAINCPKHBJ; // 0x40
		::BHPAGJNNOMM_VCameraType _CameraType_k__BackingField; // 0x44
		::System::Single COCJDAKNIAP; // 0x48
		// static const ::System::Object DIIBHKPGKCB; // 0x0
		::System::Void _ctor(::BHPAGJNNOMM_VCameraType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::BHPAGJNNOMM_VCameraType, ::System::UInt32))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void CIPJBBAOLBD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_CIPJBBAOLBD_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* LEJMCJKEBHO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_LEJMCJKEBHO_OFFSET))(this);
		}

		::System::Void HPJKIPELMAE(::UnityEngine::Rendering::CRPVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_HPJKIPELMAE_OFFSET))(this, a1);
		}

		::System::Void IOHKGLPBMOB(::System::Collections::Generic::IReadOnlyList_1<::CJOJDEPDCBK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::CJOJDEPDCBK*>*))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_IOHKGLPBMOB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GPPJNJELPCI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_GPPJNJELPCI_OFFSET))(this, a1);
		}

		::System::Void JEPJALFAELK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_JEPJALFAELK_OFFSET))(this);
		}

		::System::Void FJMACPENDKD(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_FJMACPENDKD_OFFSET))(this, a1);
		}

		::System::Void PILBPNGEPKA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_PILBPNGEPKA_OFFSET))(this, a1);
		}

		::System::Void MOBJOGHFIOE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_MOBJOGHFIOE_OFFSET))(this, a1);
		}

		::System::Void OGKHDLPFJGB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_OGKHDLPFJGB_OFFSET))(this, a1);
		}

		::System::Void HGIFAPDKLNF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_HGIFAPDKLNF_OFFSET))(this, a1);
		}

		::System::Single JLFMONHPKIJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_JLFMONHPKIJ_OFFSET))(this);
		}

		::System::Single OEFPFBNCKOA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_OEFPFBNCKOA_OFFSET))(this);
		}

		::System::Void DGDKOGJLNNI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_DGDKOGJLNNI_OFFSET))(this, a1);
		}

		::System::Void ENHBJHABDAL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_ENHBJHABDAL_OFFSET))(this, a1);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* LJMNKABEHCJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_LJMNKABEHCJ_OFFSET))(this);
		}

		::UnityEngine::Transform* EDKFLMCNMDJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_EDKFLMCNMDJ_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void ODLNMJPGGON(::System::Collections::Generic::IReadOnlyList_1<::CJOJDEPDCBK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::CJOJDEPDCBK*>*))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_ODLNMJPGGON_OFFSET))(this, a1);
		}

		::BHPAGJNNOMM_VCameraType get_CameraType()
		{
			return ((::BHPAGJNNOMM_VCameraType(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_GET_CAMERATYPE_OFFSET))(this);
		}

		::System::Void set_CameraType(::BHPAGJNNOMM_VCameraType a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHPAGJNNOMM_VCameraType))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_SET_CAMERATYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCreated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_GET_ISCREATED_OFFSET))(this);
		}

		::System::Void set_IsCreated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_SET_ISCREATED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void set_IsDestroyed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_SET_ISDESTROYED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAvailableForReuse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_GET_ISAVAILABLEFORREUSE_OFFSET))(this);
		}

		::System::UInt32 get_RuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::Void set_RuntimeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_SET_RUNTIMEID_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_FollowTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAtTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_GET_LOOKATTARGET_OFFSET))(this);
		}

		::System::Boolean MMAFJFKAKCJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_MMAFJFKAKCJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 KLEDGOLAFBP()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_KLEDGOLAFBP_OFFSET))(this);
		}

		::UnityEngine::Quaternion NMFEGLCFEKG()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_NMFEGLCFEKG_OFFSET))(this);
		}

		::UnityEngine::GameObject* LHLMEINHBFN()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_LHLMEINHBFN_OFFSET))(this);
		}

		::System::Void GJGCLIHCLMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_GJGCLIHCLMK_OFFSET))(this);
		}

		::System::Void KDDMCMIOFGH(::CJOJDEPDCBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJOJDEPDCBK*))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_KDDMCMIOFGH_OFFSET))(this, a1);
		}

		::System::Void ANHOAEIEIJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJCNKJHNEA_ANHOAEIEIJG_OFFSET))(this);
		}

	};
