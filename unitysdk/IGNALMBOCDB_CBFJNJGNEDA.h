#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBFKPNBIKGP;

#define IGNALMBOCDB_CBFJNJGNEDA_EJKBOPKKDOK_OFFSET UNITYSDK_OFFSET(0x1A465A10)
#define IGNALMBOCDB_CBFJNJGNEDA_GIALDDHFBLF_OFFSET UNITYSDK_OFFSET(0x1A465C70)
#define IGNALMBOCDB_CBFJNJGNEDA_JPCGDJPMDPP_OFFSET UNITYSDK_OFFSET(0x1A465CF0)
#define IGNALMBOCDB_CBFJNJGNEDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4658B0)

inline static constexpr unsigned int IGNALMBOCDB_CBFJNJGNEDA_TypeDefinitionIndex = 90742;

class IGNALMBOCDB_CBFJNJGNEDA : public ::System::Object
{
public:
	::System::Int64 FENHAOMJJJJ; // 0x10
	::System::UInt32 GJOCGANNFDP; // 0x18
	::System::Boolean AMGBGFDJNFG; // 0x1C
	::System::Byte _padding0[0x3];
	::System::UInt32 ANKOEBDPCPJ; // 0x20

	::System::Void _ctor(::MBFKPNBIKGP* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::MBFKPNBIKGP*))((::PBYTE)hIl2Cpp + IGNALMBOCDB_CBFJNJGNEDA__CTOR_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Void GIALDDHFBLF(::MBFKPNBIKGP* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::MBFKPNBIKGP*))((::PBYTE)hIl2Cpp + IGNALMBOCDB_CBFJNJGNEDA_GIALDDHFBLF_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Boolean JPCGDJPMDPP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNALMBOCDB_CBFJNJGNEDA_JPCGDJPMDPP_OFFSET))(this);
	}

	::System::Void EJKBOPKKDOK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IGNALMBOCDB_CBFJNJGNEDA_EJKBOPKKDOK_OFFSET))(this, EGEGIMGMJHN);
	}
};
