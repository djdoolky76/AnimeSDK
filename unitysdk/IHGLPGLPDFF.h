#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHGLPGLPDFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IHGLPGLPDFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E62FD60)
#define IHGLPGLPDFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E62FE00)
#define IHGLPGLPDFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E62FA50)
#define IHGLPGLPDFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E62FA20)
#define IHGLPGLPDFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E62FA10)
#define IHGLPGLPDFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E62FB60)
#define IHGLPGLPDFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E62FA90)
#define IHGLPGLPDFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E62FCC0)
#define IHGLPGLPDFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E62F9D0)
#define IHGLPGLPDFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E62FDB0)
#define IHGLPGLPDFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E62FD80)
#define IHGLPGLPDFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E62FA00)
#define IHGLPGLPDFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E62FCF0)
#define IHGLPGLPDFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E62FD50)

inline static constexpr unsigned int IHGLPGLPDFF_TypeDefinitionIndex = 31262;

	class IHGLPGLPDFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::IHGLPGLPDFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IHGLPGLPDFF*>**)UnitySDK::FromName("", "IHGLPGLPDFF")->GetStaticField(0x4D440);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IHGLPGLPDFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGLPGLPDFF*))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHGLPGLPDFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IHGLPGLPDFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IHGLPGLPDFF*>*(*)())((::PBYTE)hIl2Cpp + IHGLPGLPDFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IHGLPGLPDFF* Clone()
		{
			return ((::IHGLPGLPDFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IHGLPGLPDFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHGLPGLPDFF*))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IHGLPGLPDFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGLPGLPDFF*))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
