#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class ED82243A115367C1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E217B9665ACD7305_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define E217B9665ACD7305_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24249D0)
#define E217B9665ACD7305_FD66684F5E0EB503_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E217B9665ACD7305_FDBFED13C2C27F3D_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E217B9665ACD7305__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E217B9665ACD7305_TypeDefinitionIndex = 4167;

class E217B9665ACD7305 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ED82243A115367C1*>* F1A903AC58ED4452; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E217B9665ACD7305*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E217B9665ACD7305*&))((::PBYTE)hIl2Cpp + E217B9665ACD7305_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E217B9665ACD7305__CTOR_OFFSET))(this);
	}

	::System::Void FDBFED13C2C27F3D(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ED82243A115367C1*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ED82243A115367C1*>*))((::PBYTE)hIl2Cpp + E217B9665ACD7305_FDBFED13C2C27F3D_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ED82243A115367C1*>* FD66684F5E0EB503()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ED82243A115367C1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E217B9665ACD7305_FD66684F5E0EB503_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::ED82243A115367C1* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::ED82243A115367C1*))((::PBYTE)hIl2Cpp + E217B9665ACD7305_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}
};
