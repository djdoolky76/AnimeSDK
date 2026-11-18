#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class KFGCLOPEGJO_JBMFPOPNLPP;
template <typename T> class BFMLEHMAGAK_1;

#define KFGCLOPEGJO_APBGOIPKPCL_CMPILGEHGBK_OFFSET UNITYSDK_OFFSET(0x15208220)
#define KFGCLOPEGJO_APBGOIPKPCL__CTOR_OFFSET UNITYSDK_OFFSET(0x15208210)

inline static constexpr unsigned int KFGCLOPEGJO_APBGOIPKPCL_TypeDefinitionIndex = 78912;

class KFGCLOPEGJO_APBGOIPKPCL : public ::System::Object
{
public:
	::BFMLEHMAGAK_1<::System::Int32>* FFAKNGIFGIK; // 0x10
	::KFGCLOPEGJO_JBMFPOPNLPP* ONLJAOFCNCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_APBGOIPKPCL__CTOR_OFFSET))(this);
	}

	::System::Void CMPILGEHGBK(::MNAGAGOHIGH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_APBGOIPKPCL_CMPILGEHGBK_OFFSET))(this, KOIBHLHLMFC);
	}
};
