#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMOJIMJLNFA.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define FBCNICDHOJM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17137D00)
#define FBCNICDHOJM_EFEOEBEFIBD_OFFSET UNITYSDK_OFFSET(0x17138A10)
#define FBCNICDHOJM_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x17137BF0)
#define FBCNICDHOJM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17138470)
#define FBCNICDHOJM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17137E10)
#define FBCNICDHOJM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17138700)
#define FBCNICDHOJM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17137E00)
#define FBCNICDHOJM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x171388B0)
#define FBCNICDHOJM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x171384D0)
#define FBCNICDHOJM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17137CF0)
#define FBCNICDHOJM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17137E90)
#define FBCNICDHOJM__CTOR_OFFSET UNITYSDK_OFFSET(0x171386F0)

inline static constexpr unsigned int FBCNICDHOJM_TypeDefinitionIndex = 82751;

class FBCNICDHOJM : public ::CMOJIMJLNFA
{
public:
	::System::Single CDKHHPAEGID; // 0x10
	::System::Single ODJALCEBNMI; // 0x14
	::System::Single LNGJKEPJIJO; // 0x18
	::System::Single NABADKBKOMO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCNICDHOJM__CTOR_OFFSET))(this);
	}

	::System::Single FCFOEJGPDNO(::System::Single NFCFJIEHJAJ)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBCNICDHOJM_FCFOEJGPDNO_OFFSET))(this, NFCFJIEHJAJ);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FBCNICDHOJM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::CMOJIMJLNFA* DGNAAPGKIPL()
	{
		return ((::CMOJIMJLNFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCNICDHOJM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCNICDHOJM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FBCNICDHOJM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FBCNICDHOJM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FBCNICDHOJM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FBCNICDHOJM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FBCNICDHOJM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FBCNICDHOJM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FBCNICDHOJM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FBCNICDHOJM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FBCNICDHOJM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FBCNICDHOJM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Single EFEOEBEFIBD(::System::Single MIALFKCCCPI)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBCNICDHOJM_EFEOEBEFIBD_OFFSET))(this, MIALFKCCCPI);
	}
};
