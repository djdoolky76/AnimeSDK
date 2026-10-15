#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace Google::Protobuf::Collections
{
	template <typename T1, typename T2>
	class MapField_2_Codec_MessageAdapter : public ::System::Object
	{
	public:
		::System::Object* codec; // 0x0
		T1 _Key_k__BackingField; // 0x0
		T2 _Value_k__BackingField; // 0x0
		static ::Il2CppArray<::System::Byte>** StaticGet_ZeroLengthMessageStreamData()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Google.Protobuf.Collections", "MessageAdapter")->GetStaticField(0x0);
		}

	};
}
