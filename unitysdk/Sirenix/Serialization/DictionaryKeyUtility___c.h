#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class Assembly; }

#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF9B890)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF9B8D0)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C___CCTOR_B__12_0_OFFSET UNITYSDK_OFFSET(0x1FF9B8E0)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C___CCTOR_B__12_1_OFFSET UNITYSDK_OFFSET(0x1FF9BA60)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DictionaryKeyUtility___c_TypeDefinitionIndex = 7580;

	class DictionaryKeyUtility___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DictionaryKeyUtility___c_TypeDefinitionIndex)->GetStaticField(0x6260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* __cctor_b__12_0(::System::Reflection::Assembly* ass)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C___CCTOR_B__12_0_OFFSET))(this, ass);
		}

		::System::Boolean __cctor_b__12_1(::System::Object* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C___CCTOR_B__12_1_OFFSET))(this, n);
		}
	};
}
