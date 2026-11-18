#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int fsRecoveryProcessor_2___c_TypeDefinitionIndex = 30075;

	template <typename T1, typename T2>
	class fsRecoveryProcessor_2___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(fsRecoveryProcessor_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>, ::System::String*>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(fsRecoveryProcessor_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>, ::ParadoxNotion::Serialization::FullSerializer::fsData*>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>, ::ParadoxNotion::Serialization::FullSerializer::fsData*>**)Il2CppClass::FromTypeDefinitionIndex(fsRecoveryProcessor_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
