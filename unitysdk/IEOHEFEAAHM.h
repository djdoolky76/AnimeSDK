#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/OMADHHOMDJC.h"

class FKNIEPCILLG;
class OMFJMGPMDCK;
namespace System { class String; }

#define IEOHEFEAAHM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xEBBF900)
#define IEOHEFEAAHM_FROMFLX_OFFSET UNITYSDK_OFFSET(0xEBBF460)
#define IEOHEFEAAHM_HPBNGCJKDKO_OFFSET UNITYSDK_OFFSET(0xEBBFC20)
#define IEOHEFEAAHM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xEBBF9B0)
#define IEOHEFEAAHM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xEBBF530)
#define IEOHEFEAAHM__CTOR_OFFSET UNITYSDK_OFFSET(0xEBBFC10)

inline static constexpr unsigned int IEOHEFEAAHM_TypeDefinitionIndex = 44138;

class IEOHEFEAAHM : public ::System::Object
{
public:
	::Il2CppArray<::OMFJMGPMDCK*>* JPNFACEPIKN; // 0x10
	::System::String* BJBDNGAHDAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOHEFEAAHM__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IEOHEFEAAHM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IEOHEFEAAHM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IEOHEFEAAHM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IEOHEFEAAHM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean HPBNGCJKDKO(::OMADHHOMDJC& AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::OMADHHOMDJC&))((::PBYTE)hIl2Cpp + IEOHEFEAAHM_HPBNGCJKDKO_OFFSET))(this, AAOCANGHBDG);
	}
};
