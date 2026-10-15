#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPEBLEKDAGI.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KDFFHMDFALG;
class NNDAJDLAHNC;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class RotatableRegion; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define FBLPLPCCCNN_CGNFJINIMDN_OFFSET UNITYSDK_OFFSET(0x156A33F0)
#define FBLPLPCCCNN_CTOR_OFFSET UNITYSDK_OFFSET(0x156A4FF0)
#define FBLPLPCCCNN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156A4270)
#define FBLPLPCCCNN_EHKBGHNBEKC_OFFSET UNITYSDK_OFFSET(0x156A4DA0)
#define FBLPLPCCCNN_EMDBDCAAMIA_OFFSET UNITYSDK_OFFSET(0x156A4B80)
#define FBLPLPCCCNN_GMFLBBGMKFD_OFFSET UNITYSDK_OFFSET(0x156A4730)
#define FBLPLPCCCNN_IBACBJGEABH_OFFSET UNITYSDK_OFFSET(0x156A3800)
#define FBLPLPCCCNN_IBFGLBPJOII_OFFSET UNITYSDK_OFFSET(0x156A39D0)
#define FBLPLPCCCNN_IDINOEAJPJD_OFFSET UNITYSDK_OFFSET(0x156A4D00)
#define FBLPLPCCCNN_KBNOBPOIPDC_OFFSET UNITYSDK_OFFSET(0x156A4AA0)
#define FBLPLPCCCNN_LJAOGDEEEAG_OFFSET UNITYSDK_OFFSET(0x156A4440)
#define FBLPLPCCCNN_LOFALIHJHAG_OFFSET UNITYSDK_OFFSET(0x156A4610)
#define FBLPLPCCCNN_MDKKNDBDNNH_OFFSET UNITYSDK_OFFSET(0x156A4320)
#define FBLPLPCCCNN_MKOMFIOLJJD_OFFSET UNITYSDK_OFFSET(0x156A35E0)
#define FBLPLPCCCNN_OHKKNAPILAN_OFFSET UNITYSDK_OFFSET(0x156A49A0)
#define FBLPLPCCCNN_OKHGJOHJFJN_OFFSET UNITYSDK_OFFSET(0x156A4A40)
#define FBLPLPCCCNN_PBHCOGMEFJK_OFFSET UNITYSDK_OFFSET(0x156A4930)
#define FBLPLPCCCNN_PNBCCHFNDAG_OFFSET UNITYSDK_OFFSET(0x156A4BD0)
#define FBLPLPCCCNN___LOADANCHORPREFABASYNC_B__13_0_OFFSET UNITYSDK_OFFSET(0x156A5000)

inline static constexpr unsigned int FBLPLPCCCNN_TypeDefinitionIndex = 60594;

	class FBLPLPCCCNN : public ::NPEBLEKDAGI
	{
	public:
		::RPG::Client::MapRotationInfo* OCDIENNPEDA; // 0x10
		::RPG::Client::IAssetOperation* DHBHOJLOIKL; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AnchorInfo*>* JKMFFFPBIFF; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AnchorInfo*>* GAIBNIMFGIG; // 0x28
		::KDFFHMDFALG* KGCNPIEDOCA; // 0x30
		::UnityEngine::Object* LHFJFAIKNEK; // 0x38
		::RPG::Client::MapDef* KKKADHHBMLD; // 0x40
		::UnityEngine::GameObject* BGBBKDAONKM; // 0x48
		::UnityEngine::Transform* KJFFDOFKNEG; // 0x50
		::UnityEngine::Transform* PKBIFDKKOEN; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_CTOR_OFFSET))(this);
		}

		::System::Void CGNFJINIMDN(::KDFFHMDFALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFFHMDFALG*))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_CGNFJINIMDN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AnchorInfo* MDKKNDBDNNH(::System::String* a1)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_MDKKNDBDNNH_OFFSET))(this, a1);
		}

		::RPG::GameCore::AnchorInfo* LJAOGDEEEAG(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_LJAOGDEEEAG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LOFALIHJHAG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_LOFALIHJHAG_OFFSET))(this, a1);
		}

		::RPG::GameCore::AnchorInfo* GMFLBBGMKFD(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_GMFLBBGMKFD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PBHCOGMEFJK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_PBHCOGMEFJK_OFFSET))(this, a1);
		}

		::System::Void OHKKNAPILAN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_OHKKNAPILAN_OFFSET))(this, a1);
		}

		::System::Void EMDBDCAAMIA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_EMDBDCAAMIA_OFFSET))(this, a1);
		}

		::System::Boolean PNBCCHFNDAG(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_PNBCCHFNDAG_OFFSET))(this, a1);
		}

		::System::Void KBNOBPOIPDC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_KBNOBPOIPDC_OFFSET))(this, a1);
		}

		::System::Void MKOMFIOLJJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_MKOMFIOLJJD_OFFSET))(this);
		}

		::System::Void IBACBJGEABH(::RPG::GameCore::RotatableRegion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RotatableRegion*))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_IBACBJGEABH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* IDINOEAJPJD(::System::String* a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_IDINOEAJPJD_OFFSET))(this, a1);
		}

		::System::Void OKHGJOHJFJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_OKHGJOHJFJN_OFFSET))(this);
		}

		::System::Void EHKBGHNBEKC(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_EHKBGHNBEKC_OFFSET))(this, a1);
		}

		::System::Void IBFGLBPJOII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLPLPCCCNN_IBFGLBPJOII_OFFSET))(this);
		}

		::System::Boolean __LoadAnchorPrefabAsync_b__13_0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + FBLPLPCCCNN___LOADANCHORPREFABASYNC_B__13_0_OFFSET))(this, a1);
		}

	};
