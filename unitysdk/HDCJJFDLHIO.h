#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDCJJFDLHIO;
class JHCEEAPHHGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDCJJFDLHIO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F83F0F0)
#define HDCJJFDLHIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F83F4B0)
#define HDCJJFDLHIO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F83ED10)
#define HDCJJFDLHIO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F83EC10)
#define HDCJJFDLHIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F83EBA0)
#define HDCJJFDLHIO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F83EDE0)
#define HDCJJFDLHIO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F83ED80)
#define HDCJJFDLHIO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F83EF30)
#define HDCJJFDLHIO_GICDDALMJDO_OFFSET UNITYSDK_OFFSET(0x1F83ED60)
#define HDCJJFDLHIO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F83EB30)
#define HDCJJFDLHIO_KKGOFMBMMAC_OFFSET UNITYSDK_OFFSET(0x1F83ED70)
#define HDCJJFDLHIO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F83F290)
#define HDCJJFDLHIO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F83F1D0)
#define HDCJJFDLHIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F83EB90)
#define HDCJJFDLHIO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F83EFB0)
#define HDCJJFDLHIO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F83F010)

inline static constexpr unsigned int HDCJJFDLHIO_TypeDefinitionIndex = 29778;

	class HDCJJFDLHIO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* DFFEGIMOJGB; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::JHCEEAPHHGK*>* IHIMDHMDDGC; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::JHCEEAPHHGK*>** StaticGet_LPJJCPOJOOD()
		{
			return (::Google::Protobuf::FieldCodec_1<::JHCEEAPHHGK*>**)UnitySDK::FromName("", "HDCJJFDLHIO")->GetStaticField(0x266E0);
		}

		static ::Google::Protobuf::MessageParser_1<::HDCJJFDLHIO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HDCJJFDLHIO*>**)UnitySDK::FromName("", "HDCJJFDLHIO")->GetStaticField(0x266E8);
		}

		static ::System::Object** StaticGet_LHGPCNNBOCL()
		{
			return (::System::Object**)UnitySDK::FromName("", "HDCJJFDLHIO")->GetStaticField(0x266F0);
		}

		// static const ::System::Object IOMCEPLLDFP; // 0x0
		// static const ::System::Object JEALEDAFMPN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCJJFDLHIO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDCJJFDLHIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDCJJFDLHIO*))((::PBYTE)hIl2Cpp + HDCJJFDLHIO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDCJJFDLHIO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HDCJJFDLHIO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HDCJJFDLHIO*>*(*)())((::PBYTE)hIl2Cpp + HDCJJFDLHIO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCJJFDLHIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDCJJFDLHIO* Clone()
		{
			return ((::HDCJJFDLHIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCJJFDLHIO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JHCEEAPHHGK*>* GICDDALMJDO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JHCEEAPHHGK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCJJFDLHIO_GICDDALMJDO_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* KKGOFMBMMAC()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCJJFDLHIO_KKGOFMBMMAC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDCJJFDLHIO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDCJJFDLHIO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDCJJFDLHIO*))((::PBYTE)hIl2Cpp + HDCJJFDLHIO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCJJFDLHIO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCJJFDLHIO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDCJJFDLHIO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCJJFDLHIO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDCJJFDLHIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDCJJFDLHIO*))((::PBYTE)hIl2Cpp + HDCJJFDLHIO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDCJJFDLHIO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
