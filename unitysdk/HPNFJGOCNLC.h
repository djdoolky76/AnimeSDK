#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFIILELJGIE;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }

#define HPNFJGOCNLC_BJHJKFKEMJN_OFFSET UNITYSDK_OFFSET(0x15DC85E0)
#define HPNFJGOCNLC_CEKOPDJPBIK_OFFSET UNITYSDK_OFFSET(0x15DC8720)
#define HPNFJGOCNLC_CTOR_OFFSET UNITYSDK_OFFSET(0x15DC8620)
#define HPNFJGOCNLC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DC8A00)
#define HPNFJGOCNLC_IOMICCIPFAC_OFFSET UNITYSDK_OFFSET(0x15DC8B00)

inline static constexpr unsigned int HPNFJGOCNLC_TypeDefinitionIndex = 79561;

	class HPNFJGOCNLC : public ::System::Object
	{
	public:
		::R3::ReactiveProperty_1<::System::Boolean>* KDDCFJMGFIA; // 0x10
		::OFIILELJGIE* JOKBAPFCJFM; // 0x18
		::System::Void _ctor(::OFIILELJGIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFIILELJGIE*))((::PBYTE)hIl2Cpp + HPNFJGOCNLC_CTOR_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* BJHJKFKEMJN()
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPNFJGOCNLC_BJHJKFKEMJN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPNFJGOCNLC_DISPOSE_OFFSET))(this);
		}

		::System::Void IOMICCIPFAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPNFJGOCNLC_IOMICCIPFAC_OFFSET))(this);
		}

		::System::Void CEKOPDJPBIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPNFJGOCNLC_CEKOPDJPBIK_OFFSET))(this);
		}

	};
