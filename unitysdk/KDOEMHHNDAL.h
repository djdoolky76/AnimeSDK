#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPMBBKJABGC.h"

class COIKBJKDCBM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KDOEMHHNDAL_EDOAIKKEONL_OFFSET UNITYSDK_OFFSET(0x18A64C00)
#define KDOEMHHNDAL_GAPEOKENFHF_OFFSET UNITYSDK_OFFSET(0x18A64740)
#define KDOEMHHNDAL_HHOKDEONION_OFFSET UNITYSDK_OFFSET(0x18A64A80)
#define KDOEMHHNDAL_HODPKGGNNHO_OFFSET UNITYSDK_OFFSET(0x18A64AE0)
#define KDOEMHHNDAL_JGLANCODEGM_OFFSET UNITYSDK_OFFSET(0x18A64B70)
#define KDOEMHHNDAL_JLGLCMKCPHA_OFFSET UNITYSDK_OFFSET(0x18A64A00)
#define KDOEMHHNDAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18A64AD0)

inline static constexpr unsigned int KDOEMHHNDAL_TypeDefinitionIndex = 88558;

class KDOEMHHNDAL : public ::KPMBBKJABGC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEMHHNDAL__CTOR_OFFSET))(this);
	}

	::System::Void GAPEOKENFHF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEMHHNDAL_GAPEOKENFHF_OFFSET))(this);
	}

	::System::Void JLGLCMKCPHA(::System::Int32 LNANIDFAFHB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDOEMHHNDAL_JLGLCMKCPHA_OFFSET))(this, LNANIDFAFHB);
	}

	::System::Collections::Generic::List_1<::COIKBJKDCBM*>* HHOKDEONION()
	{
		return ((::System::Collections::Generic::List_1<::COIKBJKDCBM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEMHHNDAL_HHOKDEONION_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::COIKBJKDCBM*>* HODPKGGNNHO()
	{
		return ((::System::Collections::Generic::List_1<::COIKBJKDCBM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEMHHNDAL_HODPKGGNNHO_OFFSET))(this);
	}

	::System::Void JGLANCODEGM(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDOEMHHNDAL_JGLANCODEGM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void EDOAIKKEONL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOEMHHNDAL_EDOAIKKEONL_OFFSET))(this);
	}
};
