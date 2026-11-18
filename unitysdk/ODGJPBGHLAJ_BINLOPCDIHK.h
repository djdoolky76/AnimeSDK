#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODGJPBGHLAJ;
class OIGBHACJLFF;
namespace System { class Action; }

#define ODGJPBGHLAJ_BINLOPCDIHK_CCNCBAEBJDM_OFFSET UNITYSDK_OFFSET(0xB30F950)
#define ODGJPBGHLAJ_BINLOPCDIHK_DDFCOKKHBED_OFFSET UNITYSDK_OFFSET(0xB30F860)
#define ODGJPBGHLAJ_BINLOPCDIHK__CTOR_OFFSET UNITYSDK_OFFSET(0xB30F850)

inline static constexpr unsigned int ODGJPBGHLAJ_BINLOPCDIHK_TypeDefinitionIndex = 83787;

class ODGJPBGHLAJ_BINLOPCDIHK : public ::System::Object
{
public:
	::ODGJPBGHLAJ* KLHPEBKNIFB; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::OIGBHACJLFF* LCILHHPJHHE; // 0x20
	::System::Int32 LGANCKONJKO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJPBGHLAJ_BINLOPCDIHK__CTOR_OFFSET))(this);
	}

	::System::Void DDFCOKKHBED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJPBGHLAJ_BINLOPCDIHK_DDFCOKKHBED_OFFSET))(this);
	}

	::System::Void CCNCBAEBJDM(::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODGJPBGHLAJ_BINLOPCDIHK_CCNCBAEBJDM_OFFSET))(this, EBFCACIEKBC);
	}
};
