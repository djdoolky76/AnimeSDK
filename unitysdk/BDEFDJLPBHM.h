#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GDEJIHKJAMF;
class JDKIGMGFMMP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDEFDJLPBHM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15068B70)
#define BDEFDJLPBHM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15068EF0)
#define BDEFDJLPBHM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15068BD0)
#define BDEFDJLPBHM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15068F70)
#define BDEFDJLPBHM__CTOR_OFFSET UNITYSDK_OFFSET(0x15069580)

inline static constexpr unsigned int BDEFDJLPBHM_TypeDefinitionIndex = 39508;

class BDEFDJLPBHM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::JDKIGMGFMMP*>* ALEOJPJGBAG; // 0x10
	::System::Collections::Generic::List_1<::JDKIGMGFMMP*>* HLOMCPLIKCN; // 0x18
	::GDEJIHKJAMF* ODNPEIOJOAO; // 0x20
	::MoleMole::Config::AidAttackType IIKLFCBKAKG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEFDJLPBHM__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BDEFDJLPBHM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BDEFDJLPBHM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BDEFDJLPBHM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BDEFDJLPBHM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
