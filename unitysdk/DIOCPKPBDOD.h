#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DIOCPKPBDOD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x149AE660)
#define DIOCPKPBDOD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x149AF360)
#define DIOCPKPBDOD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x149AE770)
#define DIOCPKPBDOD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x149AFA20)
#define DIOCPKPBDOD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x149AE760)
#define DIOCPKPBDOD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x149AF830)
#define DIOCPKPBDOD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x149AF3C0)
#define DIOCPKPBDOD_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x149AF990)
#define DIOCPKPBDOD_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x149ADF50)
#define DIOCPKPBDOD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x149AE570)
#define DIOCPKPBDOD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x149AE7F0)
#define DIOCPKPBDOD__CTOR_OFFSET UNITYSDK_OFFSET(0x149AF7A0)

inline static constexpr unsigned int DIOCPKPBDOD_TypeDefinitionIndex = 86565;

class DIOCPKPBDOD : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* GBPCGMACIIP; // 0x30
	::HBIBNDIOKPG* CPLFOFKKGGO; // 0x38
	::GPIOLGMOBLJ* NDAMLDOIMCD; // 0x40
	::GPIOLGMOBLJ* DJJOMMHGMBP; // 0x48
	::FOBNALGHPPD_1<::System::String*> JFPNILCHFGO; // 0x50
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* CLBLIFABIDA; // 0x70
	::FOBNALGHPPD_1<::System::Int32> GIANNJMEPMJ; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOCPKPBDOD__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOCPKPBDOD_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DIOCPKPBDOD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOCPKPBDOD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOCPKPBDOD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DIOCPKPBDOD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DIOCPKPBDOD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DIOCPKPBDOD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DIOCPKPBDOD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DIOCPKPBDOD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DIOCPKPBDOD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOCPKPBDOD_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::DIOCPKPBDOD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DIOCPKPBDOD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DIOCPKPBDOD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DIOCPKPBDOD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
