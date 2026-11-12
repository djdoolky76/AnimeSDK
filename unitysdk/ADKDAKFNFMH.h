#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADKDAKFNFMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ADKDAKFNFMH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EFE6AC0)
#define ADKDAKFNFMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFE6B60)
#define ADKDAKFNFMH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EFE67B0)
#define ADKDAKFNFMH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFE6780)
#define ADKDAKFNFMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFE6770)
#define ADKDAKFNFMH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EFE68C0)
#define ADKDAKFNFMH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFE67F0)
#define ADKDAKFNFMH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFE6A20)
#define ADKDAKFNFMH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EFE6730)
#define ADKDAKFNFMH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EFE6B10)
#define ADKDAKFNFMH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EFE6AE0)
#define ADKDAKFNFMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EFE6760)
#define ADKDAKFNFMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFE6A50)
#define ADKDAKFNFMH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EFE6AB0)

inline static constexpr unsigned int ADKDAKFNFMH_TypeDefinitionIndex = 29533;

	class ADKDAKFNFMH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::ADKDAKFNFMH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ADKDAKFNFMH*>**)UnitySDK::FromName("", "ADKDAKFNFMH")->GetStaticField(0x379A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKDAKFNFMH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ADKDAKFNFMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADKDAKFNFMH*))((::PBYTE)hIl2Cpp + ADKDAKFNFMH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADKDAKFNFMH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ADKDAKFNFMH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ADKDAKFNFMH*>*(*)())((::PBYTE)hIl2Cpp + ADKDAKFNFMH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKDAKFNFMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ADKDAKFNFMH* Clone()
		{
			return ((::ADKDAKFNFMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKDAKFNFMH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ADKDAKFNFMH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ADKDAKFNFMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ADKDAKFNFMH*))((::PBYTE)hIl2Cpp + ADKDAKFNFMH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKDAKFNFMH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKDAKFNFMH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ADKDAKFNFMH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKDAKFNFMH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ADKDAKFNFMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADKDAKFNFMH*))((::PBYTE)hIl2Cpp + ADKDAKFNFMH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ADKDAKFNFMH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
