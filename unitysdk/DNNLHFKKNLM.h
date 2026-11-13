#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPJCKMPBAFC;
class DNNLHFKKNLM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DNNLHFKKNLM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x201E9890)
#define DNNLHFKKNLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x201E9B70)
#define DNNLHFKKNLM_CLONE_OFFSET UNITYSDK_OFFSET(0x201E9470)
#define DNNLHFKKNLM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x201E93E0)
#define DNNLHFKKNLM_CTOR_OFFSET UNITYSDK_OFFSET(0x201E93A0)
#define DNNLHFKKNLM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201E95F0)
#define DNNLHFKKNLM_EQUALS_OFFSET UNITYSDK_OFFSET(0x201E94B0)
#define DNNLHFKKNLM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x201E9710)
#define DNNLHFKKNLM_GMFJIGKNIEO_OFFSET UNITYSDK_OFFSET(0x201E94A0)
#define DNNLHFKKNLM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x201E9360)
#define DNNLHFKKNLM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x201E99D0)
#define DNNLHFKKNLM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x201E9930)
#define DNNLHFKKNLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201E9390)
#define DNNLHFKKNLM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x201E9780)
#define DNNLHFKKNLM_WRITETO_OFFSET UNITYSDK_OFFSET(0x201E97E0)

inline static constexpr unsigned int DNNLHFKKNLM_TypeDefinitionIndex = 31447;

	class DNNLHFKKNLM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BPJCKMPBAFC*>* IKGIOHHOPJK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DNNLHFKKNLM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DNNLHFKKNLM*>**)UnitySDK::FromName("", "DNNLHFKKNLM")->GetStaticField(0x36C90);
		}

		static ::Google::Protobuf::FieldCodec_1<::BPJCKMPBAFC*>** StaticGet_HEDJPFNIPPG()
		{
			return (::Google::Protobuf::FieldCodec_1<::BPJCKMPBAFC*>**)UnitySDK::FromName("", "DNNLHFKKNLM")->GetStaticField(0x36C98);
		}

		// static const ::System::Object PINNOEFIMLF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNLHFKKNLM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DNNLHFKKNLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNNLHFKKNLM*))((::PBYTE)hIl2Cpp + DNNLHFKKNLM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNNLHFKKNLM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DNNLHFKKNLM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DNNLHFKKNLM*>*(*)())((::PBYTE)hIl2Cpp + DNNLHFKKNLM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNLHFKKNLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DNNLHFKKNLM* Clone()
		{
			return ((::DNNLHFKKNLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNLHFKKNLM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BPJCKMPBAFC*>* GMFJIGKNIEO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BPJCKMPBAFC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNLHFKKNLM_GMFJIGKNIEO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNNLHFKKNLM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DNNLHFKKNLM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNNLHFKKNLM*))((::PBYTE)hIl2Cpp + DNNLHFKKNLM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNLHFKKNLM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNLHFKKNLM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DNNLHFKKNLM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNLHFKKNLM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DNNLHFKKNLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNNLHFKKNLM*))((::PBYTE)hIl2Cpp + DNNLHFKKNLM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DNNLHFKKNLM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
