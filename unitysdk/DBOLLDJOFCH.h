#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class DLPMMBJICAN;
class FKNIEPCILLG;
class IHPPCIEFNOC;
class PJOHHKCHGCH;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class String; }

#define DBOLLDJOFCH_BMEEFDGBODB_OFFSET UNITYSDK_OFFSET(0x19A33FC0)
#define DBOLLDJOFCH_CMPEIDJNMKD_OFFSET UNITYSDK_OFFSET(0x19A34340)
#define DBOLLDJOFCH_DLOHDEODGJK_OFFSET UNITYSDK_OFFSET(0x19A343F0)
#define DBOLLDJOFCH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A33780)
#define DBOLLDJOFCH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19A32600)
#define DBOLLDJOFCH_GKPNJAKINAO_OFFSET UNITYSDK_OFFSET(0x19A34290)
#define DBOLLDJOFCH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19A337E0)
#define DBOLLDJOFCH_IBDMIGBCFOF_OFFSET UNITYSDK_OFFSET(0x19A341F0)
#define DBOLLDJOFCH_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x19A32580)
#define DBOLLDJOFCH_NJNDNFBDCEO_OFFSET UNITYSDK_OFFSET(0x19A34760)
#define DBOLLDJOFCH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19A32680)
#define DBOLLDJOFCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A32500)
#define DBOLLDJOFCH__CTOR_OFFSET UNITYSDK_OFFSET(0x19A324F0)

inline static constexpr unsigned int DBOLLDJOFCH_TypeDefinitionIndex = 90854;

class DBOLLDJOFCH : public ::System::Object
{
public:
	::DLPMMBJICAN* MHFEIDMNION; // 0x10
	::PJOHHKCHGCH* CDGGHGMJEOD; // 0x18
	::System::String* BNPMPGJOCNM; // 0x20
	::MoleMole::Config::DynamicFloat* FKAIAHLECAG; // 0x28
	::MoleMole::Config::HitForwardType CIHGELPMDLH; // 0x30
	::System::Boolean APIKAPNPDHN; // 0x34
	::System::Boolean AIAJGMKLJPC; // 0x35
	::System::Boolean LGDJDMDHLLP; // 0x36
	::System::Boolean HJAOBJNMNLE; // 0x37
	::System::Boolean LKFPCBNBCMN; // 0x38
	::System::Boolean PCBJMCNFIIJ; // 0x39
	::System::Boolean EMJOBKIMKLI; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 DGIAGIMPCEA; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOLLDJOFCH__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Boolean GJJPFFGJEFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBOLLDJOFCH__CTOR_1_OFFSET))(this, GJJPFFGJEFA);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DBOLLDJOFCH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DBOLLDJOFCH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Int32 BMEEFDGBODB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOLLDJOFCH_BMEEFDGBODB_OFFSET))(this);
	}

	::MoleMole::Config::BuffGroupName IBDMIGBCFOF()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOLLDJOFCH_IBDMIGBCFOF_OFFSET))(this);
	}

	::System::Int32 CMPEIDJNMKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOLLDJOFCH_CMPEIDJNMKD_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DBOLLDJOFCH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::DLPMMBJICAN* DLOHDEODGJK()
	{
		return ((::DLPMMBJICAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOLLDJOFCH_DLOHDEODGJK_OFFSET))(this);
	}

	::System::Boolean GKPNJAKINAO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOLLDJOFCH_GKPNJAKINAO_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOLLDJOFCH_IGCGENIMIIP_OFFSET))(this);
	}

	::IHPPCIEFNOC* NJNDNFBDCEO()
	{
		return ((::IHPPCIEFNOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOLLDJOFCH_NJNDNFBDCEO_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DBOLLDJOFCH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
