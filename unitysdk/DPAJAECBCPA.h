#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMCBKMBDILL.h"
#include "unitysdk/System/Object.h"
class DPAJAECBCPA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPAJAECBCPA_ANLACKEGBOA_OFFSET UNITYSDK_OFFSET(0x1E1DB890)
#define DPAJAECBCPA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1DBDD0)
#define DPAJAECBCPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DC150)
#define DPAJAECBCPA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1DB850)
#define DPAJAECBCPA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1DB7A0)
#define DPAJAECBCPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DB6C0)
#define DPAJAECBCPA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1DB8E0)
#define DPAJAECBCPA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1DB8B0)
#define DPAJAECBCPA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1DBA50)
#define DPAJAECBCPA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1DB680)
#define DPAJAECBCPA_KCAALGGCMEB_OFFSET UNITYSDK_OFFSET(0x1E1DB8A0)
#define DPAJAECBCPA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1DBFB0)
#define DPAJAECBCPA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1DBEE0)
#define DPAJAECBCPA_MMCPFDOEACC_OFFSET UNITYSDK_OFFSET(0x1E1DB880)
#define DPAJAECBCPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1DB6B0)
#define DPAJAECBCPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1DBC60)
#define DPAJAECBCPA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1DBCC0)

inline static constexpr unsigned int DPAJAECBCPA_TypeDefinitionIndex = 30316;

	class DPAJAECBCPA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GMKPIOLPIHF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HBOIDHNNLKK; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::NMCBKMBDILL>* IGKHJOLFMFM; // 0x28
		static ::Google::Protobuf::MessageParser_1<::DPAJAECBCPA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DPAJAECBCPA*>**)UnitySDK::FromName("", "DPAJAECBCPA")->GetStaticField(0x395F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GFCJONOCGLD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DPAJAECBCPA")->GetStaticField(0x395F8);
		}

		static ::Google::Protobuf::FieldCodec_1<::NMCBKMBDILL>** StaticGet_AFAKJDNJAOB()
		{
			return (::Google::Protobuf::FieldCodec_1<::NMCBKMBDILL>**)UnitySDK::FromName("", "DPAJAECBCPA")->GetStaticField(0x39600);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CCAGOIGIDGG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DPAJAECBCPA")->GetStaticField(0x39608);
		}

		// static const ::System::Object LKEMFLHHAJD; // 0x0
		// static const ::System::Object EMHPMNBILAE; // 0x0
		// static const ::System::Object APBBOGPENFG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAJAECBCPA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPAJAECBCPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPAJAECBCPA*))((::PBYTE)hIl2Cpp + DPAJAECBCPA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPAJAECBCPA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DPAJAECBCPA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DPAJAECBCPA*>*(*)())((::PBYTE)hIl2Cpp + DPAJAECBCPA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAJAECBCPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPAJAECBCPA* Clone()
		{
			return ((::DPAJAECBCPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAJAECBCPA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MMCPFDOEACC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAJAECBCPA_MMCPFDOEACC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NMCBKMBDILL>* ANLACKEGBOA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NMCBKMBDILL>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAJAECBCPA_ANLACKEGBOA_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KCAALGGCMEB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAJAECBCPA_KCAALGGCMEB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPAJAECBCPA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPAJAECBCPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPAJAECBCPA*))((::PBYTE)hIl2Cpp + DPAJAECBCPA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAJAECBCPA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAJAECBCPA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPAJAECBCPA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAJAECBCPA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPAJAECBCPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPAJAECBCPA*))((::PBYTE)hIl2Cpp + DPAJAECBCPA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPAJAECBCPA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
