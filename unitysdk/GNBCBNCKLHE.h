#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNBCBNCKLHE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNBCBNCKLHE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4AB2E0)
#define GNBCBNCKLHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4AB380)
#define GNBCBNCKLHE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4AAFD0)
#define GNBCBNCKLHE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4AAFA0)
#define GNBCBNCKLHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4AAF90)
#define GNBCBNCKLHE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4AB0E0)
#define GNBCBNCKLHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4AB010)
#define GNBCBNCKLHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4AB240)
#define GNBCBNCKLHE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4AAF50)
#define GNBCBNCKLHE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4AB330)
#define GNBCBNCKLHE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4AB300)
#define GNBCBNCKLHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4AAF80)
#define GNBCBNCKLHE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4AB270)
#define GNBCBNCKLHE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4AB2D0)

inline static constexpr unsigned int GNBCBNCKLHE_TypeDefinitionIndex = 26141;

	class GNBCBNCKLHE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::GNBCBNCKLHE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GNBCBNCKLHE*>**)UnitySDK::FromName("", "GNBCBNCKLHE")->GetStaticField(0x1F460);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNBCBNCKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNBCBNCKLHE*))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNBCBNCKLHE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GNBCBNCKLHE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GNBCBNCKLHE*>*(*)())((::PBYTE)hIl2Cpp + GNBCBNCKLHE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNBCBNCKLHE* Clone()
		{
			return ((::GNBCBNCKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNBCBNCKLHE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNBCBNCKLHE*))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNBCBNCKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNBCBNCKLHE*))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNBCBNCKLHE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
