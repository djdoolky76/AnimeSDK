#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOHPODHIAA.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class PEEDLCHFAFL;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class Nullable; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define DNELLGPEAED_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA2F0C0)
#define DNELLGPEAED_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2F6B0)
#define DNELLGPEAED_FBNDHBBKGCJ_OFFSET UNITYSDK_OFFSET(0x1CA2F250)
#define DNELLGPEAED_MLJLMOFIJFL_OFFSET UNITYSDK_OFFSET(0x1CA2F300)
#define DNELLGPEAED_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA2EFA0)

	class DNELLGPEAED : public ::NOOHPODHIAA
	{
	public:
		::RPG::PoolHashSet_1<::UnityEngine::Collider*>* NILFBBGIHGI; // 0x338
		::RPG::PoolList_1<::UnityEngine::Collision*>* KNEONECEFKK; // 0x340
		::RPG::PoolHashSet_1<::System::Int32>* NCIHCMEFKMP; // 0x348
		::System::Nullable* KFFFAJEEKGI; // 0x350
		::System::Byte _padding0[0x2C];
		::UnityEngine::Vector3 KEJAHHOADEC; // 0x384
		::System::Single NMPMMIAKFMO; // 0x390
		::System::Single MHPMADJGBJB; // 0x394
		::System::Boolean BNAPGMEKLHB; // 0x398
		::System::Boolean LHGOBGNNGFC; // 0x399
		::System::Boolean IHLODLNFJKK; // 0x39A
		::System::Byte _padding1[0x1];
		::System::Int32 HMGBOLNBDGA; // 0x39C
		::System::Single GPGIEFKLNKA; // 0x3A0
		::System::Nullable* NGKIHMLBGLE; // 0x3A4
		::System::Byte _padding2[0x2C];
		::System::Nullable* ALAGENDAJLE; // 0x3D8
		::System::Byte _padding3[0x2C];
		::System::Single IDNCONEOKKD; // 0x40C
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
