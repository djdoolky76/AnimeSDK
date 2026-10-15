#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/ValueTuple.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DOMMIAJFGGF_IMHBALDLAHP_OFFSET UNITYSDK_OFFSET(0x11FF2120)
#define DOMMIAJFGGF_KGLOPGFNBMI_OFFSET UNITYSDK_OFFSET(0x11FF2550)

	class DOMMIAJFGGF : public ::System::Object
	{
	public:
		// static const ::System::Object FLPIGIFAAMH; // 0x0
		static ::System::Numerics::BigInteger IMHBALDLAHP(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DOMMIAJFGGF_IMHBALDLAHP_OFFSET))(a1, a2, a3);
		}

		static ::System::ValueTuple KGLOPGFNBMI(::System::Numerics::BigInteger a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple(*)(::System::Numerics::BigInteger, ::System::Int32))((::PBYTE)hIl2Cpp + DOMMIAJFGGF_KGLOPGFNBMI_OFFSET))(a1, a2);
		}

	};
