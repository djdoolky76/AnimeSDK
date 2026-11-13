#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNLEMEHLPDI;

#define FNLEMEHLPDI_MOBLFLGJMFM_CTOR_OFFSET UNITYSDK_OFFSET(0x17F25EE0)
#define FNLEMEHLPDI_MOBLFLGJMFM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F26550)
#define FNLEMEHLPDI_MOBLFLGJMFM_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x17F264D0)
#define FNLEMEHLPDI_MOBLFLGJMFM_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x17F26510)

inline static constexpr unsigned int FNLEMEHLPDI_MOBLFLGJMFM_TypeDefinitionIndex = 58719;

	class FNLEMEHLPDI_MOBLFLGJMFM : public ::System::Object
	{
	public:
		::FNLEMEHLPDI* KCONLBKIGHD; // 0x10
		::System::Void _ctor(::FNLEMEHLPDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNLEMEHLPDI*))((::PBYTE)hIl2Cpp + FNLEMEHLPDI_MOBLFLGJMFM_CTOR_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLEMEHLPDI_MOBLFLGJMFM_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void OPCKNBHNBOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLEMEHLPDI_MOBLFLGJMFM_OPCKNBHNBOA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLEMEHLPDI_MOBLFLGJMFM_DISPOSE_OFFSET))(this);
		}

	};
