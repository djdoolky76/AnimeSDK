#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBDAGCMMFPK.h"
#include "unitysdk/FCCJAAKCJMO.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class IHPKKNHNLHF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MBAOHJLIJHD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11F2E050)
#define MBAOHJLIJHD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11F2C590)
#define MBAOHJLIJHD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11F2E0B0)
#define MBAOHJLIJHD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11F2C610)
#define MBAOHJLIJHD__CTOR_OFFSET UNITYSDK_OFFSET(0x11F2E940)

inline static constexpr unsigned int MBAOHJLIJHD_TypeDefinitionIndex = 67285;

class MBAOHJLIJHD : public ::System::Object
{
public:
	::System::String* LJLHGFHGMLA; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>* HPGFFHGHFLH; // 0x18
	::System::String* NNBGBODOLKI; // 0x20
	::System::String* NOLFMJCDADD; // 0x28
	::System::String* MGEDBKBHJPM; // 0x30
	::System::Collections::Generic::List_1<::FCCJAAKCJMO>* EDBMNCOIFGM; // 0x38
	::System::String* GMNJCOBGDOC; // 0x40
	::System::Collections::Generic::List_1<::IHPKKNHNLHF*>* GABMIMJOCGD; // 0x48
	::System::String* NENBFPKKNGF; // 0x50
	::System::String* DFCIHCMGFJI; // 0x58
	::System::Collections::Generic::List_1<::DBDAGCMMFPK>* OIKKDHLFBBG; // 0x60
	::System::Boolean PPOHMNEICGA; // 0x68
	::System::Boolean LCEHCDGLDPA; // 0x69
	::System::Boolean BLJALHFLPMA; // 0x6A
	::System::Byte _padding0[0x1];
	::System::Int32 DKJEJNAPAFE; // 0x6C
	::System::Int32 DEONBGKOHJP; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAOHJLIJHD__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MBAOHJLIJHD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MBAOHJLIJHD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MBAOHJLIJHD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MBAOHJLIJHD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
