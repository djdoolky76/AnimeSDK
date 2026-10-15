#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFEPOFEOCDI;
class OCPOIDCNJDA;
class OMPCEECHGJK;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class PingPongEnemyGroupEvent_ModifyEnemyRotate; }
namespace RPG::GameCore { class PingPongEnemyGroupEvent_ModifyShoot; }
namespace RPG::GameCore { class PingPongEnemyGroupEvent_ModifyUnit; }
namespace RPG::GameCore { class PingPongEnemyGroupEvent_PushStack; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define JLFOEGOBLDL_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xB238F00)
#define JLFOEGOBLDL_BGAKAFJCKJN_OFFSET UNITYSDK_OFFSET(0xB23A660)
#define JLFOEGOBLDL_BPHHKPFKBAM_OFFSET UNITYSDK_OFFSET(0xB23C8B0)
#define JLFOEGOBLDL_CBAICMKNJMG_OFFSET UNITYSDK_OFFSET(0xB23A030)
#define JLFOEGOBLDL_CDPHPGGMMMD_OFFSET UNITYSDK_OFFSET(0xB23BF50)
#define JLFOEGOBLDL_CLEANUP_OFFSET UNITYSDK_OFFSET(0xB239E90)
#define JLFOEGOBLDL_CTOR_OFFSET UNITYSDK_OFFSET(0xB238EF0)
#define JLFOEGOBLDL_DCMNCDPOGND_OFFSET UNITYSDK_OFFSET(0xB23CAD0)
#define JLFOEGOBLDL_DLEIDEKENKC_OFFSET UNITYSDK_OFFSET(0xB2392E0)
#define JLFOEGOBLDL_EHDBEBHHJAM_OFFSET UNITYSDK_OFFSET(0xB23B910)
#define JLFOEGOBLDL_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB239140)
#define JLFOEGOBLDL_FKNEJHCHDGM_OFFSET UNITYSDK_OFFSET(0xB23BD70)
#define JLFOEGOBLDL_GANPFMIDBGO_OFFSET UNITYSDK_OFFSET(0xB23A830)
#define JLFOEGOBLDL_GEBFOHKLHMF_OFFSET UNITYSDK_OFFSET(0xB23B160)
#define JLFOEGOBLDL_GLEFFKHLHAE_OFFSET UNITYSDK_OFFSET(0xB23C220)
#define JLFOEGOBLDL_HDCFBLGIJOA_OFFSET UNITYSDK_OFFSET(0xB23C710)
#define JLFOEGOBLDL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB238F60)
#define JLFOEGOBLDL_KHDMDGHHIEM_OFFSET UNITYSDK_OFFSET(0xB23A440)
#define JLFOEGOBLDL_MNNMODAJIPI_OFFSET UNITYSDK_OFFSET(0xB23B300)
#define JLFOEGOBLDL_NEEDLGFCGDN_OFFSET UNITYSDK_OFFSET(0xB23CB60)
#define JLFOEGOBLDL_NFOOFOKCNJD_OFFSET UNITYSDK_OFFSET(0xB23AF80)
#define JLFOEGOBLDL_ODCEOEEPLAL_OFFSET UNITYSDK_OFFSET(0xB23C0F0)
#define JLFOEGOBLDL_OEEEHDJPLKA_OFFSET UNITYSDK_OFFSET(0xB23BC00)
#define JLFOEGOBLDL_OEMMADDBIBE_OFFSET UNITYSDK_OFFSET(0xB23CD50)
#define JLFOEGOBLDL_PLIGOHOCKOC_OFFSET UNITYSDK_OFFSET(0xB23B580)
#define JLFOEGOBLDL_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB23A3A0)

