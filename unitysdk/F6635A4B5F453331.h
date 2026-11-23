#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F8501012BBF1DC7B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F6635A4B5F453331_A0B328AA913AD083_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F6635A4B5F453331_E65D9A92B07B6E17_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F6635A4B5F453331_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define F6635A4B5F453331_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23EACB0)
#define F6635A4B5F453331__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F6635A4B5F453331_TypeDefinitionIndex = 3907;

class F6635A4B5F453331 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F8501012BBF1DC7B*>* A0462B93119BB048; // 0x10

	static ::System::UInt32 EB8DF78C1D71130D(::F8501012BBF1DC7B* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::F8501012BBF1DC7B*))((::PBYTE)hIl2Cpp + F6635A4B5F453331_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F8501012BBF1DC7B*>* E65D9A92B07B6E17()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F8501012BBF1DC7B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F6635A4B5F453331_E65D9A92B07B6E17_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F6635A4B5F453331*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F6635A4B5F453331*&))((::PBYTE)hIl2Cpp + F6635A4B5F453331_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6635A4B5F453331__CTOR_OFFSET))(this);
	}

	::System::Void A0B328AA913AD083(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F8501012BBF1DC7B*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F8501012BBF1DC7B*>*))((::PBYTE)hIl2Cpp + F6635A4B5F453331_A0B328AA913AD083_OFFSET))(this, E937D4885DAA1AE8);
	}
};
