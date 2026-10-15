#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPAGJNNOMM_VCameraType.h"
#include "unitysdk/System/Object.h"
class BPMLCFOHMDB;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGAJFEPPGLD_CTOR_OFFSET UNITYSDK_OFFSET(0xB685310)
#define LGAJFEPPGLD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB685390)
#define LGAJFEPPGLD_FFPNHDPLHJB_OFFSET UNITYSDK_OFFSET(0xB6856B0)

inline static constexpr unsigned int LGAJFEPPGLD_TypeDefinitionIndex = 69750;

	class LGAJFEPPGLD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::BPMLCFOHMDB*>*>* BHLMIOABCON; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAJFEPPGLD_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAJFEPPGLD_DISPOSE_OFFSET))(this);
		}

		::BPMLCFOHMDB* FFPNHDPLHJB(::BHPAGJNNOMM_VCameraType a1)
		{
			return ((::BPMLCFOHMDB*(*)(::PVOID, ::BHPAGJNNOMM_VCameraType))((::PBYTE)hIl2Cpp + LGAJFEPPGLD_FFPNHDPLHJB_OFFSET))(this, a1);
		}

	};
