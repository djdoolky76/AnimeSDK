#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFCDFGIAEAP.h"
#include "unitysdk/System/Object.h"
class AJJMGKHEBFH;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define JJGKFBDCPFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D1B60)
#define JJGKFBDCPFB_FDLGBOENEOH_OFFSET UNITYSDK_OFFSET(0x1C6D1AC0)
#define JJGKFBDCPFB_LLCOJMAGPAL_OFFSET UNITYSDK_OFFSET(0x1C6D1A20)
#define JJGKFBDCPFB_LLLKMJCJNFN_OFFSET UNITYSDK_OFFSET(0x1C6D1B00)

inline static constexpr unsigned int JJGKFBDCPFB_TypeDefinitionIndex = 36873;

	class JJGKFBDCPFB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::MFCDFGIAEAP>* BDLAJDOCFNL; // 0x10
		// static const ::System::Object BLFAGNMEFEG; // 0x0
		// static const ::System::Object CBOJNPBFMGO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGKFBDCPFB_CTOR_OFFSET))(this);
		}

		::System::Boolean LLCOJMAGPAL(::AJJMGKHEBFH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJJMGKHEBFH*))((::PBYTE)hIl2Cpp + JJGKFBDCPFB_LLCOJMAGPAL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Queue_1<::MFCDFGIAEAP>* FDLGBOENEOH()
		{
			return ((::System::Collections::Generic::Queue_1<::MFCDFGIAEAP>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGKFBDCPFB_FDLGBOENEOH_OFFSET))(this);
		}

		::System::Boolean LLLKMJCJNFN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGKFBDCPFB_LLLKMJCJNFN_OFFSET))(this);
		}

	};