inline static constexpr unsigned int JLFOEGOBLDL_TypeDefinitionIndex = 76662;

	class JLFOEGOBLDL : public ::System::Object
	{
	public:
		::AFEPOFEOCDI* FKINCGODJEP; // 0x10
		::Entitas::IGroup_1<::OCPOIDCNJDA*>* LLIMLCCEBAH; // 0x18
		::RPG::PoolList_1<::OCPOIDCNJDA*>* EPALMAMNOPG; // 0x20
		::RPG::PoolHashSet_1<::System::UInt32>* LCPOLDIGHPC; // 0x28
		::RPG::PoolHashSet_1<::System::UInt32>* DMIPKFAGDJB; // 0x30
		::RPG::PoolList_1<::OCPOIDCNJDA*>* EKBKIAFFCEL; // 0x38
		::OMPCEECHGJK* PDENFEFCAGN; // 0x40
		::System::Void _ctor(::AFEPOFEOCDI* a1, ::OMPCEECHGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AFEPOFEOCDI*, ::OMPCEECHGJK*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_EXECUTE_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_CLEANUP_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_TEARDOWN_OFFSET))(this);
		}

		::System::Void KHDMDGHHIEM(::OCPOIDCNJDA* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_KHDMDGHHIEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BGAKAFJCKJN(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_BGAKAFJCKJN_OFFSET))(this, a1);
		}

		::System::Void CBAICMKNJMG(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_CBAICMKNJMG_OFFSET))(this, a1);
		}

		::System::Void NFOOFOKCNJD(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_NFOOFOKCNJD_OFFSET))(this, a1);
		}

		::System::Void DLEIDEKENKC(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_DLEIDEKENKC_OFFSET))(this, a1);
		}

		::System::Void MNNMODAJIPI(::OCPOIDCNJDA* a1, ::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>* a2, ::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>* a3, ::OCPOIDCNJDA* a4)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*, ::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>*, ::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>*, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_MNNMODAJIPI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OEEEHDJPLKA(::RPG::GameCore::PingPongEnemyGroupEvent_PushStack* a1, ::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongEnemyGroupEvent_PushStack*, ::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_OEEEHDJPLKA_OFFSET))(this, a1, a2);
		}

		::System::Void FKNEJHCHDGM(::RPG::GameCore::PingPongEnemyGroupEvent_ModifyUnit* a1, ::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyUnit*, ::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_FKNEJHCHDGM_OFFSET))(this, a1, a2);
		}

		::System::Void GLEFFKHLHAE(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_GLEFFKHLHAE_OFFSET))(this, a1);
		}

		::System::Void ODCEOEEPLAL(::RPG::GameCore::PingPongEnemyGroupEvent_ModifyEnemyRotate* a1, ::OCPOIDCNJDA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyEnemyRotate*, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_ODCEOEEPLAL_OFFSET))(this, a1, a2);
		}

		::System::Void CDPHPGGMMMD(::RPG::GameCore::PingPongEnemyGroupEvent_ModifyShoot* a1, ::OCPOIDCNJDA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyShoot*, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_CDPHPGGMMMD_OFFSET))(this, a1, a2);
		}

		::System::Void EHDBEBHHJAM(::RPG::PoolList_1<::OCPOIDCNJDA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::OCPOIDCNJDA*>*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_EHDBEBHHJAM_OFFSET))(this, a1);
		}

		::System::Void PLIGOHOCKOC(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_PLIGOHOCKOC_OFFSET))(this, a1);
		}

		::System::Int32 DCMNCDPOGND(::OCPOIDCNJDA* a1, ::OCPOIDCNJDA* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::OCPOIDCNJDA*, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_DCMNCDPOGND_OFFSET))(this, a1, a2);
		}

		::System::Int32 HDCFBLGIJOA(::System::Int32 a1, ::System::Int32 a2, ::OCPOIDCNJDA* a3, ::OCPOIDCNJDA* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::OCPOIDCNJDA*, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_HDCFBLGIJOA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BPHHKPFKBAM(::OCPOIDCNJDA* a1, ::OCPOIDCNJDA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_BPHHKPFKBAM_OFFSET))(this, a1, a2);
		}

		::System::Void GANPFMIDBGO(::OCPOIDCNJDA* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_GANPFMIDBGO_OFFSET))(this, a1, a2);
		}

		::System::Void NEEDLGFCGDN(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_NEEDLGFCGDN_OFFSET))(this, a1);
		}

		::System::Void GEBFOHKLHMF(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_GEBFOHKLHMF_OFFSET))(this, a1);
		}

		::System::Void OEMMADDBIBE(::OCPOIDCNJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*))((::PBYTE)hIl2Cpp + JLFOEGOBLDL_OEMMADDBIBE_OFFSET))(this, a1);
		}

	};
