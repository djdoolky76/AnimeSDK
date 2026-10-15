#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACOIJGAHAHK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define KBBKFFAEGEO_CTOR_OFFSET UNITYSDK_OFFSET(0xB2ED9D0)
#define KBBKFFAEGEO_HFFPCELHKHK_OFFSET UNITYSDK_OFFSET(0xB2ED8E0)
#define KBBKFFAEGEO_KCADNHNCLKP_OFFSET UNITYSDK_OFFSET(0xB2ED610)
#define KBBKFFAEGEO_NINHJDBHBDE_OFFSET UNITYSDK_OFFSET(0xB2ED550)

inline static constexpr unsigned int KBBKFFAEGEO_TypeDefinitionIndex = 74993;

	class KBBKFFAEGEO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ACOIJGAHAHK*>* LJFGOENLCKD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBKFFAEGEO_CTOR_OFFSET))(this);
		}

		::ACOIJGAHAHK* NINHJDBHBDE(::System::UInt32 a1)
		{
			return ((::ACOIJGAHAHK*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBBKFFAEGEO_NINHJDBHBDE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::ACOIJGAHAHK*>* HFFPCELHKHK()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::ACOIJGAHAHK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBKFFAEGEO_HFFPCELHKHK_OFFSET))(this);
		}

		::System::Void KCADNHNCLKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBKFFAEGEO_KCADNHNCLKP_OFFSET))(this);
		}

	};
