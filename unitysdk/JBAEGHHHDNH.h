#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBAEGHHHDNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JBAEGHHHDNH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6C4410)
#define JBAEGHHHDNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C44B0)
#define JBAEGHHHDNH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6C4100)
#define JBAEGHHHDNH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6C40D0)
#define JBAEGHHHDNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C40C0)
#define JBAEGHHHDNH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6C4210)
#define JBAEGHHHDNH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6C4140)
#define JBAEGHHHDNH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6C4370)
#define JBAEGHHHDNH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6C4080)
#define JBAEGHHHDNH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6C4460)
#define JBAEGHHHDNH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6C4430)
#define JBAEGHHHDNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6C40B0)
#define JBAEGHHHDNH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6C43A0)
#define JBAEGHHHDNH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6C4400)

inline static constexpr unsigned int JBAEGHHHDNH_TypeDefinitionIndex = 35090;

	class JBAEGHHHDNH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JBAEGHHHDNH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JBAEGHHHDNH*>**)UnitySDK::FromName("", "JBAEGHHHDNH")->GetStaticField(0x57A30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAEGHHHDNH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JBAEGHHHDNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBAEGHHHDNH*))((::PBYTE)hIl2Cpp + JBAEGHHHDNH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBAEGHHHDNH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JBAEGHHHDNH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JBAEGHHHDNH*>*(*)())((::PBYTE)hIl2Cpp + JBAEGHHHDNH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAEGHHHDNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JBAEGHHHDNH* Clone()
		{
			return ((::JBAEGHHHDNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAEGHHHDNH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JBAEGHHHDNH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JBAEGHHHDNH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBAEGHHHDNH*))((::PBYTE)hIl2Cpp + JBAEGHHHDNH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAEGHHHDNH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAEGHHHDNH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JBAEGHHHDNH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAEGHHHDNH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JBAEGHHHDNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBAEGHHHDNH*))((::PBYTE)hIl2Cpp + JBAEGHHHDNH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JBAEGHHHDNH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
