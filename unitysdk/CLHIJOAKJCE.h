#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLHIJOAKJCE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLHIJOAKJCE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0F93D0)
#define CLHIJOAKJCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0F9680)
#define CLHIJOAKJCE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0F8EC0)
#define CLHIJOAKJCE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0F8DD0)
#define CLHIJOAKJCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F8D40)
#define CLHIJOAKJCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0F8F60)
#define CLHIJOAKJCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0F8F30)
#define CLHIJOAKJCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0F9080)
#define CLHIJOAKJCE_GPOEBIHHIPN_OFFSET UNITYSDK_OFFSET(0x1E0F8F00)
#define CLHIJOAKJCE_ICBIEBJKECD_OFFSET UNITYSDK_OFFSET(0x1E0F8EF0)
#define CLHIJOAKJCE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0F8D00)
#define CLHIJOAKJCE_JNELGGIGBLG_OFFSET UNITYSDK_OFFSET(0x1E0F8F10)
#define CLHIJOAKJCE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0F9570)
#define CLHIJOAKJCE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0F9500)
#define CLHIJOAKJCE_PBHAGCACGHM_OFFSET UNITYSDK_OFFSET(0x1E0F8F20)
#define CLHIJOAKJCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0F8D30)
#define CLHIJOAKJCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0F9240)
#define CLHIJOAKJCE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0F92A0)

inline static constexpr unsigned int CLHIJOAKJCE_TypeDefinitionIndex = 26428;

	class CLHIJOAKJCE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LDLMBIFHIGP; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EEBIGLPNIDO; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 OEENOCHDPGG; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CEHFGJHMLDP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CLHIJOAKJCE")->GetStaticField(0x1D2B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MBAALDMILFH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CLHIJOAKJCE")->GetStaticField(0x1D2B8);
		}

		static ::Google::Protobuf::MessageParser_1<::CLHIJOAKJCE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CLHIJOAKJCE*>**)UnitySDK::FromName("", "CLHIJOAKJCE")->GetStaticField(0x1D2C0);
		}

		// static const ::System::Object MDPKMIPMCLD; // 0x0
		// static const ::System::Object BNDGEJDEDCE; // 0x0
		// static const ::System::Object KAPMMBGIELE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHIJOAKJCE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLHIJOAKJCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLHIJOAKJCE*))((::PBYTE)hIl2Cpp + CLHIJOAKJCE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLHIJOAKJCE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CLHIJOAKJCE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CLHIJOAKJCE*>*(*)())((::PBYTE)hIl2Cpp + CLHIJOAKJCE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHIJOAKJCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLHIJOAKJCE* Clone()
		{
			return ((::CLHIJOAKJCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHIJOAKJCE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ICBIEBJKECD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHIJOAKJCE_ICBIEBJKECD_OFFSET))(this);
		}

		::System::UInt32 GPOEBIHHIPN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHIJOAKJCE_GPOEBIHHIPN_OFFSET))(this);
		}

		::System::Void JNELGGIGBLG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLHIJOAKJCE_JNELGGIGBLG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PBHAGCACGHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHIJOAKJCE_PBHAGCACGHM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLHIJOAKJCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLHIJOAKJCE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLHIJOAKJCE*))((::PBYTE)hIl2Cpp + CLHIJOAKJCE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHIJOAKJCE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHIJOAKJCE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLHIJOAKJCE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHIJOAKJCE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLHIJOAKJCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLHIJOAKJCE*))((::PBYTE)hIl2Cpp + CLHIJOAKJCE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLHIJOAKJCE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
