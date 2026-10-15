#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOHPODHIAA.h"
#include "unitysdk/UnityEngine/Vector3.h"
class PEEDLCHFAFL;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace UnityEngine { class Collider; }

#define EFKHNCOGKGH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA4A520)
#define EFKHNCOGKGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA4A990)
#define EFKHNCOGKGH_MLJLMOFIJFL_OFFSET UNITYSDK_OFFSET(0x1CA4A5E0)
#define EFKHNCOGKGH_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA4A400)

	class EFKHNCOGKGH : public ::NOOHPODHIAA
	{
	public:
		::RPG::PoolHashSet_1<::System::Int32>* NCIHCMEFKMP; // 0x338
		::RPG::PoolHashSet_1<::UnityEngine::Collider*>* NILFBBGIHGI; // 0x340
		::System::Boolean OCPOPEDLBBI; // 0x348
		::System::Boolean FKDDHNAOOHJ; // 0x349
		::System::Byte _padding0[0x2];
		::System::Single GPGIEFKLNKA; // 0x34C
		::System::Single MFALMACPJPJ; // 0x350
		::UnityEngine::Vector3 KEJAHHOADEC; // 0x354
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKHNCOGKGH_CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKHNCOGKGH_ONALLOC_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKHNCOGKGH_CLEAR_OFFSET))(this);
		}

		::System::Void MLJLMOFIJFL(::PEEDLCHFAFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + EFKHNCOGKGH_MLJLMOFIJFL_OFFSET))(this, a1);
		}

	};
