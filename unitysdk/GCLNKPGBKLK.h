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

#define GCLNKPGBKLK_AKJOGEFOLKC_OFFSET UNITYSDK_OFFSET(0x13248DC0)
#define GCLNKPGBKLK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13248800)
#define GCLNKPGBKLK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13248B80)
#define GCLNKPGBKLK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13248910)
#define GCLNKPGBKLK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13249000)
#define GCLNKPGBKLK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13248900)
#define GCLNKPGBKLK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13248EA0)
#define GCLNKPGBKLK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13248BE0)
#define GCLNKPGBKLK_LBCHANCGLPD_OFFSET UNITYSDK_OFFSET(0x132491B0)
#define GCLNKPGBKLK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13248770)
#define GCLNKPGBKLK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13248990)
#define GCLNKPGBKLK__CTOR_OFFSET UNITYSDK_OFFSET(0x13248E90)

inline static constexpr unsigned int GCLNKPGBKLK_TypeDefinitionIndex = 58789;

class GCLNKPGBKLK : public ::BBINMPMDFHC
{
public:
	::System::String* MCOHLHMKLIP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLNKPGBKLK__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GCLNKPGBKLK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::BBINMPMDFHC* DGNAAPGKIPL()
	{
		return ((::BBINMPMDFHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLNKPGBKLK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLNKPGBKLK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GCLNKPGBKLK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GCLNKPGBKLK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::BBNKLHCDAGB* AKJOGEFOLKC()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLNKPGBKLK_AKJOGEFOLKC_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GCLNKPGBKLK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GCLNKPGBKLK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GCLNKPGBKLK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GCLNKPGBKLK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::GCLNKPGBKLK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GCLNKPGBKLK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GCLNKPGBKLK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GCLNKPGBKLK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::BBNKLHCDAGB* LBCHANCGLPD()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLNKPGBKLK_LBCHANCGLPD_OFFSET))(this);
	}
};
