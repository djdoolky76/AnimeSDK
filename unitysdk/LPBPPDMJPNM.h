#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BIJKNADJCGJ.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class FKNIEPCILLG;
class JCADHFOKIHK;
namespace System { class String; }

#define LPBPPDMJPNM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x13D0CD30)
#define LPBPPDMJPNM_EQUALS_OFFSET UNITYSDK_OFFSET(0x13D0CCB0)
#define LPBPPDMJPNM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13D0D180)
#define LPBPPDMJPNM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13D0CF30)
#define LPBPPDMJPNM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13D0CE60)
#define LPBPPDMJPNM_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x13D0D4B0)
#define LPBPPDMJPNM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13D0D1E0)
#define LPBPPDMJPNM_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x13D0D380)
#define LPBPPDMJPNM_LGEPALLIJNA_OFFSET UNITYSDK_OFFSET(0x13D0D390)
#define LPBPPDMJPNM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13D0CFB0)
#define LPBPPDMJPNM__CTOR_OFFSET UNITYSDK_OFFSET(0x13D0D370)

inline static constexpr unsigned int LPBPPDMJPNM_TypeDefinitionIndex = 81712;

class LPBPPDMJPNM : public ::System::Object
{
public:
	::System::String* BGPMDIKJFPJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBPPDMJPNM__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::LPBPPDMJPNM* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LPBPPDMJPNM*))((::PBYTE)hIl2Cpp + LPBPPDMJPNM_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPBPPDMJPNM_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBPPDMJPNM_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LPBPPDMJPNM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LPBPPDMJPNM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPBPPDMJPNM_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::BIJKNADJCGJ LGEPALLIJNA(::MoleMole::EntityHandle PHHDHIBOCKA, ::JCADHFOKIHK* NBHJHFCMBLM)
	{
		return ((::BIJKNADJCGJ(*)(::PVOID, ::MoleMole::EntityHandle, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + LPBPPDMJPNM_LGEPALLIJNA_OFFSET))(this, PHHDHIBOCKA, NBHJHFCMBLM);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBPPDMJPNM_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LPBPPDMJPNM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LPBPPDMJPNM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
