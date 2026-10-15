#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJBOELCMGFK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJBOELCMGFK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9490F0)
#define LJBOELCMGFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9493F0)
#define LJBOELCMGFK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E948C60)
#define LJBOELCMGFK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E948BD0)
#define LJBOELCMGFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E948B80)
#define LJBOELCMGFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E948DC0)
#define LJBOELCMGFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E948CC0)
#define LJBOELCMGFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E948EB0)
#define LJBOELCMGFK_IAIDMIHMLAM_OFFSET UNITYSDK_OFFSET(0x1E948C90)
#define LJBOELCMGFK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E948B40)
#define LJBOELCMGFK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E949230)
#define LJBOELCMGFK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9491E0)
#define LJBOELCMGFK_NKNEBECLBOF_OFFSET UNITYSDK_OFFSET(0x1E948CB0)
#define LJBOELCMGFK_OGFEKBBBEMA_OFFSET UNITYSDK_OFFSET(0x1E948CA0)
#define LJBOELCMGFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E948B70)
#define LJBOELCMGFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E948FB0)
#define LJBOELCMGFK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E949010)

inline static constexpr unsigned int LJBOELCMGFK_TypeDefinitionIndex = 27063;

	class LJBOELCMGFK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GNOBPDFMNBL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 OJGKLENJPDA; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LLFMJBMCIHI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LJBOELCMGFK")->GetStaticField(0x38540);
		}

		static ::Google::Protobuf::MessageParser_1<::LJBOELCMGFK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LJBOELCMGFK*>**)UnitySDK::FromName("", "LJBOELCMGFK")->GetStaticField(0x38548);
		}

		// static const ::System::Object OGKEGBEIFFP; // 0x0
		// static const ::System::Object EEMPBGGOLOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBOELCMGFK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJBOELCMGFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJBOELCMGFK*))((::PBYTE)hIl2Cpp + LJBOELCMGFK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJBOELCMGFK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LJBOELCMGFK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LJBOELCMGFK*>*(*)())((::PBYTE)hIl2Cpp + LJBOELCMGFK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBOELCMGFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJBOELCMGFK* Clone()
		{
			return ((::LJBOELCMGFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBOELCMGFK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IAIDMIHMLAM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBOELCMGFK_IAIDMIHMLAM_OFFSET))(this);
		}

		::System::UInt32 OGFEKBBBEMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBOELCMGFK_OGFEKBBBEMA_OFFSET))(this);
		}

		::System::Void NKNEBECLBOF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJBOELCMGFK_NKNEBECLBOF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJBOELCMGFK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJBOELCMGFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJBOELCMGFK*))((::PBYTE)hIl2Cpp + LJBOELCMGFK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBOELCMGFK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBOELCMGFK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJBOELCMGFK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBOELCMGFK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJBOELCMGFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJBOELCMGFK*))((::PBYTE)hIl2Cpp + LJBOELCMGFK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJBOELCMGFK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
