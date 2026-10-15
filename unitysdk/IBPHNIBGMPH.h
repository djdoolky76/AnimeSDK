#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBPHNIBGMPH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBPHNIBGMPH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E61BFA0)
#define IBPHNIBGMPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E61C1C0)
#define IBPHNIBGMPH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E61BBF0)
#define IBPHNIBGMPH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E61BBC0)
#define IBPHNIBGMPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61BBB0)
#define IBPHNIBGMPH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E61BD20)
#define IBPHNIBGMPH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E61BC50)
#define IBPHNIBGMPH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E61BE90)
#define IBPHNIBGMPH_HPGLDOOFONJ_OFFSET UNITYSDK_OFFSET(0x1E61BC30)
#define IBPHNIBGMPH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E61BB70)
#define IBPHNIBGMPH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E61C060)
#define IBPHNIBGMPH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E61C030)
#define IBPHNIBGMPH_PAJHAHFHLEI_OFFSET UNITYSDK_OFFSET(0x1E61BC40)
#define IBPHNIBGMPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E61BBA0)
#define IBPHNIBGMPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E61BEC0)
#define IBPHNIBGMPH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E61BF20)

	class IBPHNIBGMPH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IOJPFPKAAOP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IBPHNIBGMPH")->GetStaticField(0x42440);
		}

		// static const ::System::Object EBNBMOHHABN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPHNIBGMPH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBPHNIBGMPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBPHNIBGMPH*))((::PBYTE)hIl2Cpp + IBPHNIBGMPH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBPHNIBGMPH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IBPHNIBGMPH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPHNIBGMPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBPHNIBGMPH* Clone()
		{
			return ((::IBPHNIBGMPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPHNIBGMPH_CLONE_OFFSET))(this);
		}

		::System::UInt32 HPGLDOOFONJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPHNIBGMPH_HPGLDOOFONJ_OFFSET))(this);
		}

		::System::Void PAJHAHFHLEI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBPHNIBGMPH_PAJHAHFHLEI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBPHNIBGMPH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBPHNIBGMPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBPHNIBGMPH*))((::PBYTE)hIl2Cpp + IBPHNIBGMPH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPHNIBGMPH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPHNIBGMPH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBPHNIBGMPH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPHNIBGMPH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBPHNIBGMPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBPHNIBGMPH*))((::PBYTE)hIl2Cpp + IBPHNIBGMPH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBPHNIBGMPH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
