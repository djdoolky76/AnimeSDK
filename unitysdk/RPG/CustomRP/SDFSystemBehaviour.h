#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/SDFCompressionMethod.h"
#include "unitysdk/UnityEngine/SDFSectorCoord.h"
namespace RPG::CustomRP { class SDFSystemBehaviour_UInt64StringDict; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace UnityEngine { class SDFSectorData; }
namespace UnityEngine { class SDFStreamingParams; }
namespace UnityEngine { class SDFSystem; }

#define RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_ADBIKLLADHL_OFFSET UNITYSDK_OFFSET(0xEF53120)
#define RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_CCTOR_OFFSET UNITYSDK_OFFSET(0xEF53B20)
#define RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xEF53940)
#define RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_GETSECTORDATASUBPATH_OFFSET UNITYSDK_OFFSET(0xEF53610)
#define RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_GET_SECTORCOORDS_OFFSET UNITYSDK_OFFSET(0xEF538C0)
#define RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_KEPMMNEBKCD_OFFSET UNITYSDK_OFFSET(0xEF52F90)
#define RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_START_OFFSET UNITYSDK_OFFSET(0xEF52F40)
#define RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_UNLOADSECTORDATA_OFFSET UNITYSDK_OFFSET(0xEF53530)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SDFSystemBehaviour_TypeDefinitionIndex = 52954;

	class SDFSystemBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* BakeDataRootPath; // 0x18
		::UnityEngine::SDFCompressionMethod CompressionMethod; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::SDFSystem* LOFMGNCEFCF; // 0x28
		::RPG::CustomRP::SDFSystemBehaviour_UInt64StringDict* _SectorPaths; // 0x30
		::System::Collections::Generic::Dictionary_2<::UnityEngine::SDFSectorCoord, ::UnityEngine::SDFSectorData*>* ALFOOCGEBAI; // 0x38
		static ::System::String** StaticGet_kEmptySectorDataPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.CustomRP", "SDFSystemBehaviour")->GetStaticField(0x594F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_START_OFFSET))(this);
		}

		::System::Void KEPMMNEBKCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_KEPMMNEBKCD_OFFSET))(this);
		}

		::System::Void ADBIKLLADHL(::UnityEngine::SDFStreamingParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SDFStreamingParams*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_ADBIKLLADHL_OFFSET))(this, a1);
		}

		static ::System::String* GetSectorDataSubPath(::UnityEngine::SDFSectorCoord a1)
		{
			return ((::System::String*(*)(::UnityEngine::SDFSectorCoord))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_GETSECTORDATASUBPATH_OFFSET))(a1);
		}

		::System::Void UnloadSectorData(::UnityEngine::SDFSectorData* a1, ::UnityEngine::SDFSectorCoord a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SDFSectorData*, ::UnityEngine::SDFSectorCoord))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_UNLOADSECTORDATA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::ICollection_1<::System::UInt64>* get_SectorCoords()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_GET_SECTORCOORDS_OFFSET))(this);
		}

	};
}
