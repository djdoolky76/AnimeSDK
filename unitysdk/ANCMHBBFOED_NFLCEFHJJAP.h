#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAPINBBMLDJ.h"
#include "unitysdk/System/Object.h"

class ANCMHBBFOED;
class HGAJKHIMKJP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANCMHBBFOED_NFLCEFHJJAP_LPAMCGLLPEC_OFFSET UNITYSDK_OFFSET(0x1820F690)
#define ANCMHBBFOED_NFLCEFHJJAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1820F680)

inline static constexpr unsigned int ANCMHBBFOED_NFLCEFHJJAP_TypeDefinitionIndex = 55173;

class ANCMHBBFOED_NFLCEFHJJAP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* BADJIMECAGC; // 0x10
	::ANCMHBBFOED* KLHPEBKNIFB; // 0x18
	::KAPINBBMLDJ FKMHMOELCIO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_NFLCEFHJJAP__CTOR_OFFSET))(this);
	}

	::System::Void LPAMCGLLPEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_NFLCEFHJJAP_LPAMCGLLPEC_OFFSET))(this);
	}
};
