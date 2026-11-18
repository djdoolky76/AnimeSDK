#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EJEJFEBJHHP;
class FKNIEPCILLG;
class NNLHDFIFCGH;

#define OPGBLKHLCIN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x136EA9F0)
#define OPGBLKHLCIN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x136EA620)
#define OPGBLKHLCIN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x136EAA50)
#define OPGBLKHLCIN_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x136EA5A0)
#define OPGBLKHLCIN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x136EA6A0)
#define OPGBLKHLCIN__CTOR_OFFSET UNITYSDK_OFFSET(0x136EAC70)

inline static constexpr unsigned int OPGBLKHLCIN_TypeDefinitionIndex = 84397;

class OPGBLKHLCIN : public ::System::Object
{
public:
	::Il2CppArray<::EJEJFEBJHHP*>* PIDOLKBBHFN; // 0x10
	::NNLHDFIFCGH* ABAIIIABKLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGBLKHLCIN__CTOR_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGBLKHLCIN_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OPGBLKHLCIN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OPGBLKHLCIN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OPGBLKHLCIN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OPGBLKHLCIN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
