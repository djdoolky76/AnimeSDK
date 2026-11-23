#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F7247FF061AD3413;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F32611033A90F0A6_AFE672ABEBA3F318_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F32611033A90F0A6_B15B2BAE07F7C232_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define F32611033A90F0A6_E8E8CACA01BA51FA_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F32611033A90F0A6_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2407B10)
#define F32611033A90F0A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F32611033A90F0A6_TypeDefinitionIndex = 4051;

class F32611033A90F0A6 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F7247FF061AD3413*>* BB11DCF356986AD5; // 0x10

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F7247FF061AD3413*>* E8E8CACA01BA51FA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F7247FF061AD3413*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F32611033A90F0A6_E8E8CACA01BA51FA_OFFSET))(this);
	}

	::System::Void AFE672ABEBA3F318(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F7247FF061AD3413*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F7247FF061AD3413*>*))((::PBYTE)hIl2Cpp + F32611033A90F0A6_AFE672ABEBA3F318_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::UInt32 B15B2BAE07F7C232(::F7247FF061AD3413* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::F7247FF061AD3413*))((::PBYTE)hIl2Cpp + F32611033A90F0A6_B15B2BAE07F7C232_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F32611033A90F0A6__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F32611033A90F0A6*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F32611033A90F0A6*&))((::PBYTE)hIl2Cpp + F32611033A90F0A6_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
