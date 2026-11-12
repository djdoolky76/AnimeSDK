#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFNHMOGNJGJ.h"
#include "unitysdk/System/Object.h"
class BMHEAGKIILO;
class OBOJKCGOBJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBOJKCGOBJL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F0A9850)
#define OBOJKCGOBJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0A9C20)
#define OBOJKCGOBJL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F0A93A0)
#define OBOJKCGOBJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0A92E0)
#define OBOJKCGOBJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0A9290)
#define OBOJKCGOBJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F0A9550)
#define OBOJKCGOBJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0A9400)
#define OBOJKCGOBJL_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1F0A93F0)
#define OBOJKCGOBJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F0A9670)
#define OBOJKCGOBJL_HPBJLDOIJEA_OFFSET UNITYSDK_OFFSET(0x1F0A93D0)
#define OBOJKCGOBJL_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1F0A93E0)
#define OBOJKCGOBJL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F0A9250)
#define OBOJKCGOBJL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F0A9A50)
#define OBOJKCGOBJL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F0A99B0)
#define OBOJKCGOBJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F0A9280)
#define OBOJKCGOBJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0A96E0)
#define OBOJKCGOBJL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F0A9740)

inline static constexpr unsigned int OBOJKCGOBJL_TypeDefinitionIndex = 30572;

	class OBOJKCGOBJL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BMHEAGKIILO*>* JFNHPLLNKOF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::DFNHMOGNJGJ HDAIPLJBGAB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OBOJKCGOBJL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OBOJKCGOBJL*>**)UnitySDK::FromName("", "OBOJKCGOBJL")->GetStaticField(0xB9D0);
		}

		static ::Google::Protobuf::FieldCodec_1<::BMHEAGKIILO*>** StaticGet_LDKDJJGOJFH()
		{
			return (::Google::Protobuf::FieldCodec_1<::BMHEAGKIILO*>**)UnitySDK::FromName("", "OBOJKCGOBJL")->GetStaticField(0xB9D8);
		}

		// static const ::System::Object IOEJLPPPHMJ; // 0x0
		// static const ::System::Object CGMFPGNNGEK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOJKCGOBJL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBOJKCGOBJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBOJKCGOBJL*))((::PBYTE)hIl2Cpp + OBOJKCGOBJL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBOJKCGOBJL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OBOJKCGOBJL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OBOJKCGOBJL*>*(*)())((::PBYTE)hIl2Cpp + OBOJKCGOBJL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOJKCGOBJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBOJKCGOBJL* Clone()
		{
			return ((::OBOJKCGOBJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOJKCGOBJL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BMHEAGKIILO*>* HPBJLDOIJEA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BMHEAGKIILO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOJKCGOBJL_HPBJLDOIJEA_OFFSET))(this);
		}

		::DFNHMOGNJGJ IOIFPHAMFDF()
		{
			return ((::DFNHMOGNJGJ(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOJKCGOBJL_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::DFNHMOGNJGJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFNHMOGNJGJ))((::PBYTE)hIl2Cpp + OBOJKCGOBJL_FHGAPGHAPFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBOJKCGOBJL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBOJKCGOBJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBOJKCGOBJL*))((::PBYTE)hIl2Cpp + OBOJKCGOBJL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOJKCGOBJL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOJKCGOBJL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBOJKCGOBJL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOJKCGOBJL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBOJKCGOBJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBOJKCGOBJL*))((::PBYTE)hIl2Cpp + OBOJKCGOBJL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBOJKCGOBJL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
