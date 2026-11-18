#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadRunHandle_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadRunHandle_1_AssetLoadRunHandleChecker_TypeDefinitionIndex = 8611;

	template <typename T>
	class AssetLoadRunHandle_1_AssetLoadRunHandleChecker : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference_1<::System::Object*>*>** StaticGet_WeakRefCheckers()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLoadRunHandle_1_AssetLoadRunHandleChecker_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet__UseHandleChecker_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetLoadRunHandle_1_AssetLoadRunHandleChecker_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet__UseCheckerPool_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetLoadRunHandle_1_AssetLoadRunHandleChecker_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet__UseLoadStack_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetLoadRunHandle_1_AssetLoadRunHandleChecker_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Foundation::AssetLoadTask::AssetLoadRunHandle_1<T> handle; // 0x0
		::System::String* LoadStack; // 0x0
	};
}
