#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEKKPBIKINI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BEKKPBIKINI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA639C0)
#define BEKKPBIKINI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA63BE0)
#define BEKKPBIKINI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA63610)
#define BEKKPBIKINI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA635E0)
#define BEKKPBIKINI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA635D0)
#define BEKKPBIKINI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA63740)
#define BEKKPBIKINI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA63670)
#define BEKKPBIKINI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA63660)
#define BEKKPBIKINI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA638B0)
#define BEKKPBIKINI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA63590)
#define BEKKPBIKINI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA63A80)
#define BEKKPBIKINI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA63A50)
#define BEKKPBIKINI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA63650)
#define BEKKPBIKINI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA635C0)
#define BEKKPBIKINI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA638E0)
#define BEKKPBIKINI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA63940)

	class BEKKPBIKINI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BEKKPBIKINI")->GetStaticField(0x40CE0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKKPBIKINI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BEKKPBIKINI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEKKPBIKINI*))((::PBYTE)hIl2Cpp + BEKKPBIKINI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEKKPBIKINI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BEKKPBIKINI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKKPBIKINI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BEKKPBIKINI* Clone()
		{
			return ((::BEKKPBIKINI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKKPBIKINI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKKPBIKINI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BEKKPBIKINI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEKKPBIKINI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BEKKPBIKINI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BEKKPBIKINI*))((::PBYTE)hIl2Cpp + BEKKPBIKINI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKKPBIKINI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKKPBIKINI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BEKKPBIKINI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKKPBIKINI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BEKKPBIKINI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEKKPBIKINI*))((::PBYTE)hIl2Cpp + BEKKPBIKINI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BEKKPBIKINI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
