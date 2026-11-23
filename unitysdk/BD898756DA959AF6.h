#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class FCAF3617C2724D6C;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BD898756DA959AF6_AF8F80144D084E64_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define BD898756DA959AF6_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define BD898756DA959AF6_F0364125059AF0B9_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define BD898756DA959AF6_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26178F0)
#define BD898756DA959AF6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BD898756DA959AF6_TypeDefinitionIndex = 5962;

class BD898756DA959AF6 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FCAF3617C2724D6C*>* BCB30734351666DF; // 0x10

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FCAF3617C2724D6C*>* F0364125059AF0B9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FCAF3617C2724D6C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BD898756DA959AF6_F0364125059AF0B9_OFFSET))(this);
	}

	::System::Void AF8F80144D084E64(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FCAF3617C2724D6C*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FCAF3617C2724D6C*>*))((::PBYTE)hIl2Cpp + BD898756DA959AF6_AF8F80144D084E64_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD898756DA959AF6__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BD898756DA959AF6*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BD898756DA959AF6*&))((::PBYTE)hIl2Cpp + BD898756DA959AF6_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::FCAF3617C2724D6C* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::FCAF3617C2724D6C*))((::PBYTE)hIl2Cpp + BD898756DA959AF6_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}
};
