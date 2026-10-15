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

#define GHCBKKDBMMG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAA1F80)
#define GHCBKKDBMMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAA21E0)
#define GHCBKKDBMMG_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CAA2050)
#define GHCBKKDBMMG_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CAA2130)

	class GHCBKKDBMMG : public ::System::Object
	{
	public:
		::RPG::PoolHashSet_1<::System::Int32>* IDOGNEJAOHB; // 0x10
		::System::String* NIKBDNEFPLM; // 0x18
		::RPG::GCFreeClosure::ClosureEvent_2<::HIOEAKHGILF*, ::RPG::GameCore::FiveDimLightningStateType> HGOJNFKDIMA; // 0x20
		::System::Byte _padding0[0x8];
		::RPG::PoolList_1<::System::Int32>* NGMNLMKOIID; // 0x30
		::System::Single IPPAHGAPEPM; // 0x38
		::System::Boolean GAINHDAKKBE; // 0x3C
		::System::Boolean IPKICAFDKEP; // 0x3D
		::System::Byte _padding1[0x2];
		::UnityEngine::Vector3 LAEIEFCAKEA; // 0x40
		::UnityEngine::Vector3 OABOILKIDKJ; // 0x4C
		::System::Single LEPNPMEIMGA; // 0x58
		::System::Single CBFDCMECCEJ; // 0x5C
		::RPG::GameCore::FiveDimLightningStateType MEPFOEEGBEA; // 0x60
		::UnityEngine::Vector3 LABGPOKAGGP; // 0x64
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
