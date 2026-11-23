#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ABA96B919541EF45;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B334EC6C8CE1C3E4_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x25198A0)
#define B334EC6C8CE1C3E4_A484116D8CC1726A_OFFSET UNITYSDK_OFFSET(0x2519AD0)
#define B334EC6C8CE1C3E4__CTOR_OFFSET UNITYSDK_OFFSET(0x2519B80)

inline static constexpr unsigned int B334EC6C8CE1C3E4_TypeDefinitionIndex = 5211;

class B334EC6C8CE1C3E4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* E30248B80E54066F; // 0x10

	::System::Boolean A484116D8CC1726A(::System::UInt32 B333195BCAC7870A, ::System::UInt32& FB163595A99E0E56)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + B334EC6C8CE1C3E4_A484116D8CC1726A_OFFSET))(this, B333195BCAC7870A, FB163595A99E0E56);
	}

	::System::Void A1E97155B145443C(::ABA96B919541EF45* FDC82655339254FD)
	{
		return ((::System::Void(*)(::PVOID, ::ABA96B919541EF45*))((::PBYTE)hIl2Cpp + B334EC6C8CE1C3E4_A1E97155B145443C_OFFSET))(this, FDC82655339254FD);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B334EC6C8CE1C3E4__CTOR_OFFSET))(this);
	}
};
