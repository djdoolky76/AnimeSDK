#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEPGAKKOHLE;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BKEGIIJENMI_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AFA00)
#define BKEGIIJENMI_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xB7AF9B0)
#define BKEGIIJENMI_GET_PLACEDCHIPS_OFFSET UNITYSDK_OFFSET(0xB7AF9F0)

	class BKEGIIJENMI : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::JEPGAKKOHLE*>* _PlacedChips_k__BackingField; // 0x10
		::System::UInt32 LCCEPJOFIHI; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::JEPGAKKOHLE*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::JEPGAKKOHLE*>*))((::PBYTE)hIl2Cpp + BKEGIIJENMI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_CacheKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEGIIJENMI_GET_CACHEKEY_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::JEPGAKKOHLE*>* get_PlacedChips()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::JEPGAKKOHLE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEGIIJENMI_GET_PLACEDCHIPS_OFFSET))(this);
		}

	};
