#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Codable { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { class KeyValuePair; }

#define CODABLE_JSONOBJECT___C__DISPLAYCLASS21_0_CTOR_OFFSET UNITYSDK_OFFSET(0xAF166A0)
#define CODABLE_JSONOBJECT___C__DISPLAYCLASS21_0__REMOVE_B__0_OFFSET UNITYSDK_OFFSET(0xAF17130)

namespace Codable
{
	class JSONObject___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::Codable::JSONNode* aNode; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT___C__DISPLAYCLASS21_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Remove_b__0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT___C__DISPLAYCLASS21_0__REMOVE_B__0_OFFSET))(this, a1);
		}

	};
}
