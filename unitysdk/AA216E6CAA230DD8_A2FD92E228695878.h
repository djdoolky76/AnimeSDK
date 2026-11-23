#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A04FB906869DCF3A;
class F77FEEE723E404A1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AA216E6CAA230DD8_A2FD92E228695878_BB1A75253F8BBAF9_OFFSET UNITYSDK_OFFSET(0x1CBBE10)
#define AA216E6CAA230DD8_A2FD92E228695878__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AA216E6CAA230DD8_A2FD92E228695878_TypeDefinitionIndex = 9672;

class AA216E6CAA230DD8_A2FD92E228695878 : public ::System::Object
{
public:
	::F77FEEE723E404A1* ABBFC146CC4348A2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* A9AFC9149CD8A4F5; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EE92F793B08CF0E9; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AE423BBC8583AA56; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* B3287C96C32B86BA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA216E6CAA230DD8_A2FD92E228695878__CTOR_OFFSET))(this);
	}

	::System::Void BB1A75253F8BBAF9(::A04FB906869DCF3A* F9ADA718944F49ED)
	{
		return ((::System::Void(*)(::PVOID, ::A04FB906869DCF3A*))((::PBYTE)hIl2Cpp + AA216E6CAA230DD8_A2FD92E228695878_BB1A75253F8BBAF9_OFFSET))(this, F9ADA718944F49ED);
	}
};
