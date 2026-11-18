#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DOAJCBHEECN;

#define DOAJCBHEECN_KIFOJACDNFO_COMDPAHDJAL_OFFSET UNITYSDK_OFFSET(0x124288C0)
#define DOAJCBHEECN_KIFOJACDNFO_GAGJNMCLBAG_OFFSET UNITYSDK_OFFSET(0x12428830)
#define DOAJCBHEECN_KIFOJACDNFO_ICPKNBHECFD_OFFSET UNITYSDK_OFFSET(0x12428820)
#define DOAJCBHEECN_KIFOJACDNFO_NPNBAHPBJCN_OFFSET UNITYSDK_OFFSET(0x12428790)
#define DOAJCBHEECN_KIFOJACDNFO__CTOR_OFFSET UNITYSDK_OFFSET(0x12428780)

inline static constexpr unsigned int DOAJCBHEECN_KIFOJACDNFO_TypeDefinitionIndex = 66642;

class DOAJCBHEECN_KIFOJACDNFO : public ::System::Object
{
public:
	::DOAJCBHEECN* KLHPEBKNIFB; // 0x10
	::System::Single KPBIENGNEMC; // 0x18
	::System::Single AJJLLENPOHG; // 0x1C
	::System::Single JOEJENLGJII; // 0x20
	::System::Single NCEGOFINAEF; // 0x24
	::System::Single IENNNCONILK; // 0x28
	::System::Single HOBKHIDEEOD; // 0x2C
	::System::Single NGJPCOMAMIF; // 0x30
	::System::Single ILEIGKFBODL; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAJCBHEECN_KIFOJACDNFO__CTOR_OFFSET))(this);
	}

	::System::Void NPNBAHPBJCN(::System::Single HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DOAJCBHEECN_KIFOJACDNFO_NPNBAHPBJCN_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Single ICPKNBHECFD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAJCBHEECN_KIFOJACDNFO_ICPKNBHECFD_OFFSET))(this);
	}

	::System::Void GAGJNMCLBAG(::System::Single HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DOAJCBHEECN_KIFOJACDNFO_GAGJNMCLBAG_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Single COMDPAHDJAL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAJCBHEECN_KIFOJACDNFO_COMDPAHDJAL_OFFSET))(this);
	}
};
