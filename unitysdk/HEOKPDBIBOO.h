#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDCDAABGNNO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/JPAGJONBFID_OHLJJOCHIGO.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HEOKPDBIBOO_CEHIJOHBMKA_OFFSET UNITYSDK_OFFSET(0x11010D30)
#define HEOKPDBIBOO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11010540)
#define HEOKPDBIBOO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x110108A0)
#define HEOKPDBIBOO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11010650)
#define HEOKPDBIBOO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11010DC0)
#define HEOKPDBIBOO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11010640)
#define HEOKPDBIBOO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11010BD0)
#define HEOKPDBIBOO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11010900)
#define HEOKPDBIBOO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x110104F0)
#define HEOKPDBIBOO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x110106D0)
#define HEOKPDBIBOO_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x11010B60)
#define HEOKPDBIBOO__CTOR_OFFSET UNITYSDK_OFFSET(0x11010BC0)

inline static constexpr unsigned int HEOKPDBIBOO_TypeDefinitionIndex = 88883;

class HEOKPDBIBOO : public ::IDCDAABGNNO
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* GJDFBFPGIFO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOKPDBIBOO__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HEOKPDBIBOO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::IDCDAABGNNO* DGNAAPGKIPL()
	{
		return ((::IDCDAABGNNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOKPDBIBOO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOKPDBIBOO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HEOKPDBIBOO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HEOKPDBIBOO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void PKOGNPKCHHE(::JPAGJONBFID_OHLJJOCHIGO& HGDMBHDKFPK)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_OHLJJOCHIGO&))((::PBYTE)hIl2Cpp + HEOKPDBIBOO_PKOGNPKCHHE_OFFSET))(this, HGDMBHDKFPK);
	}

	static ::HEOKPDBIBOO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HEOKPDBIBOO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HEOKPDBIBOO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HEOKPDBIBOO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HEOKPDBIBOO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void CEHIJOHBMKA(::JPAGJONBFID_OHLJJOCHIGO& MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_OHLJJOCHIGO&))((::PBYTE)hIl2Cpp + HEOKPDBIBOO_CEHIJOHBMKA_OFFSET))(this, MIALFKCCCPI);
	}

	static ::HEOKPDBIBOO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HEOKPDBIBOO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HEOKPDBIBOO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
