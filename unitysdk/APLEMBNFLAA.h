#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPMONNHABLI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
class AAODEOPMKBD;
class APLEMBNFLAA;
class GDMONJOAKHD;
class GICDNFMMKMN;
class HIOOOMIBMDA;
class INCHEAIJPMD;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
class NEOBJJIOBFP;
class OIDDJJLHGKO;
class PMLOPPBCMKB;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Nullable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Camera; }

#define APLEMBNFLAA_ACKIPEPLMAO_OFFSET UNITYSDK_OFFSET(0x15BB0970)
#define APLEMBNFLAA_CMKGMFMKADN_OFFSET UNITYSDK_OFFSET(0x15BAD390)
#define APLEMBNFLAA_COKHKLPIJPO_OFFSET UNITYSDK_OFFSET(0x15BB1A50)
#define APLEMBNFLAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15BAD2D0)
#define APLEMBNFLAA_CTOR_2_OFFSET UNITYSDK_OFFSET(0x15BAD4F0)
#define APLEMBNFLAA_CTOR_3_OFFSET UNITYSDK_OFFSET(0x15BAD5B0)
#define APLEMBNFLAA_CTOR_4_OFFSET UNITYSDK_OFFSET(0x15BAD690)
#define APLEMBNFLAA_CTOR_OFFSET UNITYSDK_OFFSET(0x15BAD0F0)
#define APLEMBNFLAA_DCCGPCKBCCH_OFFSET UNITYSDK_OFFSET(0x15BB05F0)
#define APLEMBNFLAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BAD780)
#define APLEMBNFLAA_EBONOEDPPFL_OFFSET UNITYSDK_OFFSET(0x15BB1AD0)
#define APLEMBNFLAA_FFFIJKDGNFB_OFFSET UNITYSDK_OFFSET(0x15BB1D00)
#define APLEMBNFLAA_FJGELBCACEK_OFFSET UNITYSDK_OFFSET(0x15BAF470)
#define APLEMBNFLAA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x15BB1A10)
#define APLEMBNFLAA_GET_SOURCENAME_OFFSET UNITYSDK_OFFSET(0x15BB1CC0)
#define APLEMBNFLAA_GET_SOURCERADIUSDIRTY_OFFSET UNITYSDK_OFFSET(0x15BAD0D0)
#define APLEMBNFLAA_GET_SOURCERADIUS_OFFSET UNITYSDK_OFFSET(0x15BAD0B0)
#define APLEMBNFLAA_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x15BB1CE0)
#define APLEMBNFLAA_IAHNNGLIBFB_OFFSET UNITYSDK_OFFSET(0x15BB1110)
#define APLEMBNFLAA_IBHOCIMCAJL_OFFSET UNITYSDK_OFFSET(0x15BADC00)
#define APLEMBNFLAA_IGJIFHJEBNN_OFFSET UNITYSDK_OFFSET(0x15BB0C90)
#define APLEMBNFLAA_IMANKFPCBGB_OFFSET UNITYSDK_OFFSET(0x15BAF3C0)
#define APLEMBNFLAA_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0x15BAFAE0)
#define APLEMBNFLAA_LOMPEGEDDDM_1_OFFSET UNITYSDK_OFFSET(0x15BAE550)
#define APLEMBNFLAA_LOMPEGEDDDM_2_OFFSET UNITYSDK_OFFSET(0x15BAE870)
#define APLEMBNFLAA_LOMPEGEDDDM_3_OFFSET UNITYSDK_OFFSET(0x15BAEB90)
#define APLEMBNFLAA_LOMPEGEDDDM_OFFSET UNITYSDK_OFFSET(0x15BAE120)
#define APLEMBNFLAA_MCCIJFKECAB_OFFSET UNITYSDK_OFFSET(0x15BAFA40)
#define APLEMBNFLAA_MHCDMAFKMKL_OFFSET UNITYSDK_OFFSET(0x15BAF070)
#define APLEMBNFLAA_MKDAOBCAPGB_OFFSET UNITYSDK_OFFSET(0x15BAE010)
#define APLEMBNFLAA_MPJAIPMKKOG_OFFSET UNITYSDK_OFFSET(0x15BAEF70)
#define APLEMBNFLAA_NBCOLCKFCEN_OFFSET UNITYSDK_OFFSET(0x15BB1C80)
#define APLEMBNFLAA_NFCGOPKCBCP_OFFSET UNITYSDK_OFFSET(0x15BAF350)
#define APLEMBNFLAA_OJGKFPAAFAG_OFFSET UNITYSDK_OFFSET(0x15BB1650)
#define APLEMBNFLAA_OPNBILKDEPI_1_OFFSET UNITYSDK_OFFSET(0x15BADA50)
#define APLEMBNFLAA_OPNBILKDEPI_2_OFFSET UNITYSDK_OFFSET(0x15BADB30)
#define APLEMBNFLAA_OPNBILKDEPI_OFFSET UNITYSDK_OFFSET(0x15BAD980)
#define APLEMBNFLAA_PFFHKIBKFDL_OFFSET UNITYSDK_OFFSET(0x15BB01D0)
#define APLEMBNFLAA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x15BB1A30)
#define APLEMBNFLAA_SET_SOURCENAME_OFFSET UNITYSDK_OFFSET(0x15BB1CD0)
#define APLEMBNFLAA_SET_SOURCERADIUSDIRTY_OFFSET UNITYSDK_OFFSET(0x15BAD0E0)
#define APLEMBNFLAA_SET_SOURCERADIUS_OFFSET UNITYSDK_OFFSET(0x15BAD0C0)
#define APLEMBNFLAA_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x15BB1CF0)

