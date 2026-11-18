#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FOUNDATION_SINGLETONMANAGER_ADDSINGLETONINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F37D170)
#define FOUNDATION_SINGLETONMANAGER_GETSINGLETONINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F37D510)
#define FOUNDATION_SINGLETONMANAGER_REMOVESINGLETONINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1F37D470)
#define FOUNDATION_SINGLETONMANAGER_REMOVESINGLETONINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F37D310)
#define FOUNDATION_SINGLETONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F37D650)

namespace Foundation
{
	inline static constexpr unsigned int SingletonManager_TypeDefinitionIndex = 8437;

	class SingletonManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet__staticSingetons()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SingletonManager_TypeDefinitionIndex)->GetStaticField(0x74C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet__singletons()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SingletonManager_TypeDefinitionIndex)->GetStaticField(0x74C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_SINGLETONMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void AddSingletonInstance(::System::Object* singleton, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_SINGLETONMANAGER_ADDSINGLETONINSTANCE_OFFSET))(singleton, type);
		}

		static ::System::Void RemoveSingletonInstance(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_SINGLETONMANAGER_REMOVESINGLETONINSTANCE_OFFSET))(type);
		}

		static ::System::Void RemoveSingletonInstance_1(::System::Object* singleton)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_SINGLETONMANAGER_REMOVESINGLETONINSTANCE_1_OFFSET))(singleton);
		}

		static ::System::Object* GetSingletonInstance(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_SINGLETONMANAGER_GETSINGLETONINSTANCE_OFFSET))(type);
		}
	};
}
