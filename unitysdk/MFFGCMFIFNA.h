#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/VCMask.h"
#include "unitysdk/RPGTools/Timeline/CRPCameraSmallWindowMeshUI_MeshUIOutlineType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
class CILFALBJPLP;
class DEBEAKKOHLN;
class DGDCNMMBMKA;
class HEAIEBHLCMJ;
class HNIJBNICJFI;
class IKKJJHHENJB;
class MFFGCMFIFNA_EDMAHHFGKMD;
namespace Cinemachine { class CinemachineCRPVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::CustomRP { class CRPVirtualCameraVolumn; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools { class MonoTimelineEffect; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define MFFGCMFIFNA_AACEABAKAFO_OFFSET UNITYSDK_OFFSET(0xB8ECD70)
#define MFFGCMFIFNA_ALONALBAOHE_1_OFFSET UNITYSDK_OFFSET(0xB8ED9B0)
#define MFFGCMFIFNA_ALONALBAOHE_2_OFFSET UNITYSDK_OFFSET(0xB8EDB50)
#define MFFGCMFIFNA_ALONALBAOHE_OFFSET UNITYSDK_OFFSET(0xB8ED790)
#define MFFGCMFIFNA_BBBJMOOEMEP_OFFSET UNITYSDK_OFFSET(0xB8EC120)
#define MFFGCMFIFNA_BJHEHKEIPFK_OFFSET UNITYSDK_OFFSET(0xB8ED380)
#define MFFGCMFIFNA_CNMELGKHDPC_OFFSET UNITYSDK_OFFSET(0xB8ED000)
#define MFFGCMFIFNA_CTOR_OFFSET UNITYSDK_OFFSET(0xB8EB850)
#define MFFGCMFIFNA_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB8EC1D0)
#define MFFGCMFIFNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8EBC00)
#define MFFGCMFIFNA_DKFBHIADJBD_OFFSET UNITYSDK_OFFSET(0xB8EBA90)
#define MFFGCMFIFNA_DMHGBAGFFEK_OFFSET UNITYSDK_OFFSET(0xB8ED1D0)
#define MFFGCMFIFNA_ECGDFNPELAA_OFFSET UNITYSDK_OFFSET(0xB8EBD80)
#define MFFGCMFIFNA_EJLEOEKDBJP_OFFSET UNITYSDK_OFFSET(0xB8EC330)
#define MFFGCMFIFNA_EKBPGJJLKFL_OFFSET UNITYSDK_OFFSET(0xB8EB840)
#define MFFGCMFIFNA_FKEPEICELKE_OFFSET UNITYSDK_OFFSET(0xB8ED2A0)
#define MFFGCMFIFNA_FPPDJBMGLKB_OFFSET UNITYSDK_OFFSET(0xB8EE590)
#define MFFGCMFIFNA_GEOGPDBLJJK_OFFSET UNITYSDK_OFFSET(0xB8ED4F0)
#define MFFGCMFIFNA_GMJJMLDEJMJ_OFFSET UNITYSDK_OFFSET(0xB8EBEA0)
#define MFFGCMFIFNA_HCNGJAMDEOG_OFFSET UNITYSDK_OFFSET(0xB8EE510)
#define MFFGCMFIFNA_HGLCKPKKBLP_OFFSET UNITYSDK_OFFSET(0xB8EC600)
#define MFFGCMFIFNA_HJADEAGBALI_OFFSET UNITYSDK_OFFSET(0xB8EBAE0)
#define MFFGCMFIFNA_ICKEDHGCKMA_OFFSET UNITYSDK_OFFSET(0xB8EDC00)
#define MFFGCMFIFNA_JCMPBKDKING_OFFSET UNITYSDK_OFFSET(0xB8EE3C0)
#define MFFGCMFIFNA_KHLNIPOLLJC_OFFSET UNITYSDK_OFFSET(0xB8ED840)
#define MFFGCMFIFNA_KKEOJAEKLGB_OFFSET UNITYSDK_OFFSET(0xB8D9B70)
#define MFFGCMFIFNA_MDIEFKEOIAL_OFFSET UNITYSDK_OFFSET(0xB8D9390)
#define MFFGCMFIFNA_NCHHIAFMNHF_OFFSET UNITYSDK_OFFSET(0xB8ED5C0)
#define MFFGCMFIFNA_NDALHNKMDPL_OFFSET UNITYSDK_OFFSET(0xB8EC6E0)
#define MFFGCMFIFNA_NDMBCEAMHNG_OFFSET UNITYSDK_OFFSET(0xB8ECCF0)
#define MFFGCMFIFNA_NFLIBJMDBDL_OFFSET UNITYSDK_OFFSET(0xB8EDA20)
#define MFFGCMFIFNA_NJPLFBNGMBB_OFFSET UNITYSDK_OFFSET(0xB8EDF80)
#define MFFGCMFIFNA_NONMKFFLKDF_OFFSET UNITYSDK_OFFSET(0xB8ED550)
#define MFFGCMFIFNA_ODOHEIPOOLH_OFFSET UNITYSDK_OFFSET(0xB8EE550)
#define MFFGCMFIFNA_OJFNPPENEFH_OFFSET UNITYSDK_OFFSET(0xB8EC770)
#define MFFGCMFIFNA_PADFHNNBNNL_OFFSET UNITYSDK_OFFSET(0xB8EE1E0)
#define MFFGCMFIFNA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB8EBC50)

inline static constexpr unsigned int MFFGCMFIFNA_TypeDefinitionIndex = 60667;

