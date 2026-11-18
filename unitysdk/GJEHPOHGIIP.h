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

#define GJEHPOHGIIP_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x18A02000)
#define GJEHPOHGIIP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A025F0)
#define GJEHPOHGIIP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18A02170)
#define GJEHPOHGIIP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18A02650)
#define GJEHPOHGIIP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18A021F0)
#define GJEHPOHGIIP__CTOR_OFFSET UNITYSDK_OFFSET(0x18A02860)

inline static constexpr unsigned int GJEHPOHGIIP_TypeDefinitionIndex = 83012;

class GJEHPOHGIIP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* LKAEJGAPLMJ; // 0x10
	::System::String* OJMALKHLPOM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEHPOHGIIP__CTOR_OFFSET))(this);
	}

	::System::Void ExposeMember(::OHDHAGLCAEB* NLKHAICJJAL, ::System::String* GLBEOLEENIJ)
	{
		return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + GJEHPOHGIIP_EXPOSEMEMBER_OFFSET))(this, NLKHAICJJAL, GLBEOLEENIJ);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GJEHPOHGIIP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GJEHPOHGIIP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GJEHPOHGIIP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GJEHPOHGIIP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
