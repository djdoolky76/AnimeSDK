#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EBPKIAGDKPA;
class FKNIEPCILLG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDPKPPIGJPE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13621EB0)
#define BDPKPPIGJPE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13621C50)
#define BDPKPPIGJPE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13621F10)
#define BDPKPPIGJPE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13621CD0)
#define BDPKPPIGJPE__CTOR_OFFSET UNITYSDK_OFFSET(0x136220E0)

inline static constexpr unsigned int BDPKPPIGJPE_TypeDefinitionIndex = 56814;

class BDPKPPIGJPE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::EBPKIAGDKPA*>* JLNCOICNMMA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPKPPIGJPE__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BDPKPPIGJPE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BDPKPPIGJPE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BDPKPPIGJPE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BDPKPPIGJPE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
