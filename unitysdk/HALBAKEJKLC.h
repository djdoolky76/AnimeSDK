#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Numerics/BigInteger.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HALBAKEJKLC_ABPMPOIPPOD_OFFSET UNITYSDK_OFFSET(0x15B79650)
#define HALBAKEJKLC_BMCFNBKFBEH_OFFSET UNITYSDK_OFFSET(0x15B794C0)
#define HALBAKEJKLC_CLEAR_OFFSET UNITYSDK_OFFSET(0x15B79410)
#define HALBAKEJKLC_CTOR_OFFSET UNITYSDK_OFFSET(0x15B79BD0)
#define HALBAKEJKLC_LBJLDANOLNN_OFFSET UNITYSDK_OFFSET(0x15B795C0)

inline static constexpr unsigned int HALBAKEJKLC_TypeDefinitionIndex = 66658;

	class HALBAKEJKLC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* INJIAJBIHCN; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* ANGFOPKGODF; // 0x18
		// static const ::System::Object PIPLDPEOMBI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALBAKEJKLC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALBAKEJKLC_CLEAR_OFFSET))(this);
		}

		::System::Void BMCFNBKFBEH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HALBAKEJKLC_BMCFNBKFBEH_OFFSET))(this, a1, a2);
		}

		::System::Void LBJLDANOLNN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HALBAKEJKLC_LBJLDANOLNN_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger ABPMPOIPPOD(::System::Numerics::BigInteger a1)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + HALBAKEJKLC_ABPMPOIPPOD_OFFSET))(this, a1);
		}

	};
