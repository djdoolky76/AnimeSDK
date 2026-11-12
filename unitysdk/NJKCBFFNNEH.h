#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJKCBFFNNEH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NJKCBFFNNEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F029B70)
#define NJKCBFFNNEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F029C10)
#define NJKCBFFNNEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F029860)
#define NJKCBFFNNEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F029830)
#define NJKCBFFNNEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F029820)
#define NJKCBFFNNEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F029970)
#define NJKCBFFNNEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0298A0)
#define NJKCBFFNNEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F029AD0)
#define NJKCBFFNNEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F0297E0)
#define NJKCBFFNNEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F029BC0)
#define NJKCBFFNNEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F029B90)
#define NJKCBFFNNEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F029810)
#define NJKCBFFNNEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F029B00)
#define NJKCBFFNNEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F029B60)

inline static constexpr unsigned int NJKCBFFNNEH_TypeDefinitionIndex = 28566;

	class NJKCBFFNNEH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NJKCBFFNNEH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NJKCBFFNNEH*>**)UnitySDK::FromName("", "NJKCBFFNNEH")->GetStaticField(0x6D280);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKCBFFNNEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJKCBFFNNEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKCBFFNNEH*))((::PBYTE)hIl2Cpp + NJKCBFFNNEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJKCBFFNNEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NJKCBFFNNEH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NJKCBFFNNEH*>*(*)())((::PBYTE)hIl2Cpp + NJKCBFFNNEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKCBFFNNEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJKCBFFNNEH* Clone()
		{
			return ((::NJKCBFFNNEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKCBFFNNEH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJKCBFFNNEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJKCBFFNNEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJKCBFFNNEH*))((::PBYTE)hIl2Cpp + NJKCBFFNNEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKCBFFNNEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKCBFFNNEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJKCBFFNNEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKCBFFNNEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJKCBFFNNEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKCBFFNNEH*))((::PBYTE)hIl2Cpp + NJKCBFFNNEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJKCBFFNNEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
