#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCFPHHCOIHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OCFPHHCOIHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDAD610)
#define OCFPHHCOIHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDAD6B0)
#define OCFPHHCOIHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDAD300)
#define OCFPHHCOIHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDAD2D0)
#define OCFPHHCOIHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDAD2C0)
#define OCFPHHCOIHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDAD410)
#define OCFPHHCOIHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDAD340)
#define OCFPHHCOIHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDAD570)
#define OCFPHHCOIHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDAD280)
#define OCFPHHCOIHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDAD660)
#define OCFPHHCOIHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDAD630)
#define OCFPHHCOIHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDAD2B0)
#define OCFPHHCOIHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDAD5A0)
#define OCFPHHCOIHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDAD600)

inline static constexpr unsigned int OCFPHHCOIHI_TypeDefinitionIndex = 30467;

	class OCFPHHCOIHI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::OCFPHHCOIHI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OCFPHHCOIHI*>**)UnitySDK::FromName("", "OCFPHHCOIHI")->GetStaticField(0xC9C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFPHHCOIHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCFPHHCOIHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCFPHHCOIHI*))((::PBYTE)hIl2Cpp + OCFPHHCOIHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCFPHHCOIHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OCFPHHCOIHI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OCFPHHCOIHI*>*(*)())((::PBYTE)hIl2Cpp + OCFPHHCOIHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFPHHCOIHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCFPHHCOIHI* Clone()
		{
			return ((::OCFPHHCOIHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFPHHCOIHI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCFPHHCOIHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCFPHHCOIHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCFPHHCOIHI*))((::PBYTE)hIl2Cpp + OCFPHHCOIHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFPHHCOIHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFPHHCOIHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCFPHHCOIHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFPHHCOIHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCFPHHCOIHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCFPHHCOIHI*))((::PBYTE)hIl2Cpp + OCFPHHCOIHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCFPHHCOIHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
