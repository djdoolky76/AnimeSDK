#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLPJECICNDE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define LENOHJGFMNG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15184860)
#define LENOHJGFMNG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15184580)
#define LENOHJGFMNG_JCIODAGLLGB_1_OFFSET UNITYSDK_OFFSET(0x15185370)
#define LENOHJGFMNG_JCIODAGLLGB_2_OFFSET UNITYSDK_OFFSET(0x15185410)
#define LENOHJGFMNG_JCIODAGLLGB_3_OFFSET UNITYSDK_OFFSET(0x151854B0)
#define LENOHJGFMNG_JCIODAGLLGB_OFFSET UNITYSDK_OFFSET(0x151852B0)
#define LENOHJGFMNG_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x15184F00)
#define LENOHJGFMNG_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x15184D70)
#define LENOHJGFMNG__CTOR_OFFSET UNITYSDK_OFFSET(0x15184D60)

inline static constexpr unsigned int LENOHJGFMNG_TypeDefinitionIndex = 56907;

class LENOHJGFMNG : public ::System::Object
{
public:
	::System::Object* GPIOJBLKFAJ; // 0x10
	::BLPJECICNDE KGJGBAJEAPJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENOHJGFMNG__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LENOHJGFMNG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LENOHJGFMNG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + LENOHJGFMNG_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENOHJGFMNG_MKEFBLKCNKE_OFFSET))(this);
	}

	static ::System::String* JCIODAGLLGB(::LENOHJGFMNG* MNDIBLLFAJI)
	{
		return ((::System::String*(*)(::LENOHJGFMNG*))((::PBYTE)hIl2Cpp + LENOHJGFMNG_JCIODAGLLGB_OFFSET))(MNDIBLLFAJI);
	}

	static ::System::Int32 JCIODAGLLGB_1(::LENOHJGFMNG* MNDIBLLFAJI)
	{
		return ((::System::Int32(*)(::LENOHJGFMNG*))((::PBYTE)hIl2Cpp + LENOHJGFMNG_JCIODAGLLGB_1_OFFSET))(MNDIBLLFAJI);
	}

	static ::System::Boolean JCIODAGLLGB_2(::LENOHJGFMNG* MNDIBLLFAJI)
	{
		return ((::System::Boolean(*)(::LENOHJGFMNG*))((::PBYTE)hIl2Cpp + LENOHJGFMNG_JCIODAGLLGB_2_OFFSET))(MNDIBLLFAJI);
	}

	static ::System::Single JCIODAGLLGB_3(::LENOHJGFMNG* MNDIBLLFAJI)
	{
		return ((::System::Single(*)(::LENOHJGFMNG*))((::PBYTE)hIl2Cpp + LENOHJGFMNG_JCIODAGLLGB_3_OFFSET))(MNDIBLLFAJI);
	}
};
