#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFBGKPADOEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFBGKPADOEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E16CC40)
#define DFBGKPADOEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E16CCE0)
#define DFBGKPADOEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E16C930)
#define DFBGKPADOEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E16C900)
#define DFBGKPADOEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E16C8F0)
#define DFBGKPADOEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E16CA40)
#define DFBGKPADOEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E16C970)
#define DFBGKPADOEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E16CBA0)
#define DFBGKPADOEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E16C8B0)
#define DFBGKPADOEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E16CC90)
#define DFBGKPADOEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E16CC60)
#define DFBGKPADOEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E16C8E0)
#define DFBGKPADOEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E16CBD0)
#define DFBGKPADOEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E16CC30)

inline static constexpr unsigned int DFBGKPADOEC_TypeDefinitionIndex = 26099;

	class DFBGKPADOEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::DFBGKPADOEC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DFBGKPADOEC*>**)UnitySDK::FromName("", "DFBGKPADOEC")->GetStaticField(0x2CD00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBGKPADOEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFBGKPADOEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFBGKPADOEC*))((::PBYTE)hIl2Cpp + DFBGKPADOEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFBGKPADOEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DFBGKPADOEC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DFBGKPADOEC*>*(*)())((::PBYTE)hIl2Cpp + DFBGKPADOEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBGKPADOEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFBGKPADOEC* Clone()
		{
			return ((::DFBGKPADOEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBGKPADOEC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFBGKPADOEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFBGKPADOEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFBGKPADOEC*))((::PBYTE)hIl2Cpp + DFBGKPADOEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBGKPADOEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBGKPADOEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFBGKPADOEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBGKPADOEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFBGKPADOEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFBGKPADOEC*))((::PBYTE)hIl2Cpp + DFBGKPADOEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFBGKPADOEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
