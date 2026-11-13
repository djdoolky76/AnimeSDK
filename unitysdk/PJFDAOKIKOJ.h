#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKJEMHKOMJC;
class PJFDAOKIKOJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJFDAOKIKOJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2055DB60)
#define PJFDAOKIKOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x2055DE60)
#define PJFDAOKIKOJ_CLONE_OFFSET UNITYSDK_OFFSET(0x2055D6E0)
#define PJFDAOKIKOJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2055D630)
#define PJFDAOKIKOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x2055D5E0)
#define PJFDAOKIKOJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2055D8C0)
#define PJFDAOKIKOJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x2055D740)
#define PJFDAOKIKOJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2055D9E0)
#define PJFDAOKIKOJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2055D570)
#define PJFDAOKIKOJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2055DCA0)
#define PJFDAOKIKOJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2055DC00)
#define PJFDAOKIKOJ_MFOADEHHBHD_OFFSET UNITYSDK_OFFSET(0x2055D730)
#define PJFDAOKIKOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2055D5D0)
#define PJFDAOKIKOJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2055DA50)
#define PJFDAOKIKOJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x2055DAB0)

inline static constexpr unsigned int PJFDAOKIKOJ_TypeDefinitionIndex = 28861;

	class PJFDAOKIKOJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::GKJEMHKOMJC*>* JOGCKGNKPKA; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::GKJEMHKOMJC*>** StaticGet_FGOFMIEOJIB()
		{
			return (::Google::Protobuf::FieldCodec_1<::GKJEMHKOMJC*>**)UnitySDK::FromName("", "PJFDAOKIKOJ")->GetStaticField(0x3EA10);
		}

		static ::Google::Protobuf::MessageParser_1<::PJFDAOKIKOJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PJFDAOKIKOJ*>**)UnitySDK::FromName("", "PJFDAOKIKOJ")->GetStaticField(0x3EA18);
		}

		// static const ::System::Object ABCOAKOMPHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJFDAOKIKOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJFDAOKIKOJ*))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PJFDAOKIKOJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PJFDAOKIKOJ*>*(*)())((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJFDAOKIKOJ* Clone()
		{
			return ((::PJFDAOKIKOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GKJEMHKOMJC*>* MFOADEHHBHD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GKJEMHKOMJC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_MFOADEHHBHD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJFDAOKIKOJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJFDAOKIKOJ*))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJFDAOKIKOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJFDAOKIKOJ*))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
