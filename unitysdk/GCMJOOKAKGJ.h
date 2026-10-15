#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNECPMMFEKP.h"
#include "unitysdk/System/Object.h"
class AMKBFMCOIHK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GCMJOOKAKGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15984E30)
#define GCMJOOKAKGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15984B40)
#define GCMJOOKAKGJ_MBEAHOPNLIE_OFFSET UNITYSDK_OFFSET(0x15984BE0)
#define GCMJOOKAKGJ_MEMAEAKDBIG_OFFSET UNITYSDK_OFFSET(0x15984D40)

	class GCMJOOKAKGJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JNECPMMFEKP>* CJKMCPJEDKJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMJOOKAKGJ_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMJOOKAKGJ_DISPOSE_OFFSET))(this);
		}

		::System::Void MBEAHOPNLIE(::AMKBFMCOIHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMKBFMCOIHK*))((::PBYTE)hIl2Cpp + GCMJOOKAKGJ_MBEAHOPNLIE_OFFSET))(this, a1);
		}

		::JNECPMMFEKP MEMAEAKDBIG(::System::UInt32 a1)
		{
			return ((::JNECPMMFEKP(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCMJOOKAKGJ_MEMAEAKDBIG_OFFSET))(this, a1);
		}

	};
