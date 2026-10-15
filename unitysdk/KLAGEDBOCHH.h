#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLAGEDBOCHH;
class LHCAJBPIHMC;
class NPCCFNJPBNL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLAGEDBOCHH_ALPHFIPICCP_OFFSET UNITYSDK_OFFSET(0x1E854B50)
#define KLAGEDBOCHH_BKIAGHJCPKC_OFFSET UNITYSDK_OFFSET(0x1E854B40)
#define KLAGEDBOCHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E854EC0)
#define KLAGEDBOCHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8552B0)
#define KLAGEDBOCHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E854B10)
#define KLAGEDBOCHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E854A40)
#define KLAGEDBOCHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8549E0)
#define KLAGEDBOCHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E854B90)
#define KLAGEDBOCHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E854B60)
#define KLAGEDBOCHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E854CE0)
#define KLAGEDBOCHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8549A0)
#define KLAGEDBOCHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E855090)
#define KLAGEDBOCHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E854FA0)
#define KLAGEDBOCHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8549D0)
#define KLAGEDBOCHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E854D70)
#define KLAGEDBOCHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E854DD0)

inline static constexpr unsigned int KLAGEDBOCHH_TypeDefinitionIndex = 34504;

	class KLAGEDBOCHH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NPCCFNJPBNL*>* JOBPCHAFMBO; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::LHCAJBPIHMC*>* CBEJLLEHICN; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::LHCAJBPIHMC*>** StaticGet_OCBPDLGAHDN()
		{
			return (::Google::Protobuf::FieldCodec_1<::LHCAJBPIHMC*>**)UnitySDK::FromName("", "KLAGEDBOCHH")->GetStaticField(0x1CDF0);
		}

		static ::Google::Protobuf::MessageParser_1<::KLAGEDBOCHH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KLAGEDBOCHH*>**)UnitySDK::FromName("", "KLAGEDBOCHH")->GetStaticField(0x1CDF8);
		}

		static ::Google::Protobuf::FieldCodec_1<::NPCCFNJPBNL*>** StaticGet_OPJKONMLFMG()
		{
			return (::Google::Protobuf::FieldCodec_1<::NPCCFNJPBNL*>**)UnitySDK::FromName("", "KLAGEDBOCHH")->GetStaticField(0x1CE00);
		}

		// static const ::System::Object DPHMLNINBKO; // 0x0
		// static const ::System::Object PPIPJOEPEPL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAGEDBOCHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLAGEDBOCHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLAGEDBOCHH*))((::PBYTE)hIl2Cpp + KLAGEDBOCHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLAGEDBOCHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KLAGEDBOCHH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KLAGEDBOCHH*>*(*)())((::PBYTE)hIl2Cpp + KLAGEDBOCHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAGEDBOCHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLAGEDBOCHH* Clone()
		{
			return ((::KLAGEDBOCHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAGEDBOCHH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LHCAJBPIHMC*>* BKIAGHJCPKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LHCAJBPIHMC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAGEDBOCHH_BKIAGHJCPKC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NPCCFNJPBNL*>* ALPHFIPICCP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NPCCFNJPBNL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAGEDBOCHH_ALPHFIPICCP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLAGEDBOCHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLAGEDBOCHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLAGEDBOCHH*))((::PBYTE)hIl2Cpp + KLAGEDBOCHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAGEDBOCHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAGEDBOCHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLAGEDBOCHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAGEDBOCHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLAGEDBOCHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLAGEDBOCHH*))((::PBYTE)hIl2Cpp + KLAGEDBOCHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLAGEDBOCHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
