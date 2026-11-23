#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F16CB626F3B6DA0B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E67369BD67662CD0_BBBBFFCDA615B085_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E67369BD67662CD0_E64AA7C3C4AA02A8_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E67369BD67662CD0_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define E67369BD67662CD0_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x261A690)
#define E67369BD67662CD0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E67369BD67662CD0_TypeDefinitionIndex = 5896;

class E67369BD67662CD0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F16CB626F3B6DA0B*>* AF3FD4EBC1215CB8; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E67369BD67662CD0__CTOR_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::F16CB626F3B6DA0B* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::F16CB626F3B6DA0B*))((::PBYTE)hIl2Cpp + E67369BD67662CD0_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void E64AA7C3C4AA02A8(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F16CB626F3B6DA0B*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F16CB626F3B6DA0B*>*))((::PBYTE)hIl2Cpp + E67369BD67662CD0_E64AA7C3C4AA02A8_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F16CB626F3B6DA0B*>* BBBBFFCDA615B085()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F16CB626F3B6DA0B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E67369BD67662CD0_BBBBFFCDA615B085_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E67369BD67662CD0*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E67369BD67662CD0*&))((::PBYTE)hIl2Cpp + E67369BD67662CD0_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
