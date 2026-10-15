#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EHOFEPBAHNK;
class OCPOIDCNJDA;
class OMPCEECHGJK;
namespace RPG::Client::LittleGame::PingPong { class PingPongCameraView; }
namespace RPG::Client::LittleGame::PingPong { class PingPongDynamicBone; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class PingPongDropItemInfo; }
namespace RPG::GameCore { class PingPongEnemyConfig; }
namespace RPG::GameCore { class PingPongEnemyGroupConfig; }
namespace RPG::GameCore { class PingPongEnemyShootConfig; }
namespace RPG::GameCore { class PingPongEnemyShootOverrideCmptConfig; }
namespace RPG::GameCore { class PingPongEnemyStackConfig; }
namespace RPG::GameCore { class PingPongEnemyUnitConfig; }
namespace RPG::GameCore { class PingPongLevelAddPointCmptConfig; }
namespace RPG::GameCore { class PingPongProjectileInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define OODMOIBKGCP_AMFPGKECAKE_OFFSET UNITYSDK_OFFSET(0xBF75850)
#define OODMOIBKGCP_AOAOECFHINI_OFFSET UNITYSDK_OFFSET(0xBF73210)
#define OODMOIBKGCP_CJPGDODDKPO_OFFSET UNITYSDK_OFFSET(0xBF72F10)
#define OODMOIBKGCP_CTOR_OFFSET UNITYSDK_OFFSET(0xBF72D60)
#define OODMOIBKGCP_DGKMPKEHICB_OFFSET UNITYSDK_OFFSET(0xBF73370)
#define OODMOIBKGCP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF72E20)
#define OODMOIBKGCP_DKDBDADDPGL_OFFSET UNITYSDK_OFFSET(0xBF787D0)
#define OODMOIBKGCP_EEAKGJKJDML_OFFSET UNITYSDK_OFFSET(0xBF75130)
#define OODMOIBKGCP_EEMJLCBLLBA_OFFSET UNITYSDK_OFFSET(0xBF78650)
#define OODMOIBKGCP_EHHGFMCOPOG_OFFSET UNITYSDK_OFFSET(0xBF777F0)
#define OODMOIBKGCP_EIADNBEOHNF_OFFSET UNITYSDK_OFFSET(0xBF78B30)
#define OODMOIBKGCP_EMFFHMAJNBC_OFFSET UNITYSDK_OFFSET(0xBF74A10)
#define OODMOIBKGCP_GIDHHFJNPIK_OFFSET UNITYSDK_OFFSET(0xBF72E90)
#define OODMOIBKGCP_GJIABFMGIKG_OFFSET UNITYSDK_OFFSET(0xBF78E80)
#define OODMOIBKGCP_GKDDOMGDAKH_OFFSET UNITYSDK_OFFSET(0xBF784D0)
#define OODMOIBKGCP_GNHJKCAFGFE_OFFSET UNITYSDK_OFFSET(0xBF74720)
#define OODMOIBKGCP_HBNJCIOHHNN_OFFSET UNITYSDK_OFFSET(0xBF74100)
#define OODMOIBKGCP_HHHBOFNGHCK_OFFSET UNITYSDK_OFFSET(0xBF78350)
#define OODMOIBKGCP_HOEBDIMMCAP_OFFSET UNITYSDK_OFFSET(0xBF77B70)
#define OODMOIBKGCP_IPDHODFAEJO_OFFSET UNITYSDK_OFFSET(0xBF73720)
#define OODMOIBKGCP_JLOJMFEJIDD_OFFSET UNITYSDK_OFFSET(0xBF78D80)
#define OODMOIBKGCP_JONDEDGFIED_OFFSET UNITYSDK_OFFSET(0xBF79320)
#define OODMOIBKGCP_KKFMHGEPODK_OFFSET UNITYSDK_OFFSET(0xBF78110)
#define OODMOIBKGCP_KNEMOONEBOJ_OFFSET UNITYSDK_OFFSET(0xBF75200)
#define OODMOIBKGCP_LHKEKDBOGGH_OFFSET UNITYSDK_OFFSET(0xBF791D0)
#define OODMOIBKGCP_LLCPNDPOOBP_OFFSET UNITYSDK_OFFSET(0xBF75610)
#define OODMOIBKGCP_LLMLKFGJIBD_OFFSET UNITYSDK_OFFSET(0xBF78950)
#define OODMOIBKGCP_LOEIJFDIEFB_OFFSET UNITYSDK_OFFSET(0xBF73100)
#define OODMOIBKGCP_MDAILIIDPMK_OFFSET UNITYSDK_OFFSET(0xBF78FB0)
#define OODMOIBKGCP_NBBPGHGEEDO_OFFSET UNITYSDK_OFFSET(0xBF73C30)
#define OODMOIBKGCP_NEDINMBFPAH_OFFSET UNITYSDK_OFFSET(0xBF76030)
#define OODMOIBKGCP_NFHOPNIFDHJ_OFFSET UNITYSDK_OFFSET(0xBF77540)
#define OODMOIBKGCP_NKGBHAAGPBO_OFFSET UNITYSDK_OFFSET(0xBF76BA0)
#define OODMOIBKGCP_OBPODOCHKDK_OFFSET UNITYSDK_OFFSET(0xBF781C0)
#define OODMOIBKGCP_ONIDEHACILE_OFFSET UNITYSDK_OFFSET(0xBF768B0)
#define OODMOIBKGCP_PECJCCCIKCH_OFFSET UNITYSDK_OFFSET(0xBF74CB0)
#define OODMOIBKGCP_PEMDPCOCBFB_OFFSET UNITYSDK_OFFSET(0xBF77150)

