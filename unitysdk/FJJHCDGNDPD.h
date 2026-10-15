#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJJHCDGNDPD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FJJHCDGNDPD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3A4310)
#define FJJHCDGNDPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A4580)
#define FJJHCDGNDPD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3A3D40)
#define FJJHCDGNDPD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3A3C50)
#define FJJHCDGNDPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A3BC0)
#define FJJHCDGNDPD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3A3F00)
#define FJJHCDGNDPD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3A3DB0)
#define FJJHCDGNDPD_FNEEEBOHPDF_OFFSET UNITYSDK_OFFSET(0x1E3A3DA0)
#define FJJHCDGNDPD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3A4010)
#define FJJHCDGNDPD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3A3B50)
#define FJJHCDGNDPD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3A4440)
#define FJJHCDGNDPD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3A43E0)
#define FJJHCDGNDPD_NNDBCKCPLMH_OFFSET UNITYSDK_OFFSET(0x1E3A3D90)
#define FJJHCDGNDPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3A3BB0)
#define FJJHCDGNDPD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3A41D0)
#define FJJHCDGNDPD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3A4230)

inline static constexpr unsigned int FJJHCDGNDPD_TypeDefinitionIndex = 27625;

	class FJJHCDGNDPD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHLKOHLNFG; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AHJLAAIILKN; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FJJHCDGNDPD")->GetStaticField(0x60B10);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_HKGCEKNGLEG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FJJHCDGNDPD")->GetStaticField(0x60B18);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_MHJNOFMIGFL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FJJHCDGNDPD")->GetStaticField(0x60B20);
		}

		// static const ::System::Object JCOCCJNLOBJ; // 0x0
		// static const ::System::Object LLMFGOFPODL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJHCDGNDPD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FJJHCDGNDPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJJHCDGNDPD*))((::PBYTE)hIl2Cpp + FJJHCDGNDPD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJJHCDGNDPD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FJJHCDGNDPD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJHCDGNDPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FJJHCDGNDPD* Clone()
		{
			return ((::FJJHCDGNDPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJHCDGNDPD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NNDBCKCPLMH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJHCDGNDPD_NNDBCKCPLMH_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FNEEEBOHPDF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJHCDGNDPD_FNEEEBOHPDF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJJHCDGNDPD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FJJHCDGNDPD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJJHCDGNDPD*))((::PBYTE)hIl2Cpp + FJJHCDGNDPD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJHCDGNDPD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJHCDGNDPD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FJJHCDGNDPD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJHCDGNDPD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FJJHCDGNDPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJJHCDGNDPD*))((::PBYTE)hIl2Cpp + FJJHCDGNDPD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FJJHCDGNDPD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
