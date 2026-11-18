#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OneBoneLayer.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace SimpleJSON { class JSONNode; }

#define BLEND2DDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18DBDBB0)
#define BLEND2DDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18DBBC40)
#define BLEND2DDATA_FROMJSON_OFFSET UNITYSDK_OFFSET(0x18DBBCE0)
#define BLEND2DDATA_TOBINARY_OFFSET UNITYSDK_OFFSET(0x18DBDC40)
#define BLEND2DDATA_TOJSON_OFFSET UNITYSDK_OFFSET(0x18DBDB30)
#define BLEND2DDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18DBDCD0)

inline static constexpr unsigned int Blend2dData_TypeDefinitionIndex = 50379;

class Blend2dData : public ::System::Object
{
public:
	::Il2CppArray<::OneBoneLayer>* OneBoneLayerData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEND2DDATA__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BLEND2DDATA_FROMFLX_OFFSET))(this, node);
	}

	::System::Boolean FromJson(::SimpleJSON::JSONNode* node)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + BLEND2DDATA_FROMJSON_OFFSET))(this, node);
	}

	::SimpleJSON::JSONNode* ToJson()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEND2DDATA_TOJSON_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BLEND2DDATA_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
	}

	::System::Boolean ToBinary(::FKNIEPCILLG* byteArray)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*))((::PBYTE)hIl2Cpp + BLEND2DDATA_TOBINARY_OFFSET))(this, byteArray);
	}
};
