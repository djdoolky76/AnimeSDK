#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAGAOALHAJI;
class EKEOBMOKEFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BAGAOALHAJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7868E0)
#define BAGAOALHAJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E786BE0)
#define BAGAOALHAJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E786460)
#define BAGAOALHAJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7863B0)
#define BAGAOALHAJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E786360)
#define BAGAOALHAJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E786640)
#define BAGAOALHAJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7864C0)
#define BAGAOALHAJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E786760)
#define BAGAOALHAJI_IPLJHFBNIEJ_OFFSET UNITYSDK_OFFSET(0x1E7864B0)
#define BAGAOALHAJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7862F0)
#define BAGAOALHAJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E786A20)
#define BAGAOALHAJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E786980)
#define BAGAOALHAJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E786350)
#define BAGAOALHAJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7867D0)
#define BAGAOALHAJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E786830)

inline static constexpr unsigned int BAGAOALHAJI_TypeDefinitionIndex = 31779;

	class BAGAOALHAJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EKEOBMOKEFD*>* BLIHAOKCNJM; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::EKEOBMOKEFD*>** StaticGet_FPNMMDHGFBH()
		{
			return (::Google::Protobuf::FieldCodec_1<::EKEOBMOKEFD*>**)UnitySDK::FromName("", "BAGAOALHAJI")->GetStaticField(0x4C000);
		}

		static ::Google::Protobuf::MessageParser_1<::BAGAOALHAJI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BAGAOALHAJI*>**)UnitySDK::FromName("", "BAGAOALHAJI")->GetStaticField(0x4C008);
		}

		// static const ::System::Object DGIOFPBGOMF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGAOALHAJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BAGAOALHAJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAGAOALHAJI*))((::PBYTE)hIl2Cpp + BAGAOALHAJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAGAOALHAJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BAGAOALHAJI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BAGAOALHAJI*>*(*)())((::PBYTE)hIl2Cpp + BAGAOALHAJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGAOALHAJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BAGAOALHAJI* Clone()
		{
			return ((::BAGAOALHAJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGAOALHAJI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EKEOBMOKEFD*>* IPLJHFBNIEJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EKEOBMOKEFD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGAOALHAJI_IPLJHFBNIEJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAGAOALHAJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BAGAOALHAJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAGAOALHAJI*))((::PBYTE)hIl2Cpp + BAGAOALHAJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGAOALHAJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGAOALHAJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BAGAOALHAJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGAOALHAJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BAGAOALHAJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAGAOALHAJI*))((::PBYTE)hIl2Cpp + BAGAOALHAJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BAGAOALHAJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
