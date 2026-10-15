#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAAMMAACICO;
class IODAFIBPAGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GAAMMAACICO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3E4E90)
#define GAAMMAACICO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E5220)
#define GAAMMAACICO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3E49F0)
#define GAAMMAACICO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3E4960)
#define GAAMMAACICO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E4920)
#define GAAMMAACICO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3E4BA0)
#define GAAMMAACICO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3E4A50)
#define GAAMMAACICO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3E4A40)
#define GAAMMAACICO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3E4CC0)
#define GAAMMAACICO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3E48E0)
#define GAAMMAACICO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3E5060)
#define GAAMMAACICO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3E4FC0)
#define GAAMMAACICO_NEMDIMKMKCK_OFFSET UNITYSDK_OFFSET(0x1E3E4A20)
#define GAAMMAACICO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3E4A30)
#define GAAMMAACICO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3E4910)
#define GAAMMAACICO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3E4D30)
#define GAAMMAACICO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3E4D90)

inline static constexpr unsigned int GAAMMAACICO_TypeDefinitionIndex = 26266;

	class GAAMMAACICO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>* NNFMIDOBAGL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::IODAFIBPAGM*>** StaticGet_NBEPGHJJGKC()
		{
			return (::Google::Protobuf::FieldCodec_1<::IODAFIBPAGM*>**)UnitySDK::FromName("", "GAAMMAACICO")->GetStaticField(0x601F0);
		}

		static ::Google::Protobuf::MessageParser_1<::GAAMMAACICO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GAAMMAACICO*>**)UnitySDK::FromName("", "GAAMMAACICO")->GetStaticField(0x601F8);
		}

		// static const ::System::Object CPPBNJLABGE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMMAACICO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAAMMAACICO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAAMMAACICO*))((::PBYTE)hIl2Cpp + GAAMMAACICO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAAMMAACICO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GAAMMAACICO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GAAMMAACICO*>*(*)())((::PBYTE)hIl2Cpp + GAAMMAACICO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMMAACICO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAAMMAACICO* Clone()
		{
			return ((::GAAMMAACICO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMMAACICO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>* NEMDIMKMKCK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMMAACICO_NEMDIMKMKCK_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMMAACICO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAAMMAACICO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAAMMAACICO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAAMMAACICO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAAMMAACICO*))((::PBYTE)hIl2Cpp + GAAMMAACICO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMMAACICO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMMAACICO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAAMMAACICO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMMAACICO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAAMMAACICO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAAMMAACICO*))((::PBYTE)hIl2Cpp + GAAMMAACICO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAAMMAACICO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
