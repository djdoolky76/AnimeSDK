#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBPJGCJEGJB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MBPJGCJEGJB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9F0730)
#define MBPJGCJEGJB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F0A30)
#define MBPJGCJEGJB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9F02A0)
#define MBPJGCJEGJB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9F0210)
#define MBPJGCJEGJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F01C0)
#define MBPJGCJEGJB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9F0400)
#define MBPJGCJEGJB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9F0300)
#define MBPJGCJEGJB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9F04F0)
#define MBPJGCJEGJB_GOLPFFCDICE_OFFSET UNITYSDK_OFFSET(0x1E9F02F0)
#define MBPJGCJEGJB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9F0180)
#define MBPJGCJEGJB_MDHIEPGAFKH_OFFSET UNITYSDK_OFFSET(0x1E9F02D0)
#define MBPJGCJEGJB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9F0870)
#define MBPJGCJEGJB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9F0820)
#define MBPJGCJEGJB_OGMHHLBHKOF_OFFSET UNITYSDK_OFFSET(0x1E9F02E0)
#define MBPJGCJEGJB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9F01B0)
#define MBPJGCJEGJB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9F05F0)
#define MBPJGCJEGJB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9F0650)

inline static constexpr unsigned int MBPJGCJEGJB_TypeDefinitionIndex = 32890;

	class MBPJGCJEGJB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AJNKIIMGJGP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JCGMPJONLCA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MBPJGCJEGJB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MBPJGCJEGJB*>**)UnitySDK::FromName("", "MBPJGCJEGJB")->GetStaticField(0x469B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MECEIKNALLO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MBPJGCJEGJB")->GetStaticField(0x469B8);
		}

		// static const ::System::Object MJKIPNILNNO; // 0x0
		// static const ::System::Object GAHLJEECCFB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPJGCJEGJB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MBPJGCJEGJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBPJGCJEGJB*))((::PBYTE)hIl2Cpp + MBPJGCJEGJB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBPJGCJEGJB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MBPJGCJEGJB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MBPJGCJEGJB*>*(*)())((::PBYTE)hIl2Cpp + MBPJGCJEGJB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPJGCJEGJB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MBPJGCJEGJB* Clone()
		{
			return ((::MBPJGCJEGJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPJGCJEGJB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MDHIEPGAFKH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPJGCJEGJB_MDHIEPGAFKH_OFFSET))(this);
		}

		::System::UInt32 OGMHHLBHKOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPJGCJEGJB_OGMHHLBHKOF_OFFSET))(this);
		}

		::System::Void GOLPFFCDICE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBPJGCJEGJB_GOLPFFCDICE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBPJGCJEGJB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MBPJGCJEGJB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBPJGCJEGJB*))((::PBYTE)hIl2Cpp + MBPJGCJEGJB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPJGCJEGJB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPJGCJEGJB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MBPJGCJEGJB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPJGCJEGJB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MBPJGCJEGJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBPJGCJEGJB*))((::PBYTE)hIl2Cpp + MBPJGCJEGJB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MBPJGCJEGJB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
