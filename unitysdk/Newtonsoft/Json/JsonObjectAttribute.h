#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonContainerAttribute.h"
#include "unitysdk/Newtonsoft/Json/MemberSerialization.h"
#include "unitysdk/Newtonsoft/Json/Required.h"
namespace System { class Nullable; }

#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C398020)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_MEMBERSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1C398010)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonObjectAttribute_TypeDefinitionIndex = 9602;

	class JsonObjectAttribute : public ::Newtonsoft::Json::JsonContainerAttribute
	{
	public:
		::Newtonsoft::Json::MemberSerialization _memberSerialization; // 0x38
		::System::Nullable* _itemRequired; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::MemberSerialization get_MemberSerialization()
		{
			return ((::Newtonsoft::Json::MemberSerialization(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_MEMBERSERIALIZATION_OFFSET))(this);
		}

	};
}
