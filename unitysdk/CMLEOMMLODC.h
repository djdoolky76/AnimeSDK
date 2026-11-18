#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/JPAGJONBFID_OHLJJOCHIGO.h"

class FKNIEPCILLG;
namespace System { template <typename T> class Action_1; }

#define CMLEOMMLODC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1687CD70)
#define CMLEOMMLODC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1687D380)
#define CMLEOMMLODC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1687CE90)
#define CMLEOMMLODC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1687D870)
#define CMLEOMMLODC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1687CE70)
#define CMLEOMMLODC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1687D9C0)
#define CMLEOMMLODC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1687D3E0)
#define CMLEOMMLODC_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x1687CE80)
#define CMLEOMMLODC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1687CD60)
#define CMLEOMMLODC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1687CF10)
#define CMLEOMMLODC_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1687D810)
#define CMLEOMMLODC__CTOR_OFFSET UNITYSDK_OFFSET(0x1687D860)

inline static constexpr unsigned int CMLEOMMLODC_TypeDefinitionIndex = 65897;

class CMLEOMMLODC : public ::System::Object
{
public:
	::System::Int32 LNOOABLNEBF; // 0x10
	::System::Int32 NCEAEHKEPJN; // 0x14
	::System::Int32 APKIKLPPHEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLEOMMLODC__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CMLEOMMLODC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::CMLEOMMLODC* DGNAAPGKIPL()
	{
		return ((::CMLEOMMLODC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLEOMMLODC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLEOMMLODC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLEOMMLODC_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CMLEOMMLODC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CMLEOMMLODC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PKOGNPKCHHE(::JPAGJONBFID_OHLJJOCHIGO& HGDMBHDKFPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::JPAGJONBFID_OHLJJOCHIGO&))((::PBYTE)hIl2Cpp + CMLEOMMLODC_PKOGNPKCHHE_OFFSET))(this, HGDMBHDKFPK);
	}

	static ::CMLEOMMLODC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CMLEOMMLODC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CMLEOMMLODC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CMLEOMMLODC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CMLEOMMLODC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::CMLEOMMLODC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CMLEOMMLODC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CMLEOMMLODC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
