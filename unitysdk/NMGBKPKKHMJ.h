#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDNBNNIBDNF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMGBKPKKHMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC56B310)
#define NMGBKPKKHMJ_HHNFFFMBIKD_OFFSET UNITYSDK_OFFSET(0xC56AC70)
#define NMGBKPKKHMJ_KIGOLLCCOJM_OFFSET UNITYSDK_OFFSET(0xC56AB30)

inline static constexpr unsigned int NMGBKPKKHMJ_TypeDefinitionIndex = 77162;

	class NMGBKPKKHMJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::CDNBNNIBDNF*>* BDBOGJHLEIG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGBKPKKHMJ_CTOR_OFFSET))(this);
		}

		::CDNBNNIBDNF* KIGOLLCCOJM(::System::UInt32 a1)
		{
			return ((::CDNBNNIBDNF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMGBKPKKHMJ_KIGOLLCCOJM_OFFSET))(this, a1);
		}

		::System::Void HHNFFFMBIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGBKPKKHMJ_HHNFFFMBIKD_OFFSET))(this);
		}

	};
