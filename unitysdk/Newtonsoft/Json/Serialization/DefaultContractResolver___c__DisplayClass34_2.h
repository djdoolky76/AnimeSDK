#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Newtonsoft::Json::Serialization { template <typename T> class ObjectConstructor_1; }
namespace System { class Object; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS34_2_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D49A0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS34_2__SETEXTENSIONDATADELEGATES_B__1_OFFSET UNITYSDK_OFFSET(0x1C3DE510)

namespace Newtonsoft::Json::Serialization
{
	template <typename T1, typename T2>
	class DefaultContractResolver___c__DisplayClass34_2 : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* createEnumerableWrapper; // 0x10
		::System::Object* CS___8__locals2; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS34_2_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair*>* _SetExtensionDataDelegates_b__1(::System::Object* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair*>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS34_2__SETEXTENSIONDATADELEGATES_B__1_OFFSET))(this, a1);
		}

	};
}
