#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class AB0F24070EFFBB23;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E02EF77F5EDC905E_A373DD05ED03DDBF_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define E02EF77F5EDC905E_E048CA003D428809_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define E02EF77F5EDC905E_E880083DF57DBB73_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define E02EF77F5EDC905E_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2405EB0)
#define E02EF77F5EDC905E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E02EF77F5EDC905E_TypeDefinitionIndex = 3995;

class E02EF77F5EDC905E : public ::System::Object
{
public:
	::System::UInt32 ED24767999B90BC3; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AB0F24070EFFBB23*>* B9A72174936D885D; // 0x18

	::System::Void A373DD05ED03DDBF(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AB0F24070EFFBB23*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AB0F24070EFFBB23*>*))((::PBYTE)hIl2Cpp + E02EF77F5EDC905E_A373DD05ED03DDBF_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E02EF77F5EDC905E__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E02EF77F5EDC905E*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E02EF77F5EDC905E*&))((::PBYTE)hIl2Cpp + E02EF77F5EDC905E_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AB0F24070EFFBB23*>* E048CA003D428809()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AB0F24070EFFBB23*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E02EF77F5EDC905E_E048CA003D428809_OFFSET))(this);
	}

	::System::Void E880083DF57DBB73(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + E02EF77F5EDC905E_E880083DF57DBB73_OFFSET))(this, E937D4885DAA1AE8);
	}
};
