#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKOMAFPIPMA_MKHNHHPDENB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKOMAFPIPMA_DKCFBCFGADG_LNMOODHGMCH_OFFSET UNITYSDK_OFFSET(0x158B97A0)
#define EKOMAFPIPMA_DKCFBCFGADG__CTOR_OFFSET UNITYSDK_OFFSET(0x158B9790)

inline static constexpr unsigned int EKOMAFPIPMA_DKCFBCFGADG_TypeDefinitionIndex = 62757;

class EKOMAFPIPMA_DKCFBCFGADG : public ::System::Object
{
public:
	::System::String* NBJOHOFMIKO; // 0x10
	::EKOMAFPIPMA_MKHNHHPDENB* NLABPIPHBMD; // 0x18
	::System::Int32 FBKGFLADIDE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_DKCFBCFGADG__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* LNMOODHGMCH()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_DKCFBCFGADG_LNMOODHGMCH_OFFSET))(this);
	}
};
