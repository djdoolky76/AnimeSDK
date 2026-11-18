#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGOOCNBKKIG.h"
#include "unitysdk/CHOJHBMHABO.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/System/Object.h"

#define FJIPELENGKP_APEDNNKJCEI_OFFSET UNITYSDK_OFFSET(0x1E10E810)
#define FJIPELENGKP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1E10E8F0)
#define FJIPELENGKP_FKGOACAOAPI_OFFSET UNITYSDK_OFFSET(0x1E10EA40)
#define FJIPELENGKP_GNOKLGENOME_OFFSET UNITYSDK_OFFSET(0x1E10E940)
#define FJIPELENGKP_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1E10E7A0)
#define FJIPELENGKP_OCPHMADHAHC_OFFSET UNITYSDK_OFFSET(0x1E10E800)
#define FJIPELENGKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E10E790)

inline static constexpr unsigned int FJIPELENGKP_TypeDefinitionIndex = 94423;

class FJIPELENGKP : public ::System::Object
{
public:
	::System::Int32 IDAPGNMAPGC; // 0x10
	::System::Int32 HLJKGDONAMM; // 0x14
	::CHOJHBMHABO MHJKLFBDDFO; // 0x18
	::System::Single NJNPMFIPHEG; // 0x1C
	::AGOOCNBKKIG GANNGHFPNLD; // 0x20
	::System::Single OKCEDNLDPKB; // 0x24
	::JGLIFHIAIEH FDPFIPJPGAA; // 0x28
	::System::Single ODGNCABCLLD; // 0x30
	::System::UInt32 CMDCIADBCCN; // 0x34
	::System::Boolean AMBDDLMDBFH; // 0x38
	::System::Boolean HGBLNCDJJAL; // 0x39
	::System::Boolean OBBEELDIJAN; // 0x3A
	::System::Byte _padding0[0x1];
	::System::UInt32 OFBJADKDEFI; // 0x3C
	::System::Single JFKMOCNAGHA; // 0x40
	::JGLIFHIAIEH FKCOHDHLCEA; // 0x44
	::System::Single GJIPGNGGNOP; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIPELENGKP__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIPELENGKP_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean OCPHMADHAHC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIPELENGKP_OCPHMADHAHC_OFFSET))(this);
	}

	static ::FJIPELENGKP* APEDNNKJCEI()
	{
		return ((::FJIPELENGKP*(*)())((::PBYTE)hIl2Cpp + FJIPELENGKP_APEDNNKJCEI_OFFSET))();
	}

	static ::System::Void GNOKLGENOME(::FJIPELENGKP* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::FJIPELENGKP*))((::PBYTE)hIl2Cpp + FJIPELENGKP_GNOKLGENOME_OFFSET))(HMMMOCJAEOA);
	}

	::FJIPELENGKP* BBOMJDBNHIC()
	{
		return ((::FJIPELENGKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIPELENGKP_BBOMJDBNHIC_OFFSET))(this);
	}

	static ::FJIPELENGKP* FKGOACAOAPI(::FJIPELENGKP* HMMMOCJAEOA)
	{
		return ((::FJIPELENGKP*(*)(::FJIPELENGKP*))((::PBYTE)hIl2Cpp + FJIPELENGKP_FKGOACAOAPI_OFFSET))(HMMMOCJAEOA);
	}
};
