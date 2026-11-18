#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/NOHGGLFKBEH.h"
#include "unitysdk/System/Object.h"

class CGDMNBKANIL;
class FHGHJDPHHEL;
class GHEFDPOJMJF;

#define CJOHGDGHEFA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x13269060)
#define CJOHGDGHEFA_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x13269240)
#define CJOHGDGHEFA_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x132692A0)
#define CJOHGDGHEFA__CTOR_OFFSET UNITYSDK_OFFSET(0x13269050)

inline static constexpr unsigned int CJOHGDGHEFA_TypeDefinitionIndex = 76726;

class CJOHGDGHEFA : public ::System::Object
{
public:
	::CGDMNBKANIL* MDGBOCKJILK; // 0x10
	::GHEFDPOJMJF* NMOCMAMPKHC; // 0x18
	::Cinemachine::CameraState FMPNICNEFMH; // 0x20
	::NOHGGLFKBEH NLFMAIHPKOO; // 0x108

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOHGDGHEFA__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::FHGHJDPHHEL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::FHGHJDPHHEL*))((::PBYTE)hIl2Cpp + CJOHGDGHEFA_BBOMJDBNHIC_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOHGDGHEFA_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::FHGHJDPHHEL* AAOCANGHBDG, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::FHGHJDPHHEL*, ::System::Single))((::PBYTE)hIl2Cpp + CJOHGDGHEFA_OKJCHFGIKBH_OFFSET))(this, AAOCANGHBDG, PBCAAADNEPK);
	}
};
