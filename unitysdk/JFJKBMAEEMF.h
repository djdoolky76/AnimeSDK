#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFJKBMAEEMF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFJKBMAEEMF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E72CC80)
#define JFJKBMAEEMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72CD20)
#define JFJKBMAEEMF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E72C970)
#define JFJKBMAEEMF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E72C940)
#define JFJKBMAEEMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72C930)
#define JFJKBMAEEMF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E72CA80)
#define JFJKBMAEEMF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E72C9B0)
#define JFJKBMAEEMF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E72CBE0)
#define JFJKBMAEEMF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E72C8F0)
#define JFJKBMAEEMF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E72CCD0)
#define JFJKBMAEEMF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E72CCA0)
#define JFJKBMAEEMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E72C920)
#define JFJKBMAEEMF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E72CC10)
#define JFJKBMAEEMF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E72CC70)

inline static constexpr unsigned int JFJKBMAEEMF_TypeDefinitionIndex = 26166;

	class JFJKBMAEEMF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JFJKBMAEEMF")->GetStaticField(0x5FD20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJKBMAEEMF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFJKBMAEEMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFJKBMAEEMF*))((::PBYTE)hIl2Cpp + JFJKBMAEEMF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFJKBMAEEMF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JFJKBMAEEMF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJKBMAEEMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFJKBMAEEMF* Clone()
		{
			return ((::JFJKBMAEEMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJKBMAEEMF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFJKBMAEEMF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFJKBMAEEMF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFJKBMAEEMF*))((::PBYTE)hIl2Cpp + JFJKBMAEEMF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJKBMAEEMF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJKBMAEEMF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFJKBMAEEMF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJKBMAEEMF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFJKBMAEEMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFJKBMAEEMF*))((::PBYTE)hIl2Cpp + JFJKBMAEEMF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFJKBMAEEMF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
