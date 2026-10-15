#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
namespace Codable { class JSONNode; }
namespace System { class Object; }

#define CODABLE_JSONNODE_VALUEENUMERATOR_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1300)
#define CODABLE_JSONNODE_VALUEENUMERATOR_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1360)
#define CODABLE_JSONNODE_VALUEENUMERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x12C0)
#define CODABLE_JSONNODE_VALUEENUMERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1400)
#define CODABLE_JSONNODE_VALUEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1450)
#define CODABLE_JSONNODE_VALUEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11D0)

namespace Codable
{
	struct alignas(4) JSONNode_ValueEnumerator
	{
		::Codable::JSONNode_Enumerator m_Enumerator; // 0x10
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_VALUEENUMERATOR_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_VALUEENUMERATOR_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::Codable::JSONNode_Enumerator a1)
		{
			return ((::System::Void(*)(::PVOID, ::Codable::JSONNode_Enumerator))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_VALUEENUMERATOR_CTOR_2_OFFSET))(this, a1);
		}

		::Codable::JSONNode* get_Current()
		{
			return ((::Codable::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_VALUEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_VALUEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		/*
		::Codable::JSONNode_ValueEnumerator GetEnumerator()
		{
			return ((::Codable::JSONNode_ValueEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_VALUEENUMERATOR_GETENUMERATOR_OFFSET))(this);
		}
		*/

	};
}
