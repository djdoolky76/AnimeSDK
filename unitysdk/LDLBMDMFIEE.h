#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOHPODHIAA.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collision; }

#define LDLBMDMFIEE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C90CF00)
#define LDLBMDMFIEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90D110)
#define LDLBMDMFIEE_FBNDHBBKGCJ_OFFSET UNITYSDK_OFFSET(0x1C90D060)
#define LDLBMDMFIEE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C90CE00)

inline static constexpr unsigned int LDLBMDMFIEE_TypeDefinitionIndex = 43534;

	class LDLBMDMFIEE : public ::NOOHPODHIAA
	{
	public:
		::RPG::PoolList_1<::UnityEngine::Collision*>* KNEONECEFKK; // 0x338
		::RPG::PoolHashSet_1<::System::Int32>* NCIHCMEFKMP; // 0x340
		::System::Single MHPMADJGBJB; // 0x348
		::UnityEngine::Vector3 KEJAHHOADEC; // 0x34C
		::System::Nullable_1<::UnityEngine::RaycastHit> NGKIHMLBGLE; // 0x358
		::System::Byte _padding0[0x2C];
		::System::Single GPGIEFKLNKA; // 0x38C
		::System::Nullable_1<::UnityEngine::RaycastHit> KFFFAJEEKGI; // 0x390
		::System::Byte _padding1[0x2C];
		::System::Nullable_1<::UnityEngine::RaycastHit> ALAGENDAJLE; // 0x3C4
		::System::Byte _padding2[0x2C];
		::System::Boolean BNAPGMEKLHB; // 0x3F8
		::System::Boolean IHLODLNFJKK; // 0x3F9
		::System::Byte _padding3[0x2];
		::System::Int32 HMGBOLNBDGA; // 0x3FC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLBMDMFIEE_CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLBMDMFIEE_ONALLOC_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLBMDMFIEE_CLEAR_OFFSET))(this);
		}

		::System::Void FBNDHBBKGCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLBMDMFIEE_FBNDHBBKGCJ_OFFSET))(this);
		}

	};
