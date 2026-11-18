#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class AHJJFCOOHLI;
class FKNIEPCILLG;
class OGOOCKGCCID;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GIDFLBDHEOJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x116F9DE0)
#define GIDFLBDHEOJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x116F95C0)
#define GIDFLBDHEOJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x116F9E40)
#define GIDFLBDHEOJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x116F9640)
#define GIDFLBDHEOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x116FA130)

inline static constexpr unsigned int GIDFLBDHEOJ_TypeDefinitionIndex = 77915;

class GIDFLBDHEOJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AHJJFCOOHLI*>* HFGFHAJCPMJ; // 0x10
	::System::Collections::Generic::List_1<::OGOOCKGCCID*>* BGCOBHKIKOB; // 0x18
	::System::UInt32 BELNJJKMMJP; // 0x20
	::System::UInt32 AGDCHKHKBKA; // 0x24
	::System::UInt32 JAJHPKNEOFD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDFLBDHEOJ__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GIDFLBDHEOJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GIDFLBDHEOJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GIDFLBDHEOJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GIDFLBDHEOJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
