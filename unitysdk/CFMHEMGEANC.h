#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABOFJEIMLLJ;
class CFMHEMGEANC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CFMHEMGEANC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E079630)
#define CFMHEMGEANC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E079930)
#define CFMHEMGEANC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0791B0)
#define CFMHEMGEANC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E079100)
#define CFMHEMGEANC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0790B0)
#define CFMHEMGEANC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E079390)
#define CFMHEMGEANC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E079210)
#define CFMHEMGEANC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0794B0)
#define CFMHEMGEANC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E079040)
#define CFMHEMGEANC_MCJJOBAPFGE_OFFSET UNITYSDK_OFFSET(0x1E079200)
#define CFMHEMGEANC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E079770)
#define CFMHEMGEANC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0796D0)
#define CFMHEMGEANC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0790A0)
#define CFMHEMGEANC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E079520)
#define CFMHEMGEANC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E079580)

inline static constexpr unsigned int CFMHEMGEANC_TypeDefinitionIndex = 32670;

	class CFMHEMGEANC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ABOFJEIMLLJ*>* HDLFCGBGNFC; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::ABOFJEIMLLJ*>** StaticGet_IDPAPBFGELI()
		{
			return (::Google::Protobuf::FieldCodec_1<::ABOFJEIMLLJ*>**)UnitySDK::FromName("", "CFMHEMGEANC")->GetStaticField(0x12200);
		}

		static ::Google::Protobuf::MessageParser_1<::CFMHEMGEANC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CFMHEMGEANC*>**)UnitySDK::FromName("", "CFMHEMGEANC")->GetStaticField(0x12208);
		}

		// static const ::System::Object DHOPABMJKDP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMHEMGEANC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CFMHEMGEANC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFMHEMGEANC*))((::PBYTE)hIl2Cpp + CFMHEMGEANC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFMHEMGEANC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CFMHEMGEANC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CFMHEMGEANC*>*(*)())((::PBYTE)hIl2Cpp + CFMHEMGEANC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMHEMGEANC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CFMHEMGEANC* Clone()
		{
			return ((::CFMHEMGEANC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMHEMGEANC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ABOFJEIMLLJ*>* MCJJOBAPFGE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ABOFJEIMLLJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMHEMGEANC_MCJJOBAPFGE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFMHEMGEANC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFMHEMGEANC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFMHEMGEANC*))((::PBYTE)hIl2Cpp + CFMHEMGEANC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMHEMGEANC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMHEMGEANC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CFMHEMGEANC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMHEMGEANC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CFMHEMGEANC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFMHEMGEANC*))((::PBYTE)hIl2Cpp + CFMHEMGEANC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CFMHEMGEANC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
