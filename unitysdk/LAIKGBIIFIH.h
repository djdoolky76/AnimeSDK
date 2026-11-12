#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCCIJHPLJOJ;
class LAIKGBIIFIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LAIKGBIIFIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC09CB0)
#define LAIKGBIIFIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC09FB0)
#define LAIKGBIIFIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC09830)
#define LAIKGBIIFIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC09780)
#define LAIKGBIIFIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC09730)
#define LAIKGBIIFIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC09A10)
#define LAIKGBIIFIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC09890)
#define LAIKGBIIFIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC09B30)
#define LAIKGBIIFIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC096C0)
#define LAIKGBIIFIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC09DF0)
#define LAIKGBIIFIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC09D50)
#define LAIKGBIIFIH_NPGNDNJCDPK_OFFSET UNITYSDK_OFFSET(0x1FC09880)
#define LAIKGBIIFIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC09720)
#define LAIKGBIIFIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC09BA0)
#define LAIKGBIIFIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC09C00)

inline static constexpr unsigned int LAIKGBIIFIH_TypeDefinitionIndex = 30104;

	class LAIKGBIIFIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BCCIJHPLJOJ*>* JFKDLMAOCIC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LAIKGBIIFIH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LAIKGBIIFIH*>**)UnitySDK::FromName("", "LAIKGBIIFIH")->GetStaticField(0x25DF0);
		}

		static ::Google::Protobuf::FieldCodec_1<::BCCIJHPLJOJ*>** StaticGet_GAAOIHLNLNN()
		{
			return (::Google::Protobuf::FieldCodec_1<::BCCIJHPLJOJ*>**)UnitySDK::FromName("", "LAIKGBIIFIH")->GetStaticField(0x25DF8);
		}

		// static const ::System::Object GJKLJKJIJMN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIKGBIIFIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LAIKGBIIFIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAIKGBIIFIH*))((::PBYTE)hIl2Cpp + LAIKGBIIFIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAIKGBIIFIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LAIKGBIIFIH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LAIKGBIIFIH*>*(*)())((::PBYTE)hIl2Cpp + LAIKGBIIFIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIKGBIIFIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LAIKGBIIFIH* Clone()
		{
			return ((::LAIKGBIIFIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIKGBIIFIH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BCCIJHPLJOJ*>* NPGNDNJCDPK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BCCIJHPLJOJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIKGBIIFIH_NPGNDNJCDPK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LAIKGBIIFIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LAIKGBIIFIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAIKGBIIFIH*))((::PBYTE)hIl2Cpp + LAIKGBIIFIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIKGBIIFIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIKGBIIFIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LAIKGBIIFIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIKGBIIFIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LAIKGBIIFIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAIKGBIIFIH*))((::PBYTE)hIl2Cpp + LAIKGBIIFIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LAIKGBIIFIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
