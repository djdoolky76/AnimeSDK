#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFEKOONGJBL.h"
#include "unitysdk/System/Object.h"
class CBONHEMLCJG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBONHEMLCJG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0716E0)
#define CBONHEMLCJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E071940)
#define CBONHEMLCJG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E071310)
#define CBONHEMLCJG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0712E0)
#define CBONHEMLCJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0712D0)
#define CBONHEMLCJG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E071440)
#define CBONHEMLCJG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E071370)
#define CBONHEMLCJG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0715B0)
#define CBONHEMLCJG_HCEJGELMNEH_OFFSET UNITYSDK_OFFSET(0x1E071350)
#define CBONHEMLCJG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E071290)
#define CBONHEMLCJG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0717E0)
#define CBONHEMLCJG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0717B0)
#define CBONHEMLCJG_NMPHDJBNBBM_OFFSET UNITYSDK_OFFSET(0x1E071360)
#define CBONHEMLCJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0712C0)
#define CBONHEMLCJG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0715E0)
#define CBONHEMLCJG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E071640)

inline static constexpr unsigned int CBONHEMLCJG_TypeDefinitionIndex = 34437;

	class CBONHEMLCJG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GFEKOONGJBL IBIKCAKGEGO; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CBONHEMLCJG")->GetStaticField(0xCBD0);
		}

		// static const ::System::Object EMGLLJLKFFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBONHEMLCJG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBONHEMLCJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBONHEMLCJG*))((::PBYTE)hIl2Cpp + CBONHEMLCJG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBONHEMLCJG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CBONHEMLCJG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBONHEMLCJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBONHEMLCJG* Clone()
		{
			return ((::CBONHEMLCJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBONHEMLCJG_CLONE_OFFSET))(this);
		}

		::GFEKOONGJBL HCEJGELMNEH()
		{
			return ((::GFEKOONGJBL(*)(::PVOID))((::PBYTE)hIl2Cpp + CBONHEMLCJG_HCEJGELMNEH_OFFSET))(this);
		}

		::System::Void NMPHDJBNBBM(::GFEKOONGJBL a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFEKOONGJBL))((::PBYTE)hIl2Cpp + CBONHEMLCJG_NMPHDJBNBBM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBONHEMLCJG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBONHEMLCJG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBONHEMLCJG*))((::PBYTE)hIl2Cpp + CBONHEMLCJG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBONHEMLCJG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBONHEMLCJG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBONHEMLCJG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBONHEMLCJG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBONHEMLCJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBONHEMLCJG*))((::PBYTE)hIl2Cpp + CBONHEMLCJG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBONHEMLCJG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
