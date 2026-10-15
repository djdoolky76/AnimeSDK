#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGPOHFPHEOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OGPOHFPHEOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE5B2E0)
#define OGPOHFPHEOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE5B500)
#define OGPOHFPHEOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE5AED0)
#define OGPOHFPHEOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE5AEA0)
#define OGPOHFPHEOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5AE90)
#define OGPOHFPHEOB_DMEBNPJPEOI_OFFSET UNITYSDK_OFFSET(0x1DE5AF50)
#define OGPOHFPHEOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE5B060)
#define OGPOHFPHEOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE5AF60)
#define OGPOHFPHEOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE5B1D0)
#define OGPOHFPHEOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE5AE20)
#define OGPOHFPHEOB_LOHBJLHELNE_OFFSET UNITYSDK_OFFSET(0x1DE5AF40)
#define OGPOHFPHEOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE5B3A0)
#define OGPOHFPHEOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE5B370)
#define OGPOHFPHEOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE5AE80)
#define OGPOHFPHEOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE5B200)
#define OGPOHFPHEOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE5B260)

inline static constexpr unsigned int OGPOHFPHEOB_TypeDefinitionIndex = 33168;

	class OGPOHFPHEOB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EHGPIHDDNFM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OGPOHFPHEOB")->GetStaticField(0x19EC0);
		}

		// static const ::System::Object IHGLEDIAPNE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPOHFPHEOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OGPOHFPHEOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGPOHFPHEOB*))((::PBYTE)hIl2Cpp + OGPOHFPHEOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGPOHFPHEOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OGPOHFPHEOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPOHFPHEOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OGPOHFPHEOB* Clone()
		{
			return ((::OGPOHFPHEOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPOHFPHEOB_CLONE_OFFSET))(this);
		}

		::System::UInt32 LOHBJLHELNE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPOHFPHEOB_LOHBJLHELNE_OFFSET))(this);
		}

		::System::Void DMEBNPJPEOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OGPOHFPHEOB_DMEBNPJPEOI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OGPOHFPHEOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OGPOHFPHEOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGPOHFPHEOB*))((::PBYTE)hIl2Cpp + OGPOHFPHEOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPOHFPHEOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPOHFPHEOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OGPOHFPHEOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPOHFPHEOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OGPOHFPHEOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGPOHFPHEOB*))((::PBYTE)hIl2Cpp + OGPOHFPHEOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OGPOHFPHEOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
