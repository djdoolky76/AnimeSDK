#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

#define MECFDIENHLL_NJMMCMKNKGN_KJIELHGPOCB_OFFSET UNITYSDK_OFFSET(0x16C789F0)
#define MECFDIENHLL_NJMMCMKNKGN__CTOR_OFFSET UNITYSDK_OFFSET(0x16C789E0)

inline static constexpr unsigned int MECFDIENHLL_NJMMCMKNKGN_TypeDefinitionIndex = 91413;

class MECFDIENHLL_NJMMCMKNKGN : public ::System::Object
{
public:
	::System::Int32 BKEDOGMDOOJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECFDIENHLL_NJMMCMKNKGN__CTOR_OFFSET))(this);
	}

	::System::Boolean KJIELHGPOCB(::DEDDPKGLKHI_LODLFMBCLAH OFNDMBEELON)
	{
		return ((::System::Boolean(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH))((::PBYTE)hIl2Cpp + MECFDIENHLL_NJMMCMKNKGN_KJIELHGPOCB_OFFSET))(this, OFNDMBEELON);
	}
};
