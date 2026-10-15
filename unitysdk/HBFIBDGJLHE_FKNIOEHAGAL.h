#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NIOMJPECGPB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/ClusterIRIType.h"
#include "unitysdk/UnityEngine/ClusterMeshLodInfo.h"
#include "unitysdk/UnityEngine/IRIClusterVolumeInfo.h"
#include "unitysdk/UnityEngine/MeshClusterInfo.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/IRI2/ClusterMeshLodInfo.h"
class HBFIBDGJLHE_GIFMIOMFGNE;
namespace IRIClusterBuilder { class IRI2VolumeTemplate; }
namespace RPG::Client::CityCarFlow { class MonoCityCarIRI; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RPGInstancedItemClusterVolumeManager; }

#define HBFIBDGJLHE_FKNIOEHAGAL_AFBCAPABFKF_OFFSET UNITYSDK_OFFSET(0x15BF10A0)
#define HBFIBDGJLHE_FKNIOEHAGAL_BPHLLDFEHDC_OFFSET UNITYSDK_OFFSET(0x15BF2180)
#define HBFIBDGJLHE_FKNIOEHAGAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15BE78A0)
#define HBFIBDGJLHE_FKNIOEHAGAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BE9400)
#define HBFIBDGJLHE_FKNIOEHAGAL_DNJCPBBAMBJ_OFFSET UNITYSDK_OFFSET(0x15BF3390)
#define HBFIBDGJLHE_FKNIOEHAGAL_EDOGPEOFHBC_OFFSET UNITYSDK_OFFSET(0x15BF0EB0)
#define HBFIBDGJLHE_FKNIOEHAGAL_FDMNDEDEDOD_OFFSET UNITYSDK_OFFSET(0x15BEC1A0)
#define HBFIBDGJLHE_FKNIOEHAGAL_FPAEDGKLCJG_OFFSET UNITYSDK_OFFSET(0x15BF23F0)
#define HBFIBDGJLHE_FKNIOEHAGAL_GEEGAGBBGBB_OFFSET UNITYSDK_OFFSET(0x15BEF4B0)
#define HBFIBDGJLHE_FKNIOEHAGAL_JGNLGCHEBIP_OFFSET UNITYSDK_OFFSET(0x15BEB570)
#define HBFIBDGJLHE_FKNIOEHAGAL_JHPIJNAOABE_OFFSET UNITYSDK_OFFSET(0x15BF0F30)
#define HBFIBDGJLHE_FKNIOEHAGAL_JJMCGJHEANE_OFFSET UNITYSDK_OFFSET(0x15BEC2A0)
#define HBFIBDGJLHE_FKNIOEHAGAL_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15BEB930)
#define HBFIBDGJLHE_FKNIOEHAGAL_PCGDPBEIACL_OFFSET UNITYSDK_OFFSET(0x15BF1BB0)
#define HBFIBDGJLHE_FKNIOEHAGAL_POFJHKPLLAD_OFFSET UNITYSDK_OFFSET(0x15BF2610)

