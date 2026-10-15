#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGEPFHILKPM;
class KNHCNPDALBB;
class NKFJNBDNEJA;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define BKCDGPCNDNN_AGCMADLIKOJ_OFFSET UNITYSDK_OFFSET(0xB7ACF50)
#define BKCDGPCNDNN_CTOR_OFFSET UNITYSDK_OFFSET(0xB7ACEC0)
#define BKCDGPCNDNN_GMCFMKCBCBN_OFFSET UNITYSDK_OFFSET(0xB7ACED0)

inline static constexpr unsigned int BKCDGPCNDNN_TypeDefinitionIndex = 80151;

	class BKCDGPCNDNN : public ::System::Object
	{
	public:
		::DGEPFHILKPM* OMLAHOMDEID; // 0x10
		::NKFJNBDNEJA* CEFLLELKFOP; // 0x18
		::System::Void _ctor(::DGEPFHILKPM* a1, ::NKFJNBDNEJA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DGEPFHILKPM*, ::NKFJNBDNEJA*))((::PBYTE)hIl2Cpp + BKCDGPCNDNN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* GMCFMKCBCBN()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCDGPCNDNN_GMCFMKCBCBN_OFFSET))(this);
		}

		::KNHCNPDALBB* AGCMADLIKOJ(::System::UInt32 a1)
		{
			return ((::KNHCNPDALBB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKCDGPCNDNN_AGCMADLIKOJ_OFFSET))(this, a1);
		}

	};
