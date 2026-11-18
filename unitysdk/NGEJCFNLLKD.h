#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLMHHDBMOCG.h"
#include "unitysdk/KHOIAHHCNNB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class NGFCPNEIEDL;
namespace System { template <typename T> class Action_1; }

#define NGEJCFNLLKD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x172889A0)
#define NGEJCFNLLKD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17288FF0)
#define NGEJCFNLLKD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17288AC0)
#define NGEJCFNLLKD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17289240)
#define NGEJCFNLLKD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17288AA0)
#define NGEJCFNLLKD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17289390)
#define NGEJCFNLLKD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17289050)
#define NGEJCFNLLKD_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x17288AB0)
#define NGEJCFNLLKD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17288990)
#define NGEJCFNLLKD_NMBJIKEJKCK_OFFSET UNITYSDK_OFFSET(0x17288950)
#define NGEJCFNLLKD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17288B40)
#define NGEJCFNLLKD__CTOR_OFFSET UNITYSDK_OFFSET(0x17289230)

inline static constexpr unsigned int NGEJCFNLLKD_TypeDefinitionIndex = 47470;

class NGEJCFNLLKD : public ::System::Object
{
public:
	::KHOIAHHCNNB KKOFNFAFJCM; // 0x10
	::System::Single GJLKCLKBNME; // 0x14
	::HLMHHDBMOCG GGPILPFPFNC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEJCFNLLKD__CTOR_OFFSET))(this);
	}

	::NGFCPNEIEDL* NMBJIKEJKCK()
	{
		return ((::NGFCPNEIEDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEJCFNLLKD_NMBJIKEJKCK_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NGEJCFNLLKD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::NGEJCFNLLKD* DGNAAPGKIPL()
	{
		return ((::NGEJCFNLLKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEJCFNLLKD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEJCFNLLKD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEJCFNLLKD_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NGEJCFNLLKD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NGEJCFNLLKD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NGEJCFNLLKD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NGEJCFNLLKD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NGEJCFNLLKD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NGEJCFNLLKD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NGEJCFNLLKD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NGEJCFNLLKD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NGEJCFNLLKD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NGEJCFNLLKD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
