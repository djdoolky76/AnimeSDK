#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHHKEOGOMCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHHKEOGOMCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE32B80)
#define OHHKEOGOMCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE32DD0)
#define OHHKEOGOMCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE327F0)
#define OHHKEOGOMCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE32780)
#define OHHKEOGOMCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE32750)
#define OHHKEOGOMCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE32970)
#define OHHKEOGOMCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE32880)
#define OHHKEOGOMCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE32A60)
#define OHHKEOGOMCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE32710)
#define OHHKEOGOMCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE32C40)
#define OHHKEOGOMCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE32BF0)
#define OHHKEOGOMCA_NJOLPHBBMEA_OFFSET UNITYSDK_OFFSET(0x1DE32870)
#define OHHKEOGOMCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE32740)
#define OHHKEOGOMCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE32AA0)
#define OHHKEOGOMCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE32B00)

inline static constexpr unsigned int OHHKEOGOMCA_TypeDefinitionIndex = 33034;

	class OHHKEOGOMCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* BPKJDEGKECP; // 0x18
		static ::System::Object** StaticGet_HEGMHPIKOOA()
		{
			return (::System::Object**)UnitySDK::FromName("", "OHHKEOGOMCA")->GetStaticField(0x19950);
		}

		static ::Google::Protobuf::MessageParser_1<::OHHKEOGOMCA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OHHKEOGOMCA*>**)UnitySDK::FromName("", "OHHKEOGOMCA")->GetStaticField(0x19958);
		}

		// static const ::System::Object KKIOOJPEPJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHHKEOGOMCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHHKEOGOMCA*))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHHKEOGOMCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OHHKEOGOMCA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OHHKEOGOMCA*>*(*)())((::PBYTE)hIl2Cpp + OHHKEOGOMCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHHKEOGOMCA* Clone()
		{
			return ((::OHHKEOGOMCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* NJOLPHBBMEA()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_NJOLPHBBMEA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHHKEOGOMCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHHKEOGOMCA*))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHHKEOGOMCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHHKEOGOMCA*))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
