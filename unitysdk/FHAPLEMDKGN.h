#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHAPLEMDKGN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHAPLEMDKGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E385E30)
#define FHAPLEMDKGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E385ED0)
#define FHAPLEMDKGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E385B20)
#define FHAPLEMDKGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E385AF0)
#define FHAPLEMDKGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E385AE0)
#define FHAPLEMDKGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E385C30)
#define FHAPLEMDKGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E385B60)
#define FHAPLEMDKGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E385D90)
#define FHAPLEMDKGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E385AA0)
#define FHAPLEMDKGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E385E80)
#define FHAPLEMDKGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E385E50)
#define FHAPLEMDKGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E385AD0)
#define FHAPLEMDKGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E385DC0)
#define FHAPLEMDKGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E385E20)

inline static constexpr unsigned int FHAPLEMDKGN_TypeDefinitionIndex = 28782;

	class FHAPLEMDKGN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FHAPLEMDKGN")->GetStaticField(0x5EF00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAPLEMDKGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHAPLEMDKGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHAPLEMDKGN*))((::PBYTE)hIl2Cpp + FHAPLEMDKGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHAPLEMDKGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FHAPLEMDKGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAPLEMDKGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHAPLEMDKGN* Clone()
		{
			return ((::FHAPLEMDKGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAPLEMDKGN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHAPLEMDKGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHAPLEMDKGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHAPLEMDKGN*))((::PBYTE)hIl2Cpp + FHAPLEMDKGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAPLEMDKGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAPLEMDKGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHAPLEMDKGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAPLEMDKGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHAPLEMDKGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHAPLEMDKGN*))((::PBYTE)hIl2Cpp + FHAPLEMDKGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHAPLEMDKGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
