#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBANJNLBDBB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBANJNLBDBB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E033B30)
#define CBANJNLBDBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E033DF0)
#define CBANJNLBDBB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0336B0)
#define CBANJNLBDBB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E033620)
#define CBANJNLBDBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0335D0)
#define CBANJNLBDBB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E033830)
#define CBANJNLBDBB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E033710)
#define CBANJNLBDBB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E033920)
#define CBANJNLBDBB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E033560)
#define CBANJNLBDBB_JNPLBLHMIPP_OFFSET UNITYSDK_OFFSET(0x1E033700)
#define CBANJNLBDBB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E033C20)
#define CBANJNLBDBB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E033BD0)
#define CBANJNLBDBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0335C0)
#define CBANJNLBDBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E033A20)
#define CBANJNLBDBB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E033A80)

inline static constexpr unsigned int CBANJNLBDBB_TypeDefinitionIndex = 33221;

	class CBANJNLBDBB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BBCCLPMCMKP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CBANJNLBDBB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CBANJNLBDBB*>**)UnitySDK::FromName("", "CBANJNLBDBB")->GetStaticField(0x30F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LIFAFKEPHIB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CBANJNLBDBB")->GetStaticField(0x30F8);
		}

		// static const ::System::Object PBEGNMKHBOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBANJNLBDBB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBANJNLBDBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBANJNLBDBB*))((::PBYTE)hIl2Cpp + CBANJNLBDBB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBANJNLBDBB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CBANJNLBDBB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CBANJNLBDBB*>*(*)())((::PBYTE)hIl2Cpp + CBANJNLBDBB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBANJNLBDBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBANJNLBDBB* Clone()
		{
			return ((::CBANJNLBDBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBANJNLBDBB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JNPLBLHMIPP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBANJNLBDBB_JNPLBLHMIPP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBANJNLBDBB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBANJNLBDBB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBANJNLBDBB*))((::PBYTE)hIl2Cpp + CBANJNLBDBB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBANJNLBDBB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBANJNLBDBB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBANJNLBDBB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBANJNLBDBB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBANJNLBDBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBANJNLBDBB*))((::PBYTE)hIl2Cpp + CBANJNLBDBB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBANJNLBDBB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
