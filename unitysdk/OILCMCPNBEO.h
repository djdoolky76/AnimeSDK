#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABPLALCHNFA;
class OILCMCPNBEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OILCMCPNBEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE464C0)
#define OILCMCPNBEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE467C0)
#define OILCMCPNBEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE460A0)
#define OILCMCPNBEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE45FF0)
#define OILCMCPNBEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE45FA0)
#define OILCMCPNBEO_DBCHGGOAMDJ_OFFSET UNITYSDK_OFFSET(0x1DE460D0)
#define OILCMCPNBEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE46220)
#define OILCMCPNBEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE460E0)
#define OILCMCPNBEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE46340)
#define OILCMCPNBEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE45F60)
#define OILCMCPNBEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE46600)
#define OILCMCPNBEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE46560)
#define OILCMCPNBEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE45F90)
#define OILCMCPNBEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE463B0)
#define OILCMCPNBEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE46410)

inline static constexpr unsigned int OILCMCPNBEO_TypeDefinitionIndex = 29395;

	class OILCMCPNBEO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::ABPLALCHNFA*>* LEHOPNNGGFJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::ABPLALCHNFA*>** StaticGet_MLNEOKHLDAK()
		{
			return (::Google::Protobuf::FieldCodec_1<::ABPLALCHNFA*>**)UnitySDK::FromName("", "OILCMCPNBEO")->GetStaticField(0x1AF30);
		}

		static ::Google::Protobuf::MessageParser_1<::OILCMCPNBEO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OILCMCPNBEO*>**)UnitySDK::FromName("", "OILCMCPNBEO")->GetStaticField(0x1AF38);
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

		static ::Google::Protobuf::MessageParser_1<::OILCMCPNBEO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OILCMCPNBEO*>*(*)())((::PBYTE)hIl2Cpp + OILCMCPNBEO_JJGHOBBFNJD_OFFSET))();
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
