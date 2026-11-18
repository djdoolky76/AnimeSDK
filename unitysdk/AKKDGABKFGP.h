#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class IEOHEFEAAHM;
class PJLHFGMHOLP;
namespace System { class String; }

#define AKKDGABKFGP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x134D83A0)
#define AKKDGABKFGP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x134D7DC0)
#define AKKDGABKFGP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x134D8450)
#define AKKDGABKFGP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x134D7E90)
#define AKKDGABKFGP__CTOR_OFFSET UNITYSDK_OFFSET(0x134D8730)

inline static constexpr unsigned int AKKDGABKFGP_TypeDefinitionIndex = 85159;

class AKKDGABKFGP : public ::System::Object
{
public:
	::Il2CppArray<::PJLHFGMHOLP*>* BAFBIKLDJAF; // 0x10
	::System::String* ALLMHAPINPA; // 0x18
	::Il2CppArray<::IEOHEFEAAHM*>* EPLLFBOOCCP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKDGABKFGP__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AKKDGABKFGP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AKKDGABKFGP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AKKDGABKFGP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AKKDGABKFGP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
