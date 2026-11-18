#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEHCJHFOGAH.h"

class GDDJCPNDLDN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKHELNKOPEB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x143B28B0)
#define AKHELNKOPEB_KBODJGJJOIJ_OFFSET UNITYSDK_OFFSET(0x143B28C0)
#define AKHELNKOPEB__CTOR_OFFSET UNITYSDK_OFFSET(0x143B2820)

inline static constexpr unsigned int AKHELNKOPEB_TypeDefinitionIndex = 50071;

class AKHELNKOPEB : public ::IEHCJHFOGAH
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GDDJCPNDLDN*>* DAAAEJDBNFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHELNKOPEB__CTOR_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHELNKOPEB_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GDDJCPNDLDN*>* KBODJGJJOIJ()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::GDDJCPNDLDN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHELNKOPEB_KBODJGJJOIJ_OFFSET))(this);
	}
};
