#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ICCGEAMLLAI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1609A700)
#define ICCGEAMLLAI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1609A1E0)
#define ICCGEAMLLAI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1609A760)
#define ICCGEAMLLAI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1609A260)
#define ICCGEAMLLAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1609ABC0)

inline static constexpr unsigned int ICCGEAMLLAI_TypeDefinitionIndex = 46965;

class ICCGEAMLLAI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* CFMEBIFLHAG; // 0x10
	::System::Int32 CHNKMPEACAG; // 0x18
	::System::Int32 OCHFOPAGKEG; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCGEAMLLAI__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ICCGEAMLLAI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICCGEAMLLAI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICCGEAMLLAI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ICCGEAMLLAI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
