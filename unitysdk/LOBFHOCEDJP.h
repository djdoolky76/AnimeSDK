#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEMCAOEICDG;
class EHKKPCGAJHO;
class LCFMHELLMAL;

#define LOBFHOCEDJP_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x151AE2D0)
#define LOBFHOCEDJP_DAPCBDMHKJA_1_OFFSET UNITYSDK_OFFSET(0x151AE600)
#define LOBFHOCEDJP_DAPCBDMHKJA_OFFSET UNITYSDK_OFFSET(0x151AE360)
#define LOBFHOCEDJP_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x151AE4D0)
#define LOBFHOCEDJP_PFJEJJHJOEB_OFFSET UNITYSDK_OFFSET(0x151AE520)
#define LOBFHOCEDJP__CTOR_OFFSET UNITYSDK_OFFSET(0x151AE2C0)

inline static constexpr unsigned int LOBFHOCEDJP_TypeDefinitionIndex = 66497;

class LOBFHOCEDJP : public ::System::Object
{
public:
	::EHKKPCGAJHO* POBADKEDFOE; // 0x10
	::LCFMHELLMAL* BOCDPJFBHAA; // 0x18
	::AEMCAOEICDG* OHPJHPEOFLD; // 0x20
	::System::Int32 ABOLAPGOFMP; // 0x28
	::System::Boolean MOMOJNIPLKK; // 0x2C
	::System::Boolean CMNIEMIIALA; // 0x2D
	::System::Boolean OPPHKFLBBLK; // 0x2E
	::System::Boolean JEJCOAEAJFB; // 0x2F
	::System::UInt32 BKLGNCBNEGM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFHOCEDJP__CTOR_OFFSET))(this);
	}

	static ::LOBFHOCEDJP* BBPCBEEHALC()
	{
		return ((::LOBFHOCEDJP*(*)())((::PBYTE)hIl2Cpp + LOBFHOCEDJP_BBPCBEEHALC_OFFSET))();
	}

	static ::System::Void DAPCBDMHKJA(::LOBFHOCEDJP*& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::LOBFHOCEDJP*&))((::PBYTE)hIl2Cpp + LOBFHOCEDJP_DAPCBDMHKJA_OFFSET))(LJBPECKCCEA);
	}

	::System::Void PFJEJJHJOEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFHOCEDJP_PFJEJJHJOEB_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFHOCEDJP_NPOLNFDBOOD_OFFSET))(this);
	}

	static ::System::Void DAPCBDMHKJA_1(::LOBFHOCEDJP* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::LOBFHOCEDJP*))((::PBYTE)hIl2Cpp + LOBFHOCEDJP_DAPCBDMHKJA_1_OFFSET))(LJBPECKCCEA);
	}
};
