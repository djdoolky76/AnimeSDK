#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEMAKFJPGDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEMAKFJPGDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE3BDD0)
#define NEMAKFJPGDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE3BE70)
#define NEMAKFJPGDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE3BA70)
#define NEMAKFJPGDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE3BA40)
#define NEMAKFJPGDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE3BA30)
#define NEMAKFJPGDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE3BBD0)
#define NEMAKFJPGDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE3BAE0)
#define NEMAKFJPGDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE3BD30)
#define NEMAKFJPGDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE3B9C0)
#define NEMAKFJPGDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE3BE20)
#define NEMAKFJPGDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE3BDF0)
#define NEMAKFJPGDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE3BA20)
#define NEMAKFJPGDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE3BD60)
#define NEMAKFJPGDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE3BDC0)

inline static constexpr unsigned int NEMAKFJPGDF_TypeDefinitionIndex = 30303;

	class NEMAKFJPGDF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NEMAKFJPGDF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NEMAKFJPGDF*>**)UnitySDK::FromName("", "NEMAKFJPGDF")->GetStaticField(0x69330);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMAKFJPGDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NEMAKFJPGDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEMAKFJPGDF*))((::PBYTE)hIl2Cpp + NEMAKFJPGDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEMAKFJPGDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NEMAKFJPGDF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NEMAKFJPGDF*>*(*)())((::PBYTE)hIl2Cpp + NEMAKFJPGDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMAKFJPGDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEMAKFJPGDF* Clone()
		{
			return ((::NEMAKFJPGDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMAKFJPGDF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEMAKFJPGDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEMAKFJPGDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEMAKFJPGDF*))((::PBYTE)hIl2Cpp + NEMAKFJPGDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMAKFJPGDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMAKFJPGDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NEMAKFJPGDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMAKFJPGDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NEMAKFJPGDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEMAKFJPGDF*))((::PBYTE)hIl2Cpp + NEMAKFJPGDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NEMAKFJPGDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