inline static constexpr unsigned int HBFIBDGJLHE_FKNIOEHAGAL_TypeDefinitionIndex = 82174;

	class HBFIBDGJLHE_FKNIOEHAGAL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::ClusterMeshLodInfo>>*>* MLAGMEBJKGJ; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::UnityEngine::ClusterMeshLodInfo>* MENDADODADH; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Unity::Collections::NativeArray_1<::UnityEngine::MeshClusterInfo>>* AHDDAOCIECM; // 0x20
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::HashSet_1<::System::UInt64>*>* IFCOLFODFLG; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Unity::Collections::NativeArray_1<::System::UInt32>>* NEMNGPHGBDF; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>* AABJMDJFFMB; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* LIGKAAJJNBD; // 0x40
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>*>* KKHONILOFEL; // 0x48
		::UnityEngine::RPGInstancedItemClusterVolumeManager* KGCNPIEDOCA; // 0x50
		::NIOMJPECGPB NPBEOCIIAII; // 0x58
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::Unity::Collections::NativeArray_1<::UnityEngine::ClusterIRIType>>* EDAMOPOBBGJ; // 0x68
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::UnityEngine::IRIClusterVolumeInfo>* JICNBIOEPHK; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* CJLEEMAFMKJ; // 0x78
		// static const ::System::String* GDLCKJECIIJ; // 0x0
		// static const ::System::String* GFHCCEOKCMP; // 0x0
		::System::Void _ctor(::RPG::Client::CityCarFlow::MonoCityCarIRI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CityCarFlow::MonoCityCarIRI*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKNIOEHAGAL_CTOR_OFFSET))(this, a1);
		}

		::System::Void EDOGPEOFHBC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKNIOEHAGAL_EDOGPEOFHBC_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKNIOEHAGAL_DISPOSE_OFFSET))(this);
		}

		::System::Void JHPIJNAOABE(::IRIClusterBuilder::IRI2VolumeTemplate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IRIClusterBuilder::IRI2VolumeTemplate*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKNIOEHAGAL_JHPIJNAOABE_OFFSET))(this, a1);
		}

		::System::Void PCGDPBEIACL(::IRIClusterBuilder::IRI2VolumeTemplate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IRIClusterBuilder::IRI2VolumeTemplate*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKNIOEHAGAL_PCGDPBEIACL_OFFSET))(this, a1);
		}

		::System::Void FDMNDEDEDOD(::HBFIBDGJLHE_GIFMIOMFGNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKNIOEHAGAL_FDMNDEDEDOD_OFFSET))(this, a1);
		}

		::System::Void JJMCGJHEANE(::HBFIBDGJLHE_GIFMIOMFGNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKNIOEHAGAL_JJMCGJHEANE_OFFSET))(this, a1);
		}

		::System::Boolean GEEGAGBBGBB(::IRIClusterBuilder::IRI2VolumeTemplate* a1, ::UnityEngine::IRIClusterVolumeInfo a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IRIClusterBuilder::IRI2VolumeTemplate*, ::UnityEngine::IRIClusterVolumeInfo))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKNIOEHAGAL_GEEGAGBBGBB_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKNIOEHAGAL_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void JGNLGCHEBIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKNIOEHAGAL_JGNLGCHEBIP_OFFSET))(this);
		}

		::System::Void FPAEDGKLCJG(::IRIClusterBuilder::IRI2VolumeTemplate* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::UInt64))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKNIOEHAGAL_FPAEDGKLCJG_OFFSET))(this, a1, a2);
		}

		::System::Void BPHLLDFEHDC(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKNIOEHAGAL_BPHLLDFEHDC_OFFSET))(this, a1);
		}

		::UnityEngine::ClusterMeshLodInfo POFJHKPLLAD(::IRI2::ClusterMeshLodInfo a1)
		{
			return ((::UnityEngine::ClusterMeshLodInfo(*)(::PVOID, ::IRI2::ClusterMeshLodInfo))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKNIOEHAGAL_POFJHKPLLAD_OFFSET))(this, a1);
		}

		::UnityEngine::IRIClusterVolumeInfo AFBCAPABFKF(::IRIClusterBuilder::IRI2VolumeTemplate* a1)
		{
			return ((::UnityEngine::IRIClusterVolumeInfo(*)(::PVOID, ::IRIClusterBuilder::IRI2VolumeTemplate*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKNIOEHAGAL_AFBCAPABFKF_OFFSET))(this, a1);
		}

		::UnityEngine::RPGInstancedItemClusterVolumeManager* DNJCPBBAMBJ()
		{
			return ((::UnityEngine::RPGInstancedItemClusterVolumeManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKNIOEHAGAL_DNJCPBBAMBJ_OFFSET))(this);
		}

	};
