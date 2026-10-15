#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace MiHoYo::SDK::Protobuf::Collections
{
	inline static constexpr unsigned int MapField_2_Codec_MessageAdapter_TypeDefinitionIndex = 35861;

	template <typename T1, typename T2>
	class MapField_2_Codec_MessageAdapter : public ::System::Object
	{
	public:
		::System::Object* codec; // 0x0
		T1 _Key_k__BackingField; // 0x0
		T2 _Value_k__BackingField; // 0x0
		static ::Il2CppArray<::System::Byte>** StaticGet_ZeroLengthMessageStreamData()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Collections", "MessageAdapter")->GetStaticField(0x0);
		}

	};
}
