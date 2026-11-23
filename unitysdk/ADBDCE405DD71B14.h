#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class FC90C069BD4E0542;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ADBDCE405DD71B14_A5F78BBADC8F5A85_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define ADBDCE405DD71B14_B7E9AA98A1FA95A4_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define ADBDCE405DD71B14_E2783BAEEA6A52E0_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define ADBDCE405DD71B14_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x268F050)
#define ADBDCE405DD71B14__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ADBDCE405DD71B14_TypeDefinitionIndex = 6465;

class ADBDCE405DD71B14 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FC90C069BD4E0542*>* A54F31FB2987848C; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBDCE405DD71B14__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::ADBDCE405DD71B14*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::ADBDCE405DD71B14*&))((::PBYTE)hIl2Cpp + ADBDCE405DD71B14_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::UInt32 A5F78BBADC8F5A85(::FC90C069BD4E0542* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::FC90C069BD4E0542*))((::PBYTE)hIl2Cpp + ADBDCE405DD71B14_A5F78BBADC8F5A85_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void B7E9AA98A1FA95A4(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FC90C069BD4E0542*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FC90C069BD4E0542*>*))((::PBYTE)hIl2Cpp + ADBDCE405DD71B14_B7E9AA98A1FA95A4_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FC90C069BD4E0542*>* E2783BAEEA6A52E0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FC90C069BD4E0542*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBDCE405DD71B14_E2783BAEEA6A52E0_OFFSET))(this);
	}
};
