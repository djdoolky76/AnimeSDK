#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class AC6C3DCE13FD46EF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EB1061FD93EAE744_A38A7F6427C88487_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define EB1061FD93EAE744_F6696792C4A7E8D6_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define EB1061FD93EAE744_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23C7290)
#define EB1061FD93EAE744_FD4200B01C22A6A2_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define EB1061FD93EAE744__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EB1061FD93EAE744_TypeDefinitionIndex = 3817;

class EB1061FD93EAE744 : public ::System::Object
{
public:
	::System::UInt32 F78CFA0C288DDEF6; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AC6C3DCE13FD46EF*>* F93D89A55B11B476; // 0x18

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::EB1061FD93EAE744*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::EB1061FD93EAE744*&))((::PBYTE)hIl2Cpp + EB1061FD93EAE744_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void F6696792C4A7E8D6(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EB1061FD93EAE744_F6696792C4A7E8D6_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AC6C3DCE13FD46EF*>* A38A7F6427C88487()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AC6C3DCE13FD46EF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EB1061FD93EAE744_A38A7F6427C88487_OFFSET))(this);
	}

	::System::Void FD4200B01C22A6A2(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AC6C3DCE13FD46EF*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AC6C3DCE13FD46EF*>*))((::PBYTE)hIl2Cpp + EB1061FD93EAE744_FD4200B01C22A6A2_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB1061FD93EAE744__CTOR_OFFSET))(this);
	}
};