	class OODMOIBKGCP
	{
	public:
		::UnityEngine::Transform* CEDODCLEPBC; // 0x30
		::EHOFEPBAHNK* NHIKLMODJJB; // 0x38
		::OMPCEECHGJK* OKOEHJDMLFM; // 0x40
		// static const ::System::Object OBEHOBMOENE; // 0x0
		::System::Void _ctor(::OMPCEECHGJK* a1, ::EHOFEPBAHNK* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OMPCEECHGJK*, ::EHOFEPBAHNK*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OODMOIBKGCP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OODMOIBKGCP_DISPOSE_OFFSET))(this);
		}

		::OCPOIDCNJDA* GIDHHFJNPIK()
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OODMOIBKGCP_GIDHHFJNPIK_OFFSET))(this);
		}

		::System::Void CJPGDODDKPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OODMOIBKGCP_CJPGDODDKPO_OFFSET))(this);
		}

		::System::Void LOEIJFDIEFB(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + OODMOIBKGCP_LOEIJFDIEFB_OFFSET))(this, a1);
		}

		::System::Void AOAOECFHINI(::RPG::GameCore::PingPongLevelAddPointCmptConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongLevelAddPointCmptConfig*))((::PBYTE)hIl2Cpp + OODMOIBKGCP_AOAOECFHINI_OFFSET))(this, a1);
		}

		::System::Void DGKMPKEHICB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OODMOIBKGCP_DGKMPKEHICB_OFFSET))(this);
		}

		::System::Void IPDHODFAEJO(::RPG::GameCore::PingPongProjectileInfo* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongProjectileInfo*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OODMOIBKGCP_IPDHODFAEJO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NBBPGHGEEDO(::RPG::GameCore::PingPongProjectileInfo* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongProjectileInfo*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OODMOIBKGCP_NBBPGHGEEDO_OFFSET))(this, a1, a2);
		}

		::System::Void HBNJCIOHHNN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OODMOIBKGCP_HBNJCIOHHNN_OFFSET))(this, a1, a2);
		}

		::System::Void GNHJKCAFGFE(::RPG::GameCore::PingPongDropItemInfo* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongDropItemInfo*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OODMOIBKGCP_GNHJKCAFGFE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EMFFHMAJNBC(::RPG::GameCore::LittleGameEntityConfig* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Action*))((::PBYTE)hIl2Cpp + OODMOIBKGCP_EMFFHMAJNBC_OFFSET))(this, a1, a2);
		}

		::System::Void PECJCCCIKCH(::OCPOIDCNJDA* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OODMOIBKGCP_PECJCCCIKCH_OFFSET))(this, a1, a2);
		}

		::System::Void EEAKGJKJDML(::RPG::Client::LittleGame::PingPong::PingPongCameraView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PingPong::PingPongCameraView*))((::PBYTE)hIl2Cpp + OODMOIBKGCP_EEAKGJKJDML_OFFSET))(this, a1);
		}

		::System::Void KNEMOONEBOJ(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + OODMOIBKGCP_KNEMOONEBOJ_OFFSET))(this, a1);
		}

		::System::Void AMFPGKECAKE(::RPG::GameCore::LittleGameEntityConfig* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + OODMOIBKGCP_AMFPGKECAKE_OFFSET))(this, a1, a2);
		}

		::System::Void NEDINMBFPAH(::OCPOIDCNJDA* a1, ::UnityEngine::Transform* a2, ::System::ValueTuple a3)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*, ::UnityEngine::Transform*, ::System::ValueTuple))((::PBYTE)hIl2Cpp + OODMOIBKGCP_NEDINMBFPAH_OFFSET))(this, a1, a2, a3);
		}

		::OCPOIDCNJDA* ONIDEHACILE(::RPG::Client::LittleGame::PingPong::PingPongDynamicBone* a1)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::RPG::Client::LittleGame::PingPong::PingPongDynamicBone*))((::PBYTE)hIl2Cpp + OODMOIBKGCP_ONIDEHACILE_OFFSET))(this, a1);
		}

		::OCPOIDCNJDA* NFHOPNIFDHJ(::System::UInt32 a1, ::RPG::GameCore::PingPongEnemyShootConfig* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::OCPOIDCNJDA*>* a3, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig* a4)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PingPongEnemyShootConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::OCPOIDCNJDA*>*, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig*))((::PBYTE)hIl2Cpp + OODMOIBKGCP_NFHOPNIFDHJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::OCPOIDCNJDA* PEMDPCOCBFB(::System::UInt32 a1, ::RPG::GameCore::PingPongEnemyStackConfig* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::OCPOIDCNJDA*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* a4)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PingPongEnemyStackConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::OCPOIDCNJDA*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + OODMOIBKGCP_PEMDPCOCBFB_OFFSET))(this, a1, a2, a3, a4);
		}

		::OCPOIDCNJDA* EHHGFMCOPOG(::System::UInt32 a1, ::RPG::GameCore::PingPongEnemyGroupConfig* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::OCPOIDCNJDA*>* a3)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PingPongEnemyGroupConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::OCPOIDCNJDA*>*))((::PBYTE)hIl2Cpp + OODMOIBKGCP_EHHGFMCOPOG_OFFSET))(this, a1, a2, a3);
		}

		::OCPOIDCNJDA* NKGBHAAGPBO(::System::UInt32 a1, ::RPG::GameCore::PingPongEnemyUnitConfig* a2, ::UnityEngine::Transform* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* a4)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PingPongEnemyUnitConfig*, ::UnityEngine::Transform*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + OODMOIBKGCP_NKGBHAAGPBO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HOEBDIMMCAP(::OCPOIDCNJDA* a1, ::UnityEngine::Transform* a2, ::RPG::GameCore::PingPongEnemyUnitConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*, ::UnityEngine::Transform*, ::RPG::GameCore::PingPongEnemyUnitConfig*))((::PBYTE)hIl2Cpp + OODMOIBKGCP_HOEBDIMMCAP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LLCPNDPOOBP(::OCPOIDCNJDA* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OODMOIBKGCP_LLCPNDPOOBP_OFFSET))(this, a1, a2);
		}

		::OCPOIDCNJDA* KKFMHGEPODK(::UnityEngine::RaycastHit a1)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + OODMOIBKGCP_KKFMHGEPODK_OFFSET))(this, a1);
		}

		::OCPOIDCNJDA* OBPODOCHKDK(::UnityEngine::Collider* a1)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + OODMOIBKGCP_OBPODOCHKDK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HHHBOFNGHCK(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OODMOIBKGCP_HHHBOFNGHCK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GKDDOMGDAKH(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OODMOIBKGCP_GKDDOMGDAKH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EEMJLCBLLBA(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OODMOIBKGCP_EEMJLCBLLBA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 DKDBDADDPGL(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OODMOIBKGCP_DKDBDADDPGL_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion LLMLKFGJIBD(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + OODMOIBKGCP_LLMLKFGJIBD_OFFSET))(this, a1);
		}

		::System::Int32 EIADNBEOHNF(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::System::Boolean a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + OODMOIBKGCP_EIADNBEOHNF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 JLOJMFEJIDD(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::Collider*>* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32))((::PBYTE)hIl2Cpp + OODMOIBKGCP_JLOJMFEJIDD_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 GJIABFMGIKG(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OODMOIBKGCP_GJIABFMGIKG_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 MDAILIIDPMK(::UnityEngine::RaycastHit a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + OODMOIBKGCP_MDAILIIDPMK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LHKEKDBOGGH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OODMOIBKGCP_LHKEKDBOGGH_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 JONDEDGFIED(::OCPOIDCNJDA* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + OODMOIBKGCP_JONDEDGFIED_OFFSET))(this, a1);
		}

	};