inline static constexpr unsigned int APLEMBNFLAA_TypeDefinitionIndex = 73938;

	class APLEMBNFLAA : public ::System::Object
	{
	public:
		::LJFHKAJPFNE* BJPKBELGNCM; // 0x10
		::System::String* _SourceName_k__BackingField; // 0x18
		::System::String* LEGOFEJAHKH; // 0x20
		::GICDNFMMKMN* JEFNAIENBDA; // 0x28
		::NEOBJJIOBFP* _SourceType_k__BackingField; // 0x30
		::HIOOOMIBMDA* PJINAPHDBBA; // 0x38
		::RPG::Client::OpenWorld::Volume* ANOHFNCMLKM; // 0x40
		::LPMONNHABLI LIACFBDAIJA; // 0x48
		::HIOOOMIBMDA* CMAABPCFGLM; // 0x88
		::System::Single _SourceRadius_k__BackingField; // 0x90
		::UnityEngine::Vector3 EHJLIJHHDKM; // 0x94
		::System::Boolean _SourceRadiusDirty_k__BackingField; // 0xA0
		::System::Boolean DHJMIGHBMAL; // 0xA1
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 _Position_k__BackingField; // 0xA4
		// static const ::System::Object HMEFDBKHNLJ; // 0x0
		// static const ::System::String* AHBPNAABBBF; // 0x0
		::System::Void _ctor(::System::String* a1, ::NEOBJJIOBFP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::NEOBJJIOBFP*))((::PBYTE)hIl2Cpp + APLEMBNFLAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1, ::NEOBJJIOBFP* a2, ::RPG::GameCore::AnchorInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::NEOBJJIOBFP*, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + APLEMBNFLAA_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::String* a1, ::NEOBJJIOBFP* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::NEOBJJIOBFP*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + APLEMBNFLAA_CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::System::String* a1, ::NEOBJJIOBFP* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::NEOBJJIOBFP*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + APLEMBNFLAA_CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_4(::LJFHKAJPFNE* a1, ::System::String* a2, ::NEOBJJIOBFP* a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*, ::System::String*, ::NEOBJJIOBFP*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + APLEMBNFLAA_CTOR_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_SourceRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APLEMBNFLAA_GET_SOURCERADIUS_OFFSET))(this);
		}

		::System::Void set_SourceRadius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APLEMBNFLAA_SET_SOURCERADIUS_OFFSET))(this, a1);
		}

		::System::Boolean get_SourceRadiusDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APLEMBNFLAA_GET_SOURCERADIUSDIRTY_OFFSET))(this);
		}

		::System::Void set_SourceRadiusDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APLEMBNFLAA_SET_SOURCERADIUSDIRTY_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLEMBNFLAA_DISPOSE_OFFSET))(this);
		}

		::System::Void OPNBILKDEPI(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + APLEMBNFLAA_OPNBILKDEPI_OFFSET))(this, a1);
		}

		::System::Void OPNBILKDEPI_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + APLEMBNFLAA_OPNBILKDEPI_1_OFFSET))(this, a1);
		}

		::System::Void OPNBILKDEPI_2(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + APLEMBNFLAA_OPNBILKDEPI_2_OFFSET))(this, a1);
		}

		::System::Void IBHOCIMCAJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLEMBNFLAA_IBHOCIMCAJL_OFFSET))(this);
		}

		::System::Void MKDAOBCAPGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLEMBNFLAA_MKDAOBCAPGB_OFFSET))(this);
		}

		::APLEMBNFLAA* LOMPEGEDDDM(::System::String* a1, ::UnityEngine::Vector3 a2, ::NEOBJJIOBFP* a3)
		{
			return ((::APLEMBNFLAA*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::NEOBJJIOBFP*))((::PBYTE)hIl2Cpp + APLEMBNFLAA_LOMPEGEDDDM_OFFSET))(this, a1, a2, a3);
		}

		::APLEMBNFLAA* LOMPEGEDDDM_1(::System::String* a1, ::RPG::GameCore::AnchorInfo* a2, ::NEOBJJIOBFP* a3)
		{
			return ((::APLEMBNFLAA*(*)(::PVOID, ::System::String*, ::RPG::GameCore::AnchorInfo*, ::NEOBJJIOBFP*))((::PBYTE)hIl2Cpp + APLEMBNFLAA_LOMPEGEDDDM_1_OFFSET))(this, a1, a2, a3);
		}

		::APLEMBNFLAA* LOMPEGEDDDM_2(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::NEOBJJIOBFP* a3)
		{
			return ((::APLEMBNFLAA*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::NEOBJJIOBFP*))((::PBYTE)hIl2Cpp + APLEMBNFLAA_LOMPEGEDDDM_2_OFFSET))(this, a1, a2, a3);
		}

		::APLEMBNFLAA* LOMPEGEDDDM_3(::System::String* a1, ::UnityEngine::Camera* a2, ::NEOBJJIOBFP* a3)
		{
			return ((::APLEMBNFLAA*(*)(::PVOID, ::System::String*, ::UnityEngine::Camera*, ::NEOBJJIOBFP*))((::PBYTE)hIl2Cpp + APLEMBNFLAA_LOMPEGEDDDM_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MPJAIPMKKOG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + APLEMBNFLAA_MPJAIPMKKOG_OFFSET))(this, a1);
		}

		::System::Void MHCDMAFKMKL(::NEOBJJIOBFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEOBJJIOBFP*))((::PBYTE)hIl2Cpp + APLEMBNFLAA_MHCDMAFKMKL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::APLEMBNFLAA*>* NFCGOPKCBCP(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::IList_1<::APLEMBNFLAA*>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + APLEMBNFLAA_NFCGOPKCBCP_OFFSET))(this, a1, a2);
		}

		::System::Boolean FJGELBCACEK(::KLEFGGIHGMI* a1, ::System::Nullable* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLEFGGIHGMI*, ::System::Nullable*))((::PBYTE)hIl2Cpp + APLEMBNFLAA_FJGELBCACEK_OFFSET))(this, a1, a2);
		}

		::System::Void LNGKNPJIOML(::GDMONJOAKHD* a1, ::UnityEngine::Vector2 a2, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a3, ::System::Boolean a4, ::OIDDJJLHGKO* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::GDMONJOAKHD*, ::UnityEngine::Vector2, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean, ::OIDDJJLHGKO*, ::System::Boolean))((::PBYTE)hIl2Cpp + APLEMBNFLAA_LNGKNPJIOML_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Single PFFHKIBKFDL(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::PMLOPPBCMKB* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Boolean a5)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::PMLOPPBCMKB*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + APLEMBNFLAA_PFFHKIBKFDL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single DCCGPCKBCCH(::System::Int32 a1, ::PMLOPPBCMKB* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::PMLOPPBCMKB*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + APLEMBNFLAA_DCCGPCKBCCH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single ACKIPEPLMAO(::INCHEAIJPMD* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Single(*)(::PVOID, ::INCHEAIJPMD*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + APLEMBNFLAA_ACKIPEPLMAO_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 IGJIFHJEBNN(::INCHEAIJPMD* a1, ::UnityEngine::Vector2 a2, ::PMLOPPBCMKB* a3, ::AAODEOPMKBD* a4, ::System::Boolean a5, ::RPG::Client::OpenWorld::StreamingItemData* a6, ::System::Int32 a7, ::System::Boolean a8)
		{
			return ((::System::Int32(*)(::PVOID, ::INCHEAIJPMD*, ::UnityEngine::Vector2, ::PMLOPPBCMKB*, ::AAODEOPMKBD*, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + APLEMBNFLAA_IGJIFHJEBNN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Int32 IAHNNGLIBFB(::System::Int32 a1, ::INCHEAIJPMD* a2, ::UnityEngine::Vector2 a3, ::PMLOPPBCMKB* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5, ::RPG::Client::OpenWorld::StreamingItemData* a6, ::System::Boolean a7)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::INCHEAIJPMD*, ::UnityEngine::Vector2, ::PMLOPPBCMKB*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + APLEMBNFLAA_IAHNNGLIBFB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 OJGKFPAAFAG(::System::Int32 a1, ::INCHEAIJPMD* a2, ::PMLOPPBCMKB* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::INCHEAIJPMD*, ::PMLOPPBCMKB*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + APLEMBNFLAA_OJGKFPAAFAG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + APLEMBNFLAA_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + APLEMBNFLAA_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds MCCIJFKECAB()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + APLEMBNFLAA_MCCIJFKECAB_OFFSET))(this);
		}

		::System::Boolean COKHKLPIJPO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APLEMBNFLAA_COKHKLPIJPO_OFFSET))(this);
		}

		::System::Boolean EBONOEDPPFL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APLEMBNFLAA_EBONOEDPPFL_OFFSET))(this);
		}

		::UnityEngine::Camera* NBCOLCKFCEN()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + APLEMBNFLAA_NBCOLCKFCEN_OFFSET))(this);
		}

		::System::Void CMKGMFMKADN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLEMBNFLAA_CMKGMFMKADN_OFFSET))(this);
		}

		::System::String* get_SourceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APLEMBNFLAA_GET_SOURCENAME_OFFSET))(this);
		}

		::System::Void set_SourceName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + APLEMBNFLAA_SET_SOURCENAME_OFFSET))(this, a1);
		}

		::NEOBJJIOBFP* get_SourceType()
		{
			return ((::NEOBJJIOBFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + APLEMBNFLAA_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::NEOBJJIOBFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEOBJJIOBFP*))((::PBYTE)hIl2Cpp + APLEMBNFLAA_SET_SOURCETYPE_OFFSET))(this, a1);
		}

		::HIOOOMIBMDA* FFFIJKDGNFB()
		{
			return ((::HIOOOMIBMDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + APLEMBNFLAA_FFFIJKDGNFB_OFFSET))(this);
		}

		::HIOOOMIBMDA* IMANKFPCBGB(::System::Boolean a1)
		{
			return ((::HIOOOMIBMDA*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APLEMBNFLAA_IMANKFPCBGB_OFFSET))(this, a1);
		}

	};
