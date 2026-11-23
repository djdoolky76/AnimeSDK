#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class EFDFD8D59E1B8215;
namespace System { class Object; }
namespace System { class String; }

#define EFDFD8D59E1B8215_LAYOUTJSON_TOLAYOUT_OFFSET UNITYSDK_OFFSET(0x3FD73A0)

inline static constexpr unsigned int EFDFD8D59E1B8215_LayoutJson_TypeDefinitionIndex = 14395;

struct alignas(8) EFDFD8D59E1B8215_LayoutJson
{
	::System::String* name; // 0x10
	::System::String* extend; // 0x18
	::Il2CppArray<::System::String*>* extendMultiple; // 0x20
	::System::String* format; // 0x28
	::System::String* beforeRender; // 0x30
	::System::String* runInBackground; // 0x38
	::Il2CppArray<::System::String*>* commonUsages; // 0x40
	::System::String* displayName; // 0x48
	::System::String* description; // 0x50
	::System::String* type; // 0x58
	::System::String* variant; // 0x60
	::System::Boolean isGenericTypeOfDevice; // 0x68
	::System::Boolean hideInUI; // 0x69
	::System::Byte _padding0[0x6];
	::Il2CppArray<::System::Object*>* controls; // 0x70

	::EFDFD8D59E1B8215* ToLayout()
	{
		return ((::EFDFD8D59E1B8215*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_LAYOUTJSON_TOLAYOUT_OFFSET))(this);
	}
};
