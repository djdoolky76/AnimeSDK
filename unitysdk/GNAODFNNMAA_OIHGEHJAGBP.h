#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNAODFNNMAA_IBHIIJAAKCN.h"
#include "unitysdk/System/Object.h"

class DCFKHKBLIMA;
class GNAODFNNMAA;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define GNAODFNNMAA_OIHGEHJAGBP_ENKHJLECLHC_OFFSET UNITYSDK_OFFSET(0x14D059F0)
#define GNAODFNNMAA_OIHGEHJAGBP_FDIIJLJIGGB_OFFSET UNITYSDK_OFFSET(0x14D05990)
#define GNAODFNNMAA_OIHGEHJAGBP__CTOR_OFFSET UNITYSDK_OFFSET(0x14D05980)

inline static constexpr unsigned int GNAODFNNMAA_OIHGEHJAGBP_TypeDefinitionIndex = 79310;

class GNAODFNNMAA_OIHGEHJAGBP : public ::System::Object
{
public:
	::GNAODFNNMAA_IBHIIJAAKCN KPNIHKEKDOC; // 0x10
	::GNAODFNNMAA* KLHPEBKNIFB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNAODFNNMAA_OIHGEHJAGBP__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::System::Object*>* FDIIJLJIGGB()
	{
		return ((::System::Collections::Generic::IList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNAODFNNMAA_OIHGEHJAGBP_FDIIJLJIGGB_OFFSET))(this);
	}

	::System::Boolean ENKHJLECLHC(::DCFKHKBLIMA* IPMMCGDMODG, ::GNAODFNNMAA_IBHIIJAAKCN PNPMMLNCDNK)
	{
		return ((::System::Boolean(*)(::PVOID, ::DCFKHKBLIMA*, ::GNAODFNNMAA_IBHIIJAAKCN))((::PBYTE)hIl2Cpp + GNAODFNNMAA_OIHGEHJAGBP_ENKHJLECLHC_OFFSET))(this, IPMMCGDMODG, PNPMMLNCDNK);
	}
};
