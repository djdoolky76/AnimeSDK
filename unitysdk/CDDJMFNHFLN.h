#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDDJMFNHFLN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDDJMFNHFLN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E055500)
#define CDDJMFNHFLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E055720)
#define CDDJMFNHFLN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0550F0)
#define CDDJMFNHFLN_CMNALIBDHJJ_OFFSET UNITYSDK_OFFSET(0x1E055160)
#define CDDJMFNHFLN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0550C0)
#define CDDJMFNHFLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0550B0)
#define CDDJMFNHFLN_DNDHIPAEJOB_OFFSET UNITYSDK_OFFSET(0x1E055170)
#define CDDJMFNHFLN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E055280)
#define CDDJMFNHFLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E055180)
#define CDDJMFNHFLN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0553F0)
#define CDDJMFNHFLN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E055040)
#define CDDJMFNHFLN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0555C0)
#define CDDJMFNHFLN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E055590)
#define CDDJMFNHFLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0550A0)
#define CDDJMFNHFLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E055420)
#define CDDJMFNHFLN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E055480)

inline static constexpr unsigned int CDDJMFNHFLN_TypeDefinitionIndex = 25213;

	class CDDJMFNHFLN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HACPPHMAGDI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CDDJMFNHFLN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CDDJMFNHFLN*>**)UnitySDK::FromName("", "CDDJMFNHFLN")->GetStaticField(0xE600);
		}

		// static const ::System::Object AOILEHFEMKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDDJMFNHFLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDDJMFNHFLN*))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDDJMFNHFLN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CDDJMFNHFLN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CDDJMFNHFLN*>*(*)())((::PBYTE)hIl2Cpp + CDDJMFNHFLN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDDJMFNHFLN* Clone()
		{
			return ((::CDDJMFNHFLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMNALIBDHJJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_CMNALIBDHJJ_OFFSET))(this);
		}

		::System::Void DNDHIPAEJOB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_DNDHIPAEJOB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDDJMFNHFLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDDJMFNHFLN*))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDDJMFNHFLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDDJMFNHFLN*))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
