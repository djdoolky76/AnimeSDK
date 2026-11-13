#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKADHMMGGNA.h"

#define EADABGHLCIG_CTOR_OFFSET UNITYSDK_OFFSET(0x181C7520)
#define EADABGHLCIG_EGFNIMCFKJN_OFFSET UNITYSDK_OFFSET(0x181C7480)
#define EADABGHLCIG_GET_BEHIT_OFFSET UNITYSDK_OFFSET(0x181C7500)
#define EADABGHLCIG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x181C73E0)
#define EADABGHLCIG_LLFBKAADOGN_OFFSET UNITYSDK_OFFSET(0x181C74C0)
#define EADABGHLCIG_SET_BEHIT_OFFSET UNITYSDK_OFFSET(0x181C7510)

inline static constexpr unsigned int EADABGHLCIG_TypeDefinitionIndex = 81291;

	class EADABGHLCIG : public ::MKADHMMGGNA
	{
	public:
		::System::Boolean _BeHit_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADABGHLCIG_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADABGHLCIG_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void LLFBKAADOGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADABGHLCIG_LLFBKAADOGN_OFFSET))(this);
		}

		::System::Void EGFNIMCFKJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADABGHLCIG_EGFNIMCFKJN_OFFSET))(this);
		}

		::System::Boolean get_BeHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EADABGHLCIG_GET_BEHIT_OFFSET))(this);
		}

		::System::Void set_BeHit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EADABGHLCIG_SET_BEHIT_OFFSET))(this, a1);
		}

	};
