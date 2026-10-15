#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IKKJJHHENJB_KEIMAGBGCDP;
namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define IKKJJHHENJB_ADGNKMJFOHF_OFFSET UNITYSDK_OFFSET(0x16493690)
#define IKKJJHHENJB_AOEFBACEGIB_OFFSET UNITYSDK_OFFSET(0x16493810)
#define IKKJJHHENJB_BLJPLIKHPPP_OFFSET UNITYSDK_OFFSET(0x16493450)
#define IKKJJHHENJB_BMALLPEEPAN_OFFSET UNITYSDK_OFFSET(0x16492A40)
#define IKKJJHHENJB_CHOKNLJGFGI_OFFSET UNITYSDK_OFFSET(0x16492F40)
#define IKKJJHHENJB_CTOR_OFFSET UNITYSDK_OFFSET(0x16492170)
#define IKKJJHHENJB_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x164922D0)
#define IKKJJHHENJB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16492180)
#define IKKJJHHENJB_FPAPADPPFFI_OFFSET UNITYSDK_OFFSET(0x16492430)
#define IKKJJHHENJB_ICKCKJDFPIJ_OFFSET UNITYSDK_OFFSET(0x16492C60)
#define IKKJJHHENJB_JNCLHNHMOJD_OFFSET UNITYSDK_OFFSET(0x16492110)
#define IKKJJHHENJB_LHOAODMMMPE_OFFSET UNITYSDK_OFFSET(0x16493050)
#define IKKJJHHENJB_LJNIHFDLPEA_OFFSET UNITYSDK_OFFSET(0x164932D0)
#define IKKJJHHENJB_NCNMMOHOOEE_OFFSET UNITYSDK_OFFSET(0x16492070)
#define IKKJJHHENJB_NPOCLLEFICP_OFFSET UNITYSDK_OFFSET(0x164923D0)
#define IKKJJHHENJB_PCEINNJJIOO_OFFSET UNITYSDK_OFFSET(0x164927C0)
#define IKKJJHHENJB_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x164921D0)
#define IKKJJHHENJB_PNNLADJHCNH_OFFSET UNITYSDK_OFFSET(0x16492330)
#define IKKJJHHENJB_POCLGENBCCJ_OFFSET UNITYSDK_OFFSET(0x16493970)

	class IKKJJHHENJB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* CCGHHHBLPMN; // 0x10
		::RPG::Client::PerformanceManager* HDPDEGPELBN; // 0x18
		::UnityEngine::Transform* BFJOMBDJAGH; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* OHGIBJPLJMD; // 0x28
		::System::Boolean CAAPEIJJICA; // 0x30
		::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean NCNMMOHOOEE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_NCNMMOHOOEE_OFFSET))(this);
		}

		::System::Boolean JNCLHNHMOJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_JNCLHNHMOJD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_DISPOSE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKKJJHHENJB_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void NPOCLLEFICP(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_NPOCLLEFICP_OFFSET))(this, a1);
		}

		::System::Void FPAPADPPFFI(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_FPAPADPPFFI_OFFSET))(this, a1, a2);
		}

		::System::Void BMALLPEEPAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_BMALLPEEPAN_OFFSET))(this);
		}

		::System::Void ICKCKJDFPIJ(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_ICKCKJDFPIJ_OFFSET))(this, a1, a2);
		}

		::System::Void CHOKNLJGFGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_CHOKNLJGFGI_OFFSET))(this);
		}

		::System::Void LHOAODMMMPE(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_LHOAODMMMPE_OFFSET))(this, a1, a2);
		}

		::System::Void LJNIHFDLPEA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_LJNIHFDLPEA_OFFSET))(this, a1);
		}

		::System::Void PCEINNJJIOO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::NPCSubType a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::NPCSubType, ::System::String*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_PCEINNJJIOO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PNNLADJHCNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_PNNLADJHCNH_OFFSET))(this);
		}

		::System::Void BLJPLIKHPPP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IKKJJHHENJB_BLJPLIKHPPP_OFFSET))(this, a1);
		}

		::System::Void ADGNKMJFOHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKJJHHENJB_ADGNKMJFOHF_OFFSET))(this);
		}

		::System::Int32 AOEFBACEGIB(::IKKJJHHENJB_KEIMAGBGCDP* a1, ::IKKJJHHENJB_KEIMAGBGCDP* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::IKKJJHHENJB_KEIMAGBGCDP*, ::IKKJJHHENJB_KEIMAGBGCDP*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_AOEFBACEGIB_OFFSET))(this, a1, a2);
		}

		::System::Int32 POCLGENBCCJ(::IKKJJHHENJB_KEIMAGBGCDP* a1, ::IKKJJHHENJB_KEIMAGBGCDP* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::IKKJJHHENJB_KEIMAGBGCDP*, ::IKKJJHHENJB_KEIMAGBGCDP*))((::PBYTE)hIl2Cpp + IKKJJHHENJB_POCLGENBCCJ_OFFSET))(this, a1, a2);
		}

	};