	class MFFGCMFIFNA : public ::System::Object
	{
	public:
		::HNIJBNICJFI* EOCBOHKGEGE; // 0x10
		::DGDCNMMBMKA* AEEKINDJLDO; // 0x18
		::CILFALBJPLP* PEHLNBGDMAG; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::CustomRP::VCMask>* KOPOIIPADNA; // 0x28
		::RPG::CustomRP::CRPVirtualCameraVolumn* NBHNGBGNFIP; // 0x30
		::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* AOPGNJBDICO; // 0x38
		::UnityEngine::GameObject* DCCFDPFMLCB; // 0x40
		::System::String* DNHELGBHLBA; // 0x48
		::UnityEngine::GameObject* GKCMAGFNMNM; // 0x50
		::MFFGCMFIFNA_EDMAHHFGKMD* DFECLCDMPHE; // 0x58
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* DHBPEACMFND; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::VCMask>* PGADBAAGKJI; // 0x68
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ECCDGLBAHAN; // 0x70
		::IKKJJHHENJB* AELCAPALAOE; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* OFHKINCKPIN; // 0x80
		::HEAIEBHLCMJ* MGBABGFLKHN; // 0x88
		::UnityEngine::GameObject* OCBNEPCJOKD; // 0x90
		::MFFGCMFIFNA_EDMAHHFGKMD* MLJNEGJBLAB; // 0x98
		// static const ::System::String* HGEFDOIBNIM; // 0x0
		// static const ::System::String* JHGJBJNAMGH; // 0x0
		// static const ::System::String* HNPLLNHCDCJ; // 0x0
		// static const ::System::String* FMEEBDCKGDA; // 0x0
		// static const ::System::String* BKJMINOJFND; // 0x0
		::System::Void _ctor(::DGDCNMMBMKA* a1, ::HNIJBNICJFI* a2, ::IKKJJHHENJB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::DGDCNMMBMKA*, ::HNIJBNICJFI*, ::IKKJJHHENJB*))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::CILFALBJPLP* EKBPGJJLKFL()
		{
			return ((::CILFALBJPLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_EKBPGJJLKFL_OFFSET))(this);
		}

