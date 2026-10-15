#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HENPKNCKGGI.h"
#include "unitysdk/System/Object.h"
class CMBGLKEMOGF;
class EPFJLNKPEPK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CMBGLKEMOGF_ANIGJLBJCOO_OFFSET UNITYSDK_OFFSET(0x1E0FF470)
#define CMBGLKEMOGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0FF900)
#define CMBGLKEMOGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FFCB0)
#define CMBGLKEMOGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0FF440)
#define CMBGLKEMOGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0FF3B0)
#define CMBGLKEMOGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FF370)
#define CMBGLKEMOGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0FF5F0)
#define CMBGLKEMOGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0FF4A0)
#define CMBGLKEMOGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0FF720)
#define CMBGLKEMOGF_GICDDALMJDO_OFFSET UNITYSDK_OFFSET(0x1E0FF490)
#define CMBGLKEMOGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0FF330)
#define CMBGLKEMOGF_KMNOPJDAHGO_OFFSET UNITYSDK_OFFSET(0x1E0FF480)
#define CMBGLKEMOGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0FFAF0)
#define CMBGLKEMOGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0FFA50)
#define CMBGLKEMOGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0FF360)
#define CMBGLKEMOGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0FF790)
#define CMBGLKEMOGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0FF7F0)

inline static constexpr unsigned int CMBGLKEMOGF_TypeDefinitionIndex = 31509;

	class CMBGLKEMOGF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EPFJLNKPEPK*>* IHIMDHMDDGC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::HENPKNCKGGI HFCBDBHMJAN; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_LPJJCPOJOOD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CMBGLKEMOGF")->GetStaticField(0x1DBA0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CMBGLKEMOGF")->GetStaticField(0x1DBA8);
		}

		// static const ::System::Object CDKGLMIKBDE; // 0x0
		// static const ::System::Object IOMCEPLLDFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBGLKEMOGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CMBGLKEMOGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMBGLKEMOGF*))((::PBYTE)hIl2Cpp + CMBGLKEMOGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMBGLKEMOGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CMBGLKEMOGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBGLKEMOGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CMBGLKEMOGF* Clone()
		{
			return ((::CMBGLKEMOGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBGLKEMOGF_CLONE_OFFSET))(this);
		}

		::HENPKNCKGGI ANIGJLBJCOO()
		{
			return ((::HENPKNCKGGI(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBGLKEMOGF_ANIGJLBJCOO_OFFSET))(this);
		}

		::System::Void KMNOPJDAHGO(::HENPKNCKGGI a1)
		{
			return ((::System::Void(*)(::PVOID, ::HENPKNCKGGI))((::PBYTE)hIl2Cpp + CMBGLKEMOGF_KMNOPJDAHGO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EPFJLNKPEPK*>* GICDDALMJDO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EPFJLNKPEPK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBGLKEMOGF_GICDDALMJDO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMBGLKEMOGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CMBGLKEMOGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CMBGLKEMOGF*))((::PBYTE)hIl2Cpp + CMBGLKEMOGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBGLKEMOGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBGLKEMOGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CMBGLKEMOGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBGLKEMOGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CMBGLKEMOGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMBGLKEMOGF*))((::PBYTE)hIl2Cpp + CMBGLKEMOGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CMBGLKEMOGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
