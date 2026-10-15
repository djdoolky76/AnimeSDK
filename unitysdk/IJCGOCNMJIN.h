#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJCGOCNMJIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJCGOCNMJIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E691420)
#define IJCGOCNMJIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6914C0)
#define IJCGOCNMJIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E691110)
#define IJCGOCNMJIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6910E0)
#define IJCGOCNMJIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6910D0)
#define IJCGOCNMJIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E691220)
#define IJCGOCNMJIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E691150)
#define IJCGOCNMJIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E691380)
#define IJCGOCNMJIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E691090)
#define IJCGOCNMJIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E691470)
#define IJCGOCNMJIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E691440)
#define IJCGOCNMJIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6910C0)
#define IJCGOCNMJIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6913B0)
#define IJCGOCNMJIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E691410)

inline static constexpr unsigned int IJCGOCNMJIN_TypeDefinitionIndex = 31580;

	class IJCGOCNMJIN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::IJCGOCNMJIN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IJCGOCNMJIN*>**)UnitySDK::FromName("", "IJCGOCNMJIN")->GetStaticField(0x51E10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCGOCNMJIN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IJCGOCNMJIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJCGOCNMJIN*))((::PBYTE)hIl2Cpp + IJCGOCNMJIN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJCGOCNMJIN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IJCGOCNMJIN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IJCGOCNMJIN*>*(*)())((::PBYTE)hIl2Cpp + IJCGOCNMJIN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCGOCNMJIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IJCGOCNMJIN* Clone()
		{
			return ((::IJCGOCNMJIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCGOCNMJIN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJCGOCNMJIN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IJCGOCNMJIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJCGOCNMJIN*))((::PBYTE)hIl2Cpp + IJCGOCNMJIN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCGOCNMJIN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCGOCNMJIN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IJCGOCNMJIN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCGOCNMJIN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IJCGOCNMJIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJCGOCNMJIN*))((::PBYTE)hIl2Cpp + IJCGOCNMJIN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IJCGOCNMJIN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
