#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNMIBEFPHNF.h"
class PIIOAKOEACN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JHHOPDBLDEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C535630)
#define JHHOPDBLDEG_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x1C535AC0)
#define JHHOPDBLDEG_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1C535900)
#define JHHOPDBLDEG_NCLOMPDLJPB_OFFSET UNITYSDK_OFFSET(0x1C535940)

inline static constexpr unsigned int JHHOPDBLDEG_TypeDefinitionIndex = 41760;

	class JHHOPDBLDEG : public ::BNMIBEFPHNF
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* OKFHNMEFELI; // 0x18
		::System::Int32 COEMCOBPMKD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHOPDBLDEG_CTOR_OFFSET))(this);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHOPDBLDEG_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Boolean NCLOMPDLJPB(::PIIOAKOEACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + JHHOPDBLDEG_NCLOMPDLJPB_OFFSET))(this, a1);
		}

		::System::Boolean EDBDAAKMDFI(::PIIOAKOEACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + JHHOPDBLDEG_EDBDAAKMDFI_OFFSET))(this, a1);
		}

	};
