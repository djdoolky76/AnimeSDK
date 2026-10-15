#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOCNDOCEOJM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOCNDOCEOJM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA77A90)
#define MOCNDOCEOJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA77D50)
#define MOCNDOCEOJM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA77610)
#define MOCNDOCEOJM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA77580)
#define MOCNDOCEOJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA77530)
#define MOCNDOCEOJM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA77790)
#define MOCNDOCEOJM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA77670)
#define MOCNDOCEOJM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA77880)
#define MOCNDOCEOJM_JDFFEJFPHBJ_OFFSET UNITYSDK_OFFSET(0x1EA77660)
#define MOCNDOCEOJM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA774C0)
#define MOCNDOCEOJM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA77B80)
#define MOCNDOCEOJM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA77B30)
#define MOCNDOCEOJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA77520)
#define MOCNDOCEOJM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA77980)
#define MOCNDOCEOJM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA779E0)

inline static constexpr unsigned int MOCNDOCEOJM_TypeDefinitionIndex = 34820;

	class MOCNDOCEOJM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JBEPELLPAJC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MOCNDOCEOJM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MOCNDOCEOJM*>**)UnitySDK::FromName("", "MOCNDOCEOJM")->GetStaticField(0x5A510);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OKDIKGNLFBH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MOCNDOCEOJM")->GetStaticField(0x5A518);
		}

		// static const ::System::Object PDFFAKHMEPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOCNDOCEOJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOCNDOCEOJM*))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOCNDOCEOJM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MOCNDOCEOJM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MOCNDOCEOJM*>*(*)())((::PBYTE)hIl2Cpp + MOCNDOCEOJM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOCNDOCEOJM* Clone()
		{
			return ((::MOCNDOCEOJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JDFFEJFPHBJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_JDFFEJFPHBJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOCNDOCEOJM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOCNDOCEOJM*))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOCNDOCEOJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOCNDOCEOJM*))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOCNDOCEOJM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
