#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DanmuType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ABBBGGNFEDE;
class FKAHAIEPHJP;
class HBPJOJJIPPM;
class MFLJIEBFMOF;
namespace RPG::Client { class MonoDanmuItem; }
namespace RPG::Client { class MonoDanmuSpawner; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONODANMUCONTROLLER_ADDSEQUENCE_OFFSET UNITYSDK_OFFSET(0xD747B60)
#define RPG_CLIENT_MONODANMUCONTROLLER_AJLKENCKMDE_OFFSET UNITYSDK_OFFSET(0xD748D40)
#define RPG_CLIENT_MONODANMUCONTROLLER_BCKPCBJBFCL_OFFSET UNITYSDK_OFFSET(0xD747850)
#define RPG_CLIENT_MONODANMUCONTROLLER_BLNKPMGNBDH_OFFSET UNITYSDK_OFFSET(0xD7485A0)
#define RPG_CLIENT_MONODANMUCONTROLLER_BPNFMBPCPEM_OFFSET UNITYSDK_OFFSET(0xD748F90)
#define RPG_CLIENT_MONODANMUCONTROLLER_CCHLGOHPOLH_OFFSET UNITYSDK_OFFSET(0xD747480)
#define RPG_CLIENT_MONODANMUCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0xD747C60)
#define RPG_CLIENT_MONODANMUCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xD749BB0)
#define RPG_CLIENT_MONODANMUCONTROLLER_EOFEHFMCDGL_OFFSET UNITYSDK_OFFSET(0xD748F20)
#define RPG_CLIENT_MONODANMUCONTROLLER_FHHBBMNGBMD_OFFSET UNITYSDK_OFFSET(0xD7491E0)
#define RPG_CLIENT_MONODANMUCONTROLLER_FPAPHDGPNOM_OFFSET UNITYSDK_OFFSET(0xD749000)
#define RPG_CLIENT_MONODANMUCONTROLLER_FPFIANKNAAP_OFFSET UNITYSDK_OFFSET(0xD749B40)
#define RPG_CLIENT_MONODANMUCONTROLLER_GPCGLBFCIPI_OFFSET UNITYSDK_OFFSET(0xD7498E0)
#define RPG_CLIENT_MONODANMUCONTROLLER_HBAIHHIGKHH_OFFSET UNITYSDK_OFFSET(0xD748330)
#define RPG_CLIENT_MONODANMUCONTROLLER_HDIGIAOCIOA_OFFSET UNITYSDK_OFFSET(0xD7481E0)
#define RPG_CLIENT_MONODANMUCONTROLLER_HKEHKAOFNGM_OFFSET UNITYSDK_OFFSET(0xD748CA0)
#define RPG_CLIENT_MONODANMUCONTROLLER_ICJEDJLECDA_OFFSET UNITYSDK_OFFSET(0xD7485F0)
#define RPG_CLIENT_MONODANMUCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD747B10)
#define RPG_CLIENT_MONODANMUCONTROLLER_JCBOOAPPMOH_OFFSET UNITYSDK_OFFSET(0xD748400)
#define RPG_CLIENT_MONODANMUCONTROLLER_JHFMBCEJPLP_OFFSET UNITYSDK_OFFSET(0xD7490E0)
#define RPG_CLIENT_MONODANMUCONTROLLER_LEENNOPOLBD_OFFSET UNITYSDK_OFFSET(0xD748960)
#define RPG_CLIENT_MONODANMUCONTROLLER_OFEJOILJOIN_OFFSET UNITYSDK_OFFSET(0xD749640)
#define RPG_CLIENT_MONODANMUCONTROLLER_OLGHJDPOFBJ_OFFSET UNITYSDK_OFFSET(0xD747AA0)
#define RPG_CLIENT_MONODANMUCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD7472F0)
#define RPG_CLIENT_MONODANMUCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD7471E0)
#define RPG_CLIENT_MONODANMUCONTROLLER_PEBKKOILPNK_OFFSET UNITYSDK_OFFSET(0xD7486C0)
#define RPG_CLIENT_MONODANMUCONTROLLER_PJBNGBALNCO_OFFSET UNITYSDK_OFFSET(0xD748BB0)
#define RPG_CLIENT_MONODANMUCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD747400)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDanmuController_TypeDefinitionIndex = 68946;

