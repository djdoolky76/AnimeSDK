#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOOOBFLCMKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DOOOBFLCMKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4E4C90)
#define DOOOBFLCMKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4E4EB0)
#define DOOOBFLCMKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4E48E0)
#define DOOOBFLCMKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4E48B0)
#define DOOOBFLCMKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4E48A0)
#define DOOOBFLCMKC_DMAJLABJKDF_OFFSET UNITYSDK_OFFSET(0x1F4E4930)
#define DOOOBFLCMKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4E4A10)
#define DOOOBFLCMKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4E4940)
#define DOOOBFLCMKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F4E4B80)
#define DOOOBFLCMKC_HICOOKBPHIO_OFFSET UNITYSDK_OFFSET(0x1F4E4920)
#define DOOOBFLCMKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F4E4860)
#define DOOOBFLCMKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4E4D50)
#define DOOOBFLCMKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F4E4D20)
#define DOOOBFLCMKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4E4890)
#define DOOOBFLCMKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4E4BB0)
#define DOOOBFLCMKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4E4C10)

inline static constexpr unsigned int DOOOBFLCMKC_TypeDefinitionIndex = 35976;

	class DOOOBFLCMKC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OEAHKANPNOM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DOOOBFLCMKC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DOOOBFLCMKC*>**)UnitySDK::FromName("", "DOOOBFLCMKC")->GetStaticField(0x3F1C0);
		}

		// static const ::System::Object HNLEALIBPBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOOBFLCMKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DOOOBFLCMKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOOOBFLCMKC*))((::PBYTE)hIl2Cpp + DOOOBFLCMKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOOOBFLCMKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DOOOBFLCMKC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DOOOBFLCMKC*>*(*)())((::PBYTE)hIl2Cpp + DOOOBFLCMKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOOBFLCMKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DOOOBFLCMKC* Clone()
		{
			return ((::DOOOBFLCMKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOOBFLCMKC_CLONE_OFFSET))(this);
		}

		::System::UInt32 HICOOKBPHIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOOBFLCMKC_HICOOKBPHIO_OFFSET))(this);
		}

		::System::Void DMAJLABJKDF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOOOBFLCMKC_DMAJLABJKDF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOOOBFLCMKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DOOOBFLCMKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOOOBFLCMKC*))((::PBYTE)hIl2Cpp + DOOOBFLCMKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOOBFLCMKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOOBFLCMKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DOOOBFLCMKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOOBFLCMKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DOOOBFLCMKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOOOBFLCMKC*))((::PBYTE)hIl2Cpp + DOOOBFLCMKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DOOOBFLCMKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
