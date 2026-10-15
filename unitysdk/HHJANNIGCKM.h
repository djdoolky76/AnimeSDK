#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHJANNIGCKM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HHJANNIGCKM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E588190)
#define HHJANNIGCKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E588450)
#define HHJANNIGCKM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E587C40)
#define HHJANNIGCKM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E587BB0)
#define HHJANNIGCKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E587B60)
#define HHJANNIGCKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E587E00)
#define HHJANNIGCKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E587CC0)
#define HHJANNIGCKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E587F00)
#define HHJANNIGCKM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E587AF0)
#define HHJANNIGCKM_KHINOGAEHBI_OFFSET UNITYSDK_OFFSET(0x1E587C90)
#define HHJANNIGCKM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E588280)
#define HHJANNIGCKM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E588230)
#define HHJANNIGCKM_OGJPOCLKHGL_OFFSET UNITYSDK_OFFSET(0x1E587CA0)
#define HHJANNIGCKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E587B50)
#define HHJANNIGCKM_PEGHDAEBHPA_OFFSET UNITYSDK_OFFSET(0x1E587CB0)
#define HHJANNIGCKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E588000)
#define HHJANNIGCKM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E588060)

inline static constexpr unsigned int HHJANNIGCKM_TypeDefinitionIndex = 28867;

	class HHJANNIGCKM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLHOIFJLDCM; // 0x18
		::System::Boolean FCJNHNKPEED; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_JNLOIKKDOFA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HHJANNIGCKM")->GetStaticField(0x394D0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HHJANNIGCKM")->GetStaticField(0x394D8);
		}

		// static const ::System::Object PMGMOKACFAP; // 0x0
		// static const ::System::Object COFJDNMKNJJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJANNIGCKM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HHJANNIGCKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHJANNIGCKM*))((::PBYTE)hIl2Cpp + HHJANNIGCKM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHJANNIGCKM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HHJANNIGCKM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJANNIGCKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HHJANNIGCKM* Clone()
		{
			return ((::HHJANNIGCKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJANNIGCKM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHINOGAEHBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJANNIGCKM_KHINOGAEHBI_OFFSET))(this);
		}

		::System::Boolean OGJPOCLKHGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJANNIGCKM_OGJPOCLKHGL_OFFSET))(this);
		}

		::System::Void PEGHDAEBHPA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HHJANNIGCKM_PEGHDAEBHPA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHJANNIGCKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HHJANNIGCKM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HHJANNIGCKM*))((::PBYTE)hIl2Cpp + HHJANNIGCKM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJANNIGCKM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJANNIGCKM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HHJANNIGCKM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJANNIGCKM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HHJANNIGCKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHJANNIGCKM*))((::PBYTE)hIl2Cpp + HHJANNIGCKM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HHJANNIGCKM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
