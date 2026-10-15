#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCAJNMLLIED;
class IMIOIKDAJOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IMIOIKDAJOK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E68AFF0)
#define IMIOIKDAJOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E68B320)
#define IMIOIKDAJOK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E68A8E0)
#define IMIOIKDAJOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E68A870)
#define IMIOIKDAJOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E68A860)
#define IMIOIKDAJOK_EOOJEDIKKEL_OFFSET UNITYSDK_OFFSET(0x1E68A970)
#define IMIOIKDAJOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E68AAF0)
#define IMIOIKDAJOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E68A980)
#define IMIOIKDAJOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E68ADC0)
#define IMIOIKDAJOK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E68A820)
#define IMIOIKDAJOK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E68B150)
#define IMIOIKDAJOK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E68B050)
#define IMIOIKDAJOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E68A850)
#define IMIOIKDAJOK_PDHEAGHGFBI_OFFSET UNITYSDK_OFFSET(0x1E68A960)
#define IMIOIKDAJOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E68AF00)
#define IMIOIKDAJOK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E68AF60)

inline static constexpr unsigned int IMIOIKDAJOK_TypeDefinitionIndex = 32452;

	class IMIOIKDAJOK : public ::System::Object
	{
	public:
		::BCAJNMLLIED* OOPMJECACJK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IMIOIKDAJOK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IMIOIKDAJOK*>**)UnitySDK::FromName("", "IMIOIKDAJOK")->GetStaticField(0x52B60);
		}

		// static const ::System::Object CMNPBEMLKOF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIOIKDAJOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IMIOIKDAJOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMIOIKDAJOK*))((::PBYTE)hIl2Cpp + IMIOIKDAJOK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMIOIKDAJOK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IMIOIKDAJOK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IMIOIKDAJOK*>*(*)())((::PBYTE)hIl2Cpp + IMIOIKDAJOK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIOIKDAJOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IMIOIKDAJOK* Clone()
		{
			return ((::IMIOIKDAJOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIOIKDAJOK_CLONE_OFFSET))(this);
		}

		::BCAJNMLLIED* PDHEAGHGFBI()
		{
			return ((::BCAJNMLLIED*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIOIKDAJOK_PDHEAGHGFBI_OFFSET))(this);
		}

		::System::Void EOOJEDIKKEL(::BCAJNMLLIED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCAJNMLLIED*))((::PBYTE)hIl2Cpp + IMIOIKDAJOK_EOOJEDIKKEL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMIOIKDAJOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IMIOIKDAJOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IMIOIKDAJOK*))((::PBYTE)hIl2Cpp + IMIOIKDAJOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIOIKDAJOK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIOIKDAJOK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IMIOIKDAJOK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIOIKDAJOK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IMIOIKDAJOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMIOIKDAJOK*))((::PBYTE)hIl2Cpp + IMIOIKDAJOK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IMIOIKDAJOK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
