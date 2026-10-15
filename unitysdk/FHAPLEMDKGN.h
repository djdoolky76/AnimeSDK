#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHAPLEMDKGN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHAPLEMDKGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3587E0)
#define FHAPLEMDKGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E358880)
#define FHAPLEMDKGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3584D0)
#define FHAPLEMDKGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3584A0)
#define FHAPLEMDKGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E358490)
#define FHAPLEMDKGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3585E0)
#define FHAPLEMDKGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E358510)
#define FHAPLEMDKGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E358740)
#define FHAPLEMDKGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E358450)
#define FHAPLEMDKGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E358830)
#define FHAPLEMDKGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E358800)
#define FHAPLEMDKGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E358480)
#define FHAPLEMDKGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E358770)
#define FHAPLEMDKGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3587D0)

inline static constexpr unsigned int FHAPLEMDKGN_TypeDefinitionIndex = 28782;

	class FHAPLEMDKGN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FHAPLEMDKGN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FHAPLEMDKGN*>**)UnitySDK::FromName("", "FHAPLEMDKGN")->GetStaticField(0x560D0);
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

		static ::Google::Protobuf::MessageParser_1<::FHAPLEMDKGN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FHAPLEMDKGN*>*(*)())((::PBYTE)hIl2Cpp + FHAPLEMDKGN_JJGHOBBFNJD_OFFSET))();
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
