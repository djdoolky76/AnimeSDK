#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int FieldCodec___c__16_1_TypeDefinitionIndex = 35717;

	template <typename T>
	class FieldCodec___c__16_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf", "<>c__16`1")->GetStaticField(0x0);
		}

		static ::System::Action_2<::MiHoYo::SDK::Protobuf::CodedOutputStream*, T>** StaticGet___9__16_1()
		{
			return (::System::Action_2<::MiHoYo::SDK::Protobuf::CodedOutputStream*, T>**)UnitySDK::FromName("MiHoYo.SDK.Protobuf", "<>c__16`1")->GetStaticField(0x0);
		}

		static ::System::Func_2<T, ::System::Int32>** StaticGet___9__16_2()
		{
			return (::System::Func_2<T, ::System::Int32>**)UnitySDK::FromName("MiHoYo.SDK.Protobuf", "<>c__16`1")->GetStaticField(0x0);
		}

	};
}
