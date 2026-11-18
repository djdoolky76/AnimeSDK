#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EENKDDFKHNJ_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xF9C10A0)
#define EENKDDFKHNJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF9C1690)
#define EENKDDFKHNJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF9C1210)
#define EENKDDFKHNJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xF9C16F0)
#define EENKDDFKHNJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xF9C1290)
#define EENKDDFKHNJ__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C1900)

inline static constexpr unsigned int EENKDDFKHNJ_TypeDefinitionIndex = 77748;

class EENKDDFKHNJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* LKAEJGAPLMJ; // 0x10
	::System::String* OJMALKHLPOM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENKDDFKHNJ__CTOR_OFFSET))(this);
	}

	::System::Void ExposeMember(::OHDHAGLCAEB* NLKHAICJJAL, ::System::String* GLBEOLEENIJ)
	{
		return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + EENKDDFKHNJ_EXPOSEMEMBER_OFFSET))(this, NLKHAICJJAL, GLBEOLEENIJ);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EENKDDFKHNJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EENKDDFKHNJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EENKDDFKHNJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EENKDDFKHNJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
