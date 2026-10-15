#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AODEGGFNDJP;
class HGMJFBCFJFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AODEGGFNDJP_BEMEFIJPBKC_OFFSET UNITYSDK_OFFSET(0x1E669C00)
#define AODEGGFNDJP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E669FF0)
#define AODEGGFNDJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E66A2F0)
#define AODEGGFNDJP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E669BD0)
#define AODEGGFNDJP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E669B20)
#define AODEGGFNDJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E669AD0)
#define AODEGGFNDJP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E669D50)
#define AODEGGFNDJP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E669C10)
#define AODEGGFNDJP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E669E70)
#define AODEGGFNDJP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E669A90)
#define AODEGGFNDJP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E66A130)
#define AODEGGFNDJP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E66A090)
#define AODEGGFNDJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E669AC0)
#define AODEGGFNDJP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E669EE0)
#define AODEGGFNDJP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E669F40)

inline static constexpr unsigned int AODEGGFNDJP_TypeDefinitionIndex = 28028;

	class AODEGGFNDJP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HGMJFBCFJFN*>* BPJNCMFCKBJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AODEGGFNDJP")->GetStaticField(0x40680);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JFCIBIJLOCN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "AODEGGFNDJP")->GetStaticField(0x40688);
		}

		// static const ::System::Object GNPGDFMNEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODEGGFNDJP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AODEGGFNDJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AODEGGFNDJP*))((::PBYTE)hIl2Cpp + AODEGGFNDJP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AODEGGFNDJP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AODEGGFNDJP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AODEGGFNDJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AODEGGFNDJP* Clone()
		{
			return ((::AODEGGFNDJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AODEGGFNDJP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HGMJFBCFJFN*>* BEMEFIJPBKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HGMJFBCFJFN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AODEGGFNDJP_BEMEFIJPBKC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AODEGGFNDJP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AODEGGFNDJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AODEGGFNDJP*))((::PBYTE)hIl2Cpp + AODEGGFNDJP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AODEGGFNDJP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AODEGGFNDJP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AODEGGFNDJP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AODEGGFNDJP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AODEGGFNDJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AODEGGFNDJP*))((::PBYTE)hIl2Cpp + AODEGGFNDJP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AODEGGFNDJP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
