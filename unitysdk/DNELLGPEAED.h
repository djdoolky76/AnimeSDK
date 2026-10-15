#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOHPODHIAA.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class PEEDLCHFAFL;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define DNELLGPEAED_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA009F0)
#define DNELLGPEAED_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA00FC0)
#define DNELLGPEAED_FBNDHBBKGCJ_OFFSET UNITYSDK_OFFSET(0x1CA00B70)
#define DNELLGPEAED_MLJLMOFIJFL_OFFSET UNITYSDK_OFFSET(0x1CA00C10)
#define DNELLGPEAED_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA008D0)

inline static constexpr unsigned int DNELLGPEAED_TypeDefinitionIndex = 43542;

	class DNELLGPEAED : public ::NOOHPODHIAA
	{
	public:
		::RPG::PoolHashSet_1<::UnityEngine::Collider*>* NILFBBGIHGI; // 0x338
		::RPG::PoolList_1<::UnityEngine::Collision*>* KNEONECEFKK; // 0x340
		::RPG::PoolHashSet_1<::System::Int32>* NCIHCMEFKMP; // 0x348
		::System::Single IDNCONEOKKD; // 0x350
		::System::Nullable_1<::UnityEngine::RaycastHit> ALAGENDAJLE; // 0x354
		::System::Byte _padding0[0x2C];
		::System::Single NMPMMIAKFMO; // 0x388
		::System::Nullable_1<::UnityEngine::RaycastHit> NGKIHMLBGLE; // 0x38C
		::System::Byte _padding1[0x2C];
		::System::Single GPGIEFKLNKA; // 0x3C0
		::System::Single MHPMADJGBJB; // 0x3C4
		::System::Nullable_1<::UnityEngine::RaycastHit> KFFFAJEEKGI; // 0x3C8
		::System::Byte _padding2[0x2C];
		::System::Int32 HMGBOLNBDGA; // 0x3FC
		::System::Boolean IHLODLNFJKK; // 0x400
		::System::Boolean LHGOBGNNGFC; // 0x401
		::System::Boolean BNAPGMEKLHB; // 0x402
		::System::Byte _padding3[0x1];
		::UnityEngine::Vector3 KEJAHHOADEC; // 0x404
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNELLGPEAED_CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNELLGPEAED_ONALLOC_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNELLGPEAED_CLEAR_OFFSET))(this);
		}

		::System::Void FBNDHBBKGCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNELLGPEAED_FBNDHBBKGCJ_OFFSET))(this);
		}

		::System::Void MLJLMOFIJFL(::PEEDLCHFAFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + DNELLGPEAED_MLJLMOFIJFL_OFFSET))(this, a1);
		}

	};
