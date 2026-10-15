#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace HoudiniEngineUnity { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { class KeyValuePair; }

#define HOUDINIENGINEUNITY_JSONOBJECT___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9ADEC0)
#define HOUDINIENGINEUNITY_JSONOBJECT___C__DISPLAYCLASS23_0__REMOVE_B__0_OFFSET UNITYSDK_OFFSET(0x1B9AE9A0)

namespace HoudiniEngineUnity
{
	class JSONObject___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::JSONNode* aNode; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Remove_b__0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT___C__DISPLAYCLASS23_0__REMOVE_B__0_OFFSET))(this, a1);
		}

	};
}
