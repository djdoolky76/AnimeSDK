#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOIAGBJKMEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LOIAGBJKMEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E992CF0)
#define LOIAGBJKMEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E992D90)
#define LOIAGBJKMEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9929E0)
#define LOIAGBJKMEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9929B0)
#define LOIAGBJKMEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9929A0)
#define LOIAGBJKMEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E992AF0)
#define LOIAGBJKMEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E992A20)
#define LOIAGBJKMEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E992C50)
#define LOIAGBJKMEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E992960)
#define LOIAGBJKMEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E992D40)
#define LOIAGBJKMEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E992D10)
#define LOIAGBJKMEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E992990)
#define LOIAGBJKMEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E992C80)
#define LOIAGBJKMEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E992CE0)

inline static constexpr unsigned int LOIAGBJKMEB_TypeDefinitionIndex = 30851;

	class LOIAGBJKMEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::LOIAGBJKMEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LOIAGBJKMEB*>**)UnitySDK::FromName("", "LOIAGBJKMEB")->GetStaticField(0x41BB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LOIAGBJKMEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOIAGBJKMEB*))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOIAGBJKMEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LOIAGBJKMEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LOIAGBJKMEB*>*(*)())((::PBYTE)hIl2Cpp + LOIAGBJKMEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LOIAGBJKMEB* Clone()
		{
			return ((::LOIAGBJKMEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LOIAGBJKMEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LOIAGBJKMEB*))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LOIAGBJKMEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOIAGBJKMEB*))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LOIAGBJKMEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
