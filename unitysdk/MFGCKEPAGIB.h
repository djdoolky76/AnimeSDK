#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBINMPMDFHC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BBNKLHCDAGB;
class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MFGCKEPAGIB_AKJOGEFOLKC_OFFSET UNITYSDK_OFFSET(0x13D27100)
#define MFGCKEPAGIB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13D26770)
#define MFGCKEPAGIB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13D26DF0)
#define MFGCKEPAGIB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13D26880)
#define MFGCKEPAGIB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13D271E0)
#define MFGCKEPAGIB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13D26870)
#define MFGCKEPAGIB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13D27420)
#define MFGCKEPAGIB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13D26E50)
#define MFGCKEPAGIB_LBCHANCGLPD_OFFSET UNITYSDK_OFFSET(0x13D27390)
#define MFGCKEPAGIB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13D266B0)
#define MFGCKEPAGIB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13D26900)
#define MFGCKEPAGIB__CTOR_OFFSET UNITYSDK_OFFSET(0x13D271D0)

inline static constexpr unsigned int MFGCKEPAGIB_TypeDefinitionIndex = 62130;

class MFGCKEPAGIB : public ::BBINMPMDFHC
{
public:
	::System::String* BCMBLHMKGMA; // 0x18
	::System::String* IMNCEDALMHB; // 0x20
	::System::String* IPEMALHHKKI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGCKEPAGIB__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MFGCKEPAGIB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::BBINMPMDFHC* DGNAAPGKIPL()
	{
		return ((::BBINMPMDFHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGCKEPAGIB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGCKEPAGIB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MFGCKEPAGIB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFGCKEPAGIB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::BBNKLHCDAGB* AKJOGEFOLKC()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGCKEPAGIB_AKJOGEFOLKC_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MFGCKEPAGIB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFGCKEPAGIB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MFGCKEPAGIB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MFGCKEPAGIB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFGCKEPAGIB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::BBNKLHCDAGB* LBCHANCGLPD()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGCKEPAGIB_LBCHANCGLPD_OFFSET))(this);
	}

	static ::MFGCKEPAGIB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MFGCKEPAGIB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MFGCKEPAGIB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
