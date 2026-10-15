#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFPKNIHJJDI.h"
class PIIOAKOEACN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PDMJAIFPCJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C57D510)
#define PDMJAIFPCJE_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x1C57D860)
#define PDMJAIFPCJE_FIGLOLHCHHL_OFFSET UNITYSDK_OFFSET(0x1C57D4B0)
#define PDMJAIFPCJE_NCLOMPDLJPB_OFFSET UNITYSDK_OFFSET(0x1C57D670)

inline static constexpr unsigned int PDMJAIFPCJE_TypeDefinitionIndex = 41768;

	class PDMJAIFPCJE : public ::MFPKNIHJJDI
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* FPHIDLKGMDD; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* EMMGFCKKBPK; // 0x20
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PDMJAIFPCJE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean FIGLOLHCHHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMJAIFPCJE_FIGLOLHCHHL_OFFSET))(this);
		}

		::System::Boolean NCLOMPDLJPB(::PIIOAKOEACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + PDMJAIFPCJE_NCLOMPDLJPB_OFFSET))(this, a1);
		}

		::System::Boolean EDBDAAKMDFI(::PIIOAKOEACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + PDMJAIFPCJE_EDBDAAKMDFI_OFFSET))(this, a1);
		}

	};