		::System::Void DKFBHIADJBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_DKFBHIADJBD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_DISPOSE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void HGLCKPKKBLP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_HGLCKPKKBLP_OFFSET))(this, a1);
		}

		::System::Void NDALHNKMDPL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_NDALHNKMDPL_OFFSET))(this, a1);
		}

		::System::Void GMJJMLDEJMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_GMJJMLDEJMJ_OFFSET))(this);
		}

		::Cinemachine::CinemachineCRPVirtualCamera* CNMELGKHDPC(::System::Int32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::Cinemachine::CinemachineCRPVirtualCamera*(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_CNMELGKHDPC_OFFSET))(this, a1, a2);
		}

		::System::Void OJFNPPENEFH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_OJFNPPENEFH_OFFSET))(this, a1);
		}

		::CILFALBJPLP* DMHGBAGFFEK(::System::String* a1)
		{
			return ((::CILFALBJPLP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_DMHGBAGFFEK_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* FKEPEICELKE(::RPGTools::Timeline::CRPCameraSmallWindowMeshUI_MeshUIOutlineType a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPGTools::Timeline::CRPCameraSmallWindowMeshUI_MeshUIOutlineType))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_FKEPEICELKE_OFFSET))(this, a1);
		}

		::System::Void BBBJMOOEMEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_BBBJMOOEMEP_OFFSET))(this);
		}

		::System::Void KKEOJAEKLGB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_KKEOJAEKLGB_OFFSET))(this, a1);
		}

		::System::Void MDIEFKEOIAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_MDIEFKEOIAL_OFFSET))(this);
		}

		::System::Void BJHEHKEIPFK(::System::UInt32 a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::Cinemachine::CinemachineBlendDefinition a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineBlendDefinition))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_BJHEHKEIPFK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NONMKFFLKDF(::System::UInt32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_NONMKFFLKDF_OFFSET))(this, a1, a2);
		}

		::System::Void NDMBCEAMHNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_NDMBCEAMHNG_OFFSET))(this);
		}

		::System::Void EJLEOEKDBJP(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_EJLEOEKDBJP_OFFSET))(this, a1, a2);
		}

		::MFFGCMFIFNA_EDMAHHFGKMD* GEOGPDBLJJK(::System::UInt32 a1)
		{
			return ((::MFFGCMFIFNA_EDMAHHFGKMD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_GEOGPDBLJJK_OFFSET))(this, a1);
		}

		::System::Void HJADEAGBALI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_HJADEAGBALI_OFFSET))(this);
		}

		::System::Void ECGDFNPELAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_ECGDFNPELAA_OFFSET))(this);
		}

		::System::Void NCHHIAFMNHF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_NCHHIAFMNHF_OFFSET))(this, a1);
		}

		::System::Void KHLNIPOLLJC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_KHLNIPOLLJC_OFFSET))(this, a1);
		}

		::System::Void NFLIBJMDBDL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_NFLIBJMDBDL_OFFSET))(this, a1);
		}

		::System::Void ICKEDHGCKMA(::RPG::CustomRP::VCMask a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::VCMask, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_ICKEDHGCKMA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NJPLFBNGMBB(::RPG::GameCore::GameEntity* a1, ::RPG::CustomRP::VCMask a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_NJPLFBNGMBB_OFFSET))(this, a1, a2);
		}

		::System::Void PADFHNNBNNL(::RPG::GameCore::GameEntity* a1, ::RPG::CustomRP::VCMask a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_PADFHNNBNNL_OFFSET))(this, a1, a2);
		}

		::System::Void JCMPBKDKING(::RPG::CustomRP::VCMask a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::VCMask, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_JCMPBKDKING_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HCNGJAMDEOG()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_HCNGJAMDEOG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ODOHEIPOOLH()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_ODOHEIPOOLH_OFFSET))(this);
		}

		::System::Void ALONALBAOHE(::RPG::Client::MonoEffect* a1, ::RPG::CustomRP::VCMask a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_ALONALBAOHE_OFFSET))(this, a1, a2);
		}

		::System::Void ALONALBAOHE_1(::RPGTools::MonoTimelineEffect* a1, ::RPG::CustomRP::VCMask a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::MonoTimelineEffect*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_ALONALBAOHE_1_OFFSET))(this, a1, a2);
		}

		::System::Void ALONALBAOHE_2(::UnityEngine::GameObject* a1, ::RPG::CustomRP::VCMask a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_ALONALBAOHE_2_OFFSET))(this, a1, a2);
		}

		::System::Void FPPDJBMGLKB(::DEBEAKKOHLN* a1, ::RPG::CustomRP::VCMask a2)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_FPPDJBMGLKB_OFFSET))(this, a1, a2);
		}

		::System::Void AACEABAKAFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_AACEABAKAFO_OFFSET))(this);
		}

	};
