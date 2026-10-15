#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAICKIOJMDI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FAICKIOJMDI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E322570)
#define FAICKIOJMDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E322610)
#define FAICKIOJMDI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E322260)
#define FAICKIOJMDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E322230)
#define FAICKIOJMDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E322220)
#define FAICKIOJMDI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E322370)
#define FAICKIOJMDI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3222A0)
#define FAICKIOJMDI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3224D0)
#define FAICKIOJMDI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3221E0)
#define FAICKIOJMDI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3225C0)
#define FAICKIOJMDI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E322590)
#define FAICKIOJMDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E322210)
#define FAICKIOJMDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E322500)
#define FAICKIOJMDI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E322560)

	class FAICKIOJMDI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FAICKIOJMDI")->GetStaticField(0x57E30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAICKIOJMDI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FAICKIOJMDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAICKIOJMDI*))((::PBYTE)hIl2Cpp + FAICKIOJMDI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAICKIOJMDI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FAICKIOJMDI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAICKIOJMDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FAICKIOJMDI* Clone()
		{
			return ((::FAICKIOJMDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAICKIOJMDI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAICKIOJMDI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FAICKIOJMDI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAICKIOJMDI*))((::PBYTE)hIl2Cpp + FAICKIOJMDI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAICKIOJMDI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAICKIOJMDI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FAICKIOJMDI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAICKIOJMDI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FAICKIOJMDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAICKIOJMDI*))((::PBYTE)hIl2Cpp + FAICKIOJMDI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FAICKIOJMDI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
