#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABPLALCHNFA;
class OILCMCPNBEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OILCMCPNBEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE73BF0)
#define OILCMCPNBEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE73EF0)
#define OILCMCPNBEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE737D0)
#define OILCMCPNBEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE73720)
#define OILCMCPNBEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE736D0)
#define OILCMCPNBEO_DBCHGGOAMDJ_OFFSET UNITYSDK_OFFSET(0x1DE73800)
#define OILCMCPNBEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE73950)
#define OILCMCPNBEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE73810)
#define OILCMCPNBEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE73A70)
#define OILCMCPNBEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE73690)
#define OILCMCPNBEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE73D30)
#define OILCMCPNBEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE73C90)
#define OILCMCPNBEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE736C0)
#define OILCMCPNBEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE73AE0)
#define OILCMCPNBEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE73B40)

inline static constexpr unsigned int OILCMCPNBEO_TypeDefinitionIndex = 29395;

	class OILCMCPNBEO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::ABPLALCHNFA*>* LEHOPNNGGFJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OILCMCPNBEO")->GetStaticField(0x1D4F0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_MLNEOKHLDAK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OILCMCPNBEO")->GetStaticField(0x1D4F8);
		}

		// static const ::System::Object NIHHLCHNKMP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OILCMCPNBEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OILCMCPNBEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OILCMCPNBEO*))((::PBYTE)hIl2Cpp + OILCMCPNBEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OILCMCPNBEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OILCMCPNBEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OILCMCPNBEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OILCMCPNBEO* Clone()
		{
			return ((::OILCMCPNBEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OILCMCPNBEO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ABPLALCHNFA*>* DBCHGGOAMDJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ABPLALCHNFA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OILCMCPNBEO_DBCHGGOAMDJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OILCMCPNBEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OILCMCPNBEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OILCMCPNBEO*))((::PBYTE)hIl2Cpp + OILCMCPNBEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OILCMCPNBEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OILCMCPNBEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OILCMCPNBEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OILCMCPNBEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OILCMCPNBEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OILCMCPNBEO*))((::PBYTE)hIl2Cpp + OILCMCPNBEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OILCMCPNBEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
