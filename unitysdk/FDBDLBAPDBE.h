#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDBDLBAPDBE;
class OKPIPFKONMG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDBDLBAPDBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2052E420)
#define FDBDLBAPDBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x2052E700)
#define FDBDLBAPDBE_CLONE_OFFSET UNITYSDK_OFFSET(0x2052E000)
#define FDBDLBAPDBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2052DF70)
#define FDBDLBAPDBE_CTOR_OFFSET UNITYSDK_OFFSET(0x2052DF30)
#define FDBDLBAPDBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2052E180)
#define FDBDLBAPDBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x2052E040)
#define FDBDLBAPDBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2052E2A0)
#define FDBDLBAPDBE_GPIMMGGCIHA_OFFSET UNITYSDK_OFFSET(0x2052E030)
#define FDBDLBAPDBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2052DEF0)
#define FDBDLBAPDBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2052E560)
#define FDBDLBAPDBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2052E4C0)
#define FDBDLBAPDBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2052DF20)
#define FDBDLBAPDBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2052E310)
#define FDBDLBAPDBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x2052E370)

inline static constexpr unsigned int FDBDLBAPDBE_TypeDefinitionIndex = 34147;

	class FDBDLBAPDBE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::OKPIPFKONMG*>* JKDJJIPHCFJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FDBDLBAPDBE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FDBDLBAPDBE*>**)UnitySDK::FromName("", "FDBDLBAPDBE")->GetStaticField(0x47270);
		}

		static ::Google::Protobuf::FieldCodec_1<::OKPIPFKONMG*>** StaticGet_OLDFJFEPMOI()
		{
			return (::Google::Protobuf::FieldCodec_1<::OKPIPFKONMG*>**)UnitySDK::FromName("", "FDBDLBAPDBE")->GetStaticField(0x47278);
		}

		// static const ::System::Object FJKIOGJCDNO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBDLBAPDBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDBDLBAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDBDLBAPDBE*))((::PBYTE)hIl2Cpp + FDBDLBAPDBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDBDLBAPDBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FDBDLBAPDBE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FDBDLBAPDBE*>*(*)())((::PBYTE)hIl2Cpp + FDBDLBAPDBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBDLBAPDBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDBDLBAPDBE* Clone()
		{
			return ((::FDBDLBAPDBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBDLBAPDBE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OKPIPFKONMG*>* GPIMMGGCIHA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OKPIPFKONMG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBDLBAPDBE_GPIMMGGCIHA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDBDLBAPDBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDBDLBAPDBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDBDLBAPDBE*))((::PBYTE)hIl2Cpp + FDBDLBAPDBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBDLBAPDBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBDLBAPDBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDBDLBAPDBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBDLBAPDBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDBDLBAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDBDLBAPDBE*))((::PBYTE)hIl2Cpp + FDBDLBAPDBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDBDLBAPDBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
