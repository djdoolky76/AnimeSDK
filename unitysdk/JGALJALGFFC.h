#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HOBAOAJAEKP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGALJALGFFC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18735050)
#define JGALJALGFFC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18734B10)
#define JGALJALGFFC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x187350B0)
#define JGALJALGFFC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18734B90)
#define JGALJALGFFC__CTOR_OFFSET UNITYSDK_OFFSET(0x18735410)

inline static constexpr unsigned int JGALJALGFFC_TypeDefinitionIndex = 86018;

class JGALJALGFFC : public ::System::Object
{
public:
	::HOBAOAJAEKP* DAFDBCICGPM; // 0x10
	::System::Collections::Generic::List_1<::HOBAOAJAEKP*>* NFOPKLKBLFB; // 0x18
	::System::Int32 NGEFMHCFAPK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGALJALGFFC__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JGALJALGFFC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JGALJALGFFC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JGALJALGFFC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JGALJALGFFC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
