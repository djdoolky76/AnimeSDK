#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNNIFBHNPDI_CGCCCMOCCHN_OFFSET UNITYSDK_OFFSET(0x158862A0)
#define FNNIFBHNPDI_CTOR_OFFSET UNITYSDK_OFFSET(0x158861C0)
#define FNNIFBHNPDI_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x15886230)

inline static constexpr unsigned int FNNIFBHNPDI_TypeDefinitionIndex = 67058;

	class FNNIFBHNPDI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* ACFCJFLAFJO; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FNNIFBHNPDI_CTOR_OFFSET))(this, a1);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNIFBHNPDI_TRIGGERACTION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* CGCCCMOCCHN()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNIFBHNPDI_CGCCCMOCCHN_OFFSET))(this);
		}

	};