	class MonoDanmuController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoDanmuSpawner* _Spawner; // 0x18
		::System::Single _TextLineSpacing; // 0x20
		::System::Single _ImageLineSpacing; // 0x24
		::System::Single _GiftLineSpacing; // 0x28
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DanmuType, ::System::Object*>* DCDIGMAMKJC; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DanmuType, ::System::Collections::Generic::Queue_1<::System::Object*>*>* HHIHGGOCAOL; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* NKAAOPLPBMN; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::MonoDanmuItem*>* OJPEHIAABPB; // 0x48
		::FKAHAIEPHJP* AOLDAIOHGNN; // 0x50
		::ABBBGGNFEDE* COFBCJHBOBH; // 0x58
		::System::Boolean IDBHEIBEGBA; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void Initialize(::FKAHAIEPHJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKAHAIEPHJP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void AddSequence(::HBPJOJJIPPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBPJOJJIPPM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_ADDSEQUENCE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void HDIGIAOCIOA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_HDIGIAOCIOA_OFFSET))(this, a1);
		}

		::System::Void HBAIHHIGKHH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_HBAIHHIGKHH_OFFSET))(this, a1);
		}

		::System::Void OLGHJDPOFBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_OLGHJDPOFBJ_OFFSET))(this);
		}

		::System::Void JCBOOAPPMOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_JCBOOAPPMOH_OFFSET))(this);
		}

		::System::Void PEBKKOILPNK(::MFLJIEBFMOF* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::MFLJIEBFMOF*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_PEBKKOILPNK_OFFSET))(this, a1, a2);
		}

		::System::Void PJBNGBALNCO(::MFLJIEBFMOF* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::MFLJIEBFMOF*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_PJBNGBALNCO_OFFSET))(this, a1, a2);
		}

		::System::Boolean HKEHKAOFNGM(::RPG::GameCore::DanmuType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DanmuType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_HKEHKAOFNGM_OFFSET))(this, a1);
		}

		::System::Boolean AJLKENCKMDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_AJLKENCKMDE_OFFSET))(this);
		}

		::System::Boolean EOFEHFMCDGL(::RPG::GameCore::DanmuType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DanmuType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_EOFEHFMCDGL_OFFSET))(this, a1);
		}

		::System::Boolean BPNFMBPCPEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_BPNFMBPCPEM_OFFSET))(this);
		}

		::System::Void FPAPHDGPNOM(::MFLJIEBFMOF* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::MFLJIEBFMOF*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_FPAPHDGPNOM_OFFSET))(this, a1, a2);
		}

		::System::Void JHFMBCEJPLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_JHFMBCEJPLP_OFFSET))(this);
		}

		::System::Void BLNKPMGNBDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_BLNKPMGNBDH_OFFSET))(this);
		}

		::System::Void LEENNOPOLBD(::RPG::Client::MonoDanmuItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoDanmuItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_LEENNOPOLBD_OFFSET))(this, a1);
		}

		::System::Void BCKPCBJBFCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_BCKPCBJBFCL_OFFSET))(this);
		}

		::System::Void CCHLGOHPOLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_CCHLGOHPOLH_OFFSET))(this);
		}

		::System::Boolean ICJEDJLECDA(::RPG::GameCore::DanmuType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DanmuType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_ICJEDJLECDA_OFFSET))(this, a1);
		}

		::System::Single FHHBBMNGBMD(::RPG::Client::MonoDanmuItem* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::MonoDanmuItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_FHHBBMNGBMD_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* GPCGLBFCIPI(::RPG::GameCore::DanmuType a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::RPG::GameCore::DanmuType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_GPCGLBFCIPI_OFFSET))(this, a1);
		}

		::System::Single FPFIANKNAAP(::RPG::GameCore::DanmuType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::DanmuType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_FPFIANKNAAP_OFFSET))(this, a1);
		}

		::System::Void OFEJOILJOIN(::RPG::GameCore::DanmuType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DanmuType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_OFEJOILJOIN_OFFSET))(this, a1, a2);
		}

	};
}
