#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCCIJHPLJOJ;
class DFOFPKEOPEH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFOFPKEOPEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F485980)
#define DFOFPKEOPEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F485C80)
#define DFOFPKEOPEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F485500)
#define DFOFPKEOPEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F485450)
#define DFOFPKEOPEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F485400)
#define DFOFPKEOPEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4856E0)
#define DFOFPKEOPEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F485560)
#define DFOFPKEOPEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F485800)
#define DFOFPKEOPEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F485390)
#define DFOFPKEOPEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F485AC0)
#define DFOFPKEOPEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F485A20)
#define DFOFPKEOPEH_NPGNDNJCDPK_OFFSET UNITYSDK_OFFSET(0x1F485550)
#define DFOFPKEOPEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4853F0)
#define DFOFPKEOPEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F485870)
#define DFOFPKEOPEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4858D0)

inline static constexpr unsigned int DFOFPKEOPEH_TypeDefinitionIndex = 30037;

	class DFOFPKEOPEH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BCCIJHPLJOJ*>* JFKDLMAOCIC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DFOFPKEOPEH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DFOFPKEOPEH*>**)UnitySDK::FromName("", "DFOFPKEOPEH")->GetStaticField(0x2ECF0);
		}

		static ::Google::Protobuf::FieldCodec_1<::BCCIJHPLJOJ*>** StaticGet_GAAOIHLNLNN()
		{
			return (::Google::Protobuf::FieldCodec_1<::BCCIJHPLJOJ*>**)UnitySDK::FromName("", "DFOFPKEOPEH")->GetStaticField(0x2ECF8);
		}

		// static const ::System::Object GJKLJKJIJMN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOFPKEOPEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFOFPKEOPEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFOFPKEOPEH*))((::PBYTE)hIl2Cpp + DFOFPKEOPEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFOFPKEOPEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DFOFPKEOPEH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DFOFPKEOPEH*>*(*)())((::PBYTE)hIl2Cpp + DFOFPKEOPEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOFPKEOPEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFOFPKEOPEH* Clone()
		{
			return ((::DFOFPKEOPEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOFPKEOPEH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BCCIJHPLJOJ*>* NPGNDNJCDPK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BCCIJHPLJOJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOFPKEOPEH_NPGNDNJCDPK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFOFPKEOPEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFOFPKEOPEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFOFPKEOPEH*))((::PBYTE)hIl2Cpp + DFOFPKEOPEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOFPKEOPEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOFPKEOPEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFOFPKEOPEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOFPKEOPEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFOFPKEOPEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFOFPKEOPEH*))((::PBYTE)hIl2Cpp + DFOFPKEOPEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFOFPKEOPEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
