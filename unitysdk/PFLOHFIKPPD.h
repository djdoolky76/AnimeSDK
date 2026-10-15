#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGGNBCHLCKH.h"
#include "unitysdk/System/Object.h"
class JFJPIJJDNDC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PFLOHFIKPPD_CTOR_OFFSET UNITYSDK_OFFSET(0xC217730)
#define PFLOHFIKPPD_EPGCJEFJCBA_OFFSET UNITYSDK_OFFSET(0xC217470)
#define PFLOHFIKPPD_HKBMFGJCBKD_OFFSET UNITYSDK_OFFSET(0xC2176A0)
#define PFLOHFIKPPD_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC217300)
#define PFLOHFIKPPD_NIDJAOOIODC_OFFSET UNITYSDK_OFFSET(0xC216E00)
#define PFLOHFIKPPD_PECFLDGGMFF_OFFSET UNITYSDK_OFFSET(0xC2171A0)

inline static constexpr unsigned int PFLOHFIKPPD_TypeDefinitionIndex = 56859;

	class PFLOHFIKPPD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::OGGNBCHLCKH, ::System::Collections::Generic::List_1<::System::UInt32>*>* IGMHOHHNNLE; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OGGNBCHLCKH>* DHHOMCHEIFF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLOHFIKPPD_CTOR_OFFSET))(this);
		}

		::System::Boolean NIDJAOOIODC(::System::Collections::Generic::IList_1<::JFJPIJJDNDC*>* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::JFJPIJJDNDC*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PFLOHFIKPPD_NIDJAOOIODC_OFFSET))(this, a1, a2);
		}

		::System::Boolean PECFLDGGMFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLOHFIKPPD_PECFLDGGMFF_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLOHFIKPPD_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void EPGCJEFJCBA(::OGGNBCHLCKH a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::OGGNBCHLCKH, ::System::UInt32))((::PBYTE)hIl2Cpp + PFLOHFIKPPD_EPGCJEFJCBA_OFFSET))(this, a1, a2);
		}

		::System::Boolean HKBMFGJCBKD(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFLOHFIKPPD_HKBMFGJCBKD_OFFSET))(this, a1);
		}

	};
