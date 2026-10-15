#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/ClosureEvent_2.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define GHCBKKDBMMG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA73B10)
#define GHCBKKDBMMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA73D60)
#define GHCBKKDBMMG_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA73BD0)
#define GHCBKKDBMMG_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA73CB0)

inline static constexpr unsigned int GHCBKKDBMMG_TypeDefinitionIndex = 43518;

	class GHCBKKDBMMG : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::Int32>* NGMNLMKOIID; // 0x10
		::System::String* NIKBDNEFPLM; // 0x18
		::RPG::GCFreeClosure::ClosureEvent_2<::HIOEAKHGILF*, ::RPG::GameCore::FiveDimLightningStateType> HGOJNFKDIMA; // 0x20
		::System::Byte _padding0[0x8];
		::RPG::PoolHashSet_1<::System::Int32>* IDOGNEJAOHB; // 0x30
		::UnityEngine::Vector3 LABGPOKAGGP; // 0x38
		::System::Single LEPNPMEIMGA; // 0x44
		::RPG::GameCore::FiveDimLightningStateType MEPFOEEGBEA; // 0x48
		::System::Single IPPAHGAPEPM; // 0x4C
		::UnityEngine::Vector3 LAEIEFCAKEA; // 0x50
		::UnityEngine::Vector3 OABOILKIDKJ; // 0x5C
		::System::Single CBFDCMECCEJ; // 0x68
		::System::Boolean IPKICAFDKEP; // 0x6C
		::System::Boolean GAINHDAKKBE; // 0x6D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCBKKDBMMG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCBKKDBMMG_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCBKKDBMMG_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCBKKDBMMG_ONRECYCLE_OFFSET))(this);
		}

	};
