#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJJHCDGNDPD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FJJHCDGNDPD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E376C80)
#define FJJHCDGNDPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E376EF0)
#define FJJHCDGNDPD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3766B0)
#define FJJHCDGNDPD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3765C0)
#define FJJHCDGNDPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E376530)
#define FJJHCDGNDPD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E376870)
#define FJJHCDGNDPD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E376720)
#define FJJHCDGNDPD_FNEEEBOHPDF_OFFSET UNITYSDK_OFFSET(0x1E376710)
#define FJJHCDGNDPD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E376980)
#define FJJHCDGNDPD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3764C0)
#define FJJHCDGNDPD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E376DB0)
#define FJJHCDGNDPD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E376D50)
#define FJJHCDGNDPD_NNDBCKCPLMH_OFFSET UNITYSDK_OFFSET(0x1E376700)
#define FJJHCDGNDPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E376520)
#define FJJHCDGNDPD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E376B40)
#define FJJHCDGNDPD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E376BA0)

inline static constexpr unsigned int FJJHCDGNDPD_TypeDefinitionIndex = 27625;

	class FJJHCDGNDPD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHLKOHLNFG; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AHJLAAIILKN; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MHJNOFMIGFL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FJJHCDGNDPD")->GetStaticField(0x59DC0);
		}

		static ::Google::Protobuf::MessageParser_1<::FJJHCDGNDPD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FJJHCDGNDPD*>**)UnitySDK::FromName("", "FJJHCDGNDPD")->GetStaticField(0x59DC8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HKGCEKNGLEG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FJJHCDGNDPD")->GetStaticField(0x59DD0);
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

		static ::Google::Protobuf::MessageParser_1<::FJJHCDGNDPD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FJJHCDGNDPD*>*(*)())((::PBYTE)hIl2Cpp + FJJHCDGNDPD_JJGHOBBFNJD_OFFSET))();
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
