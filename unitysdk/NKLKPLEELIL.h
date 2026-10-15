#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBEOHNNCPDC;
class KAIBIPBBMFD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NKLKPLEELIL_CTOR_OFFSET UNITYSDK_OFFSET(0xBC3C180)
#define NKLKPLEELIL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC3BC80)
#define NKLKPLEELIL_JGMBJKFEDBO_OFFSET UNITYSDK_OFFSET(0xBC3BEF0)
#define NKLKPLEELIL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBC3BB60)
#define NKLKPLEELIL_PAINMANMGHL_OFFSET UNITYSDK_OFFSET(0xBC3BD70)

	class NKLKPLEELIL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KAIBIPBBMFD*>*>* NKAJKEKDCDF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IBEOHNNCPDC*>* APGIEEIDBGM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLKPLEELIL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLKPLEELIL_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLKPLEELIL_DISPOSE_OFFSET))(this);
		}

		::IBEOHNNCPDC* PAINMANMGHL(::System::UInt32 a1)
		{
			return ((::IBEOHNNCPDC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NKLKPLEELIL_PAINMANMGHL_OFFSET))(this, a1);
		}

		::KAIBIPBBMFD* JGMBJKFEDBO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::KAIBIPBBMFD*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NKLKPLEELIL_JGMBJKFEDBO_OFFSET))(this, a1, a2);
		}

	};
