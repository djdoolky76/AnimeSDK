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

#define OBOJKCGOBJL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDA4CF0)
#define OBOJKCGOBJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDA50C0)
#define OBOJKCGOBJL_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDA4840)
#define OBOJKCGOBJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDA4780)
#define OBOJKCGOBJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDA4730)
#define OBOJKCGOBJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDA49F0)
#define OBOJKCGOBJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDA48A0)
#define OBOJKCGOBJL_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1FDA4890)
#define OBOJKCGOBJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDA4B10)
#define OBOJKCGOBJL_HPBJLDOIJEA_OFFSET UNITYSDK_OFFSET(0x1FDA4870)
#define OBOJKCGOBJL_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1FDA4880)
#define OBOJKCGOBJL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDA46F0)
#define OBOJKCGOBJL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDA4EF0)
#define OBOJKCGOBJL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDA4E50)
#define OBOJKCGOBJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDA4720)
#define OBOJKCGOBJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDA4B80)
#define OBOJKCGOBJL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDA4BE0)

inline static constexpr unsigned int OBOJKCGOBJL_TypeDefinitionIndex = 30572;

	class OBOJKCGOBJL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BMHEAGKIILO*>* JFNHPLLNKOF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::DFNHMOGNJGJ HDAIPLJBGAB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OBOJKCGOBJL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OBOJKCGOBJL*>**)UnitySDK::FromName("", "OBOJKCGOBJL")->GetStaticField(0xC200);
		}

		static ::Google::Protobuf::FieldCodec_1<::BMHEAGKIILO*>** StaticGet_LDKDJJGOJFH()
		{
			return (::Google::Protobuf::FieldCodec_1<::BMHEAGKIILO*>**)UnitySDK::FromName("", "OBOJKCGOBJL")->GetStaticField(0xC208);
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
