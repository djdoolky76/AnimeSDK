#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLBGMAEDODL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLBGMAEDODL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E883060)
#define KLBGMAEDODL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8832C0)
#define KLBGMAEDODL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E882C60)
#define KLBGMAEDODL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E882BD0)
#define KLBGMAEDODL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E882B80)
#define KLBGMAEDODL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E882D90)
#define KLBGMAEDODL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E882CA0)
#define KLBGMAEDODL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E882E80)
#define KLBGMAEDODL_GNAKEIEGCDI_OFFSET UNITYSDK_OFFSET(0x1E882C90)
#define KLBGMAEDODL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E882B40)
#define KLBGMAEDODL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E883120)
#define KLBGMAEDODL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8830D0)
#define KLBGMAEDODL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E882B70)
#define KLBGMAEDODL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E882F80)
#define KLBGMAEDODL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E882FE0)

inline static constexpr unsigned int KLBGMAEDODL_TypeDefinitionIndex = 33573;

	class KLBGMAEDODL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BCOHDKAHBCJ; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_KBBPPNNDJDN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KLBGMAEDODL")->GetStaticField(0x1FB10);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KLBGMAEDODL")->GetStaticField(0x1FB18);
		}

		// static const ::System::Object LLMAPPDKOPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBGMAEDODL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLBGMAEDODL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLBGMAEDODL*))((::PBYTE)hIl2Cpp + KLBGMAEDODL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLBGMAEDODL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KLBGMAEDODL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBGMAEDODL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLBGMAEDODL* Clone()
		{
			return ((::KLBGMAEDODL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBGMAEDODL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GNAKEIEGCDI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBGMAEDODL_GNAKEIEGCDI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLBGMAEDODL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLBGMAEDODL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLBGMAEDODL*))((::PBYTE)hIl2Cpp + KLBGMAEDODL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBGMAEDODL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBGMAEDODL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLBGMAEDODL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBGMAEDODL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLBGMAEDODL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLBGMAEDODL*))((::PBYTE)hIl2Cpp + KLBGMAEDODL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLBGMAEDODL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
