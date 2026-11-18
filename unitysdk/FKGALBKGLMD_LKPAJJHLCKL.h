#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FKGALBKGLMD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKGALBKGLMD_LKPAJJHLCKL_DHAPLDLCHBN_OFFSET UNITYSDK_OFFSET(0x11C57830)
#define FKGALBKGLMD_LKPAJJHLCKL__CTOR_OFFSET UNITYSDK_OFFSET(0x11C57820)

inline static constexpr unsigned int FKGALBKGLMD_LKPAJJHLCKL_TypeDefinitionIndex = 47429;

class FKGALBKGLMD_LKPAJJHLCKL : public ::System::Object
{
public:
	::FKGALBKGLMD* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* DIKACNMLNLK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGALBKGLMD_LKPAJJHLCKL__CTOR_OFFSET))(this);
	}

	::System::Void DHAPLDLCHBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGALBKGLMD_LKPAJJHLCKL_DHAPLDLCHBN_OFFSET))(this);
	}
};
