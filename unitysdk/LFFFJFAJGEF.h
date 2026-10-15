#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFFFJFAJGEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFFFJFAJGEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E90E980)
#define LFFFJFAJGEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E90EA20)
#define LFFFJFAJGEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E90E670)
#define LFFFJFAJGEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E90E640)
#define LFFFJFAJGEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E90E630)
#define LFFFJFAJGEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E90E780)
#define LFFFJFAJGEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E90E6B0)
#define LFFFJFAJGEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E90E8E0)
#define LFFFJFAJGEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E90E5F0)
#define LFFFJFAJGEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E90E9D0)
#define LFFFJFAJGEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E90E9A0)
#define LFFFJFAJGEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E90E620)
#define LFFFJFAJGEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E90E910)
#define LFFFJFAJGEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E90E970)

inline static constexpr unsigned int LFFFJFAJGEF_TypeDefinitionIndex = 31568;

	class LFFFJFAJGEF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::LFFFJFAJGEF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LFFFJFAJGEF*>**)UnitySDK::FromName("", "LFFFJFAJGEF")->GetStaticField(0x32A50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFFJFAJGEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFFFJFAJGEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFFFJFAJGEF*))((::PBYTE)hIl2Cpp + LFFFJFAJGEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFFFJFAJGEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LFFFJFAJGEF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LFFFJFAJGEF*>*(*)())((::PBYTE)hIl2Cpp + LFFFJFAJGEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFFJFAJGEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFFFJFAJGEF* Clone()
		{
			return ((::LFFFJFAJGEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFFJFAJGEF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFFFJFAJGEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFFFJFAJGEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFFFJFAJGEF*))((::PBYTE)hIl2Cpp + LFFFJFAJGEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFFJFAJGEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFFJFAJGEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFFFJFAJGEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFFJFAJGEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFFFJFAJGEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFFFJFAJGEF*))((::PBYTE)hIl2Cpp + LFFFJFAJGEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFFFJFAJGEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
