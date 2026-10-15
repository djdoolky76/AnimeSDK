#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }

#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B853260)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_GET_BITWISEDOUBLEEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1B8531A0)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_GET_BITWISENULLABLEDOUBLEEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1B853200)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_GET_BITWISENULLABLESINGLEEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1B853230)
#define GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_GET_BITWISESINGLEEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1B8531D0)

namespace Google::Protobuf::Collections
{
	class ProtobufEqualityComparers : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::EqualityComparer_1<::System::Double>** StaticGet__BitwiseDoubleEqualityComparer_k__BackingField()
		{
			return (::System::Collections::Generic::EqualityComparer_1<::System::Double>**)UnitySDK::FromName("Google.Protobuf.Collections", "ProtobufEqualityComparers")->GetStaticField(0xE060);
		}

		static ::System::Collections::Generic::EqualityComparer_1<::System::Nullable*>** StaticGet__BitwiseNullableSingleEqualityComparer_k__BackingField()
		{
			return (::System::Collections::Generic::EqualityComparer_1<::System::Nullable*>**)UnitySDK::FromName("Google.Protobuf.Collections", "ProtobufEqualityComparers")->GetStaticField(0xE068);
		}

		static ::System::Collections::Generic::EqualityComparer_1<::System::Single>** StaticGet__BitwiseSingleEqualityComparer_k__BackingField()
		{
			return (::System::Collections::Generic::EqualityComparer_1<::System::Single>**)UnitySDK::FromName("Google.Protobuf.Collections", "ProtobufEqualityComparers")->GetStaticField(0xE070);
		}

		static ::System::Collections::Generic::EqualityComparer_1<::System::Nullable*>** StaticGet__BitwiseNullableDoubleEqualityComparer_k__BackingField()
		{
			return (::System::Collections::Generic::EqualityComparer_1<::System::Nullable*>**)UnitySDK::FromName("Google.Protobuf.Collections", "ProtobufEqualityComparers")->GetStaticField(0xE078);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::EqualityComparer_1<::System::Double>* get_BitwiseDoubleEqualityComparer()
		{
			return ((::System::Collections::Generic::EqualityComparer_1<::System::Double>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_GET_BITWISEDOUBLEEQUALITYCOMPARER_OFFSET))();
		}

		static ::System::Collections::Generic::EqualityComparer_1<::System::Single>* get_BitwiseSingleEqualityComparer()
		{
			return ((::System::Collections::Generic::EqualityComparer_1<::System::Single>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_GET_BITWISESINGLEEQUALITYCOMPARER_OFFSET))();
		}

		static ::System::Collections::Generic::EqualityComparer_1<::System::Nullable*>* get_BitwiseNullableDoubleEqualityComparer()
		{
			return ((::System::Collections::Generic::EqualityComparer_1<::System::Nullable*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_GET_BITWISENULLABLEDOUBLEEQUALITYCOMPARER_OFFSET))();
		}

		static ::System::Collections::Generic::EqualityComparer_1<::System::Nullable*>* get_BitwiseNullableSingleEqualityComparer()
		{
			return ((::System::Collections::Generic::EqualityComparer_1<::System::Nullable*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_COLLECTIONS_PROTOBUFEQUALITYCOMPARERS_GET_BITWISENULLABLESINGLEEQUALITYCOMPARER_OFFSET))();
		}

	};
}
