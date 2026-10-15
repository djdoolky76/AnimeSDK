#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGMBIHBHLFK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGMBIHBHLFK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0B36D0)
#define CGMBIHBHLFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B3770)
#define CGMBIHBHLFK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0B33C0)
#define CGMBIHBHLFK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0B3390)
#define CGMBIHBHLFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B3380)
#define CGMBIHBHLFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0B34D0)
#define CGMBIHBHLFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0B3400)
#define CGMBIHBHLFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0B3630)
#define CGMBIHBHLFK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0B3340)
#define CGMBIHBHLFK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0B3720)
#define CGMBIHBHLFK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0B36F0)
#define CGMBIHBHLFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0B3370)
#define CGMBIHBHLFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0B3660)
#define CGMBIHBHLFK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0B36C0)

inline static constexpr unsigned int CGMBIHBHLFK_TypeDefinitionIndex = 32724;

	class CGMBIHBHLFK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CGMBIHBHLFK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CGMBIHBHLFK*>**)UnitySDK::FromName("", "CGMBIHBHLFK")->GetStaticField(0x149E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMBIHBHLFK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGMBIHBHLFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGMBIHBHLFK*))((::PBYTE)hIl2Cpp + CGMBIHBHLFK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGMBIHBHLFK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CGMBIHBHLFK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CGMBIHBHLFK*>*(*)())((::PBYTE)hIl2Cpp + CGMBIHBHLFK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMBIHBHLFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGMBIHBHLFK* Clone()
		{
			return ((::CGMBIHBHLFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMBIHBHLFK_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGMBIHBHLFK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGMBIHBHLFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGMBIHBHLFK*))((::PBYTE)hIl2Cpp + CGMBIHBHLFK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMBIHBHLFK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMBIHBHLFK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGMBIHBHLFK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMBIHBHLFK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGMBIHBHLFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGMBIHBHLFK*))((::PBYTE)hIl2Cpp + CGMBIHBHLFK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGMBIHBHLFK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
