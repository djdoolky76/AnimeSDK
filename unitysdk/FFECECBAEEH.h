#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFECECBAEEH;
class OGEIHMPCFKA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FFECECBAEEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20549490)
#define FFECECBAEEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x20549790)
#define FFECECBAEEH_CLONE_OFFSET UNITYSDK_OFFSET(0x20549010)
#define FFECECBAEEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20548F60)
#define FFECECBAEEH_CTOR_OFFSET UNITYSDK_OFFSET(0x20548F10)
#define FFECECBAEEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205491F0)
#define FFECECBAEEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x20549070)
#define FFECECBAEEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20549310)
#define FFECECBAEEH_GLPGMDEGLEN_OFFSET UNITYSDK_OFFSET(0x20549060)
#define FFECECBAEEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20548EA0)
#define FFECECBAEEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205495D0)
#define FFECECBAEEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20549530)
#define FFECECBAEEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20548F00)
#define FFECECBAEEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20549380)
#define FFECECBAEEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x205493E0)

inline static constexpr unsigned int FFECECBAEEH_TypeDefinitionIndex = 30568;

	class FFECECBAEEH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::OGEIHMPCFKA*>* JPBEBBGOHJO; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::OGEIHMPCFKA*>** StaticGet_IHJKNLBFKLG()
		{
			return (::Google::Protobuf::FieldCodec_1<::OGEIHMPCFKA*>**)UnitySDK::FromName("", "FFECECBAEEH")->GetStaticField(0x4BD70);
		}

		static ::Google::Protobuf::MessageParser_1<::FFECECBAEEH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FFECECBAEEH*>**)UnitySDK::FromName("", "FFECECBAEEH")->GetStaticField(0x4BD78);
		}

		// static const ::System::Object CJPOHPBFLDB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFECECBAEEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FFECECBAEEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFECECBAEEH*))((::PBYTE)hIl2Cpp + FFECECBAEEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFECECBAEEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FFECECBAEEH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FFECECBAEEH*>*(*)())((::PBYTE)hIl2Cpp + FFECECBAEEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFECECBAEEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FFECECBAEEH* Clone()
		{
			return ((::FFECECBAEEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFECECBAEEH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OGEIHMPCFKA*>* GLPGMDEGLEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OGEIHMPCFKA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFECECBAEEH_GLPGMDEGLEN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFECECBAEEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FFECECBAEEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FFECECBAEEH*))((::PBYTE)hIl2Cpp + FFECECBAEEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFECECBAEEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFECECBAEEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FFECECBAEEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFECECBAEEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FFECECBAEEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFECECBAEEH*))((::PBYTE)hIl2Cpp + FFECECBAEEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FFECECBAEEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
