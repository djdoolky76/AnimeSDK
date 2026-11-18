#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHJFBMKMCOE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1354B4A0)
#define EHJFBMKMCOE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1354AB80)
#define EHJFBMKMCOE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1354B500)
#define EHJFBMKMCOE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1354AC00)
#define EHJFBMKMCOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1354BB60)

inline static constexpr unsigned int EHJFBMKMCOE_TypeDefinitionIndex = 82316;

class EHJFBMKMCOE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* HNODDINBKAH; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* HKDKPDHBGAH; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* KEBJOEPLHPO; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* GNBAACNNJFL; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* JFAAENMGMIM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJFBMKMCOE__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EHJFBMKMCOE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EHJFBMKMCOE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EHJFBMKMCOE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EHJFBMKMCOE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
