#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFJCGEMMPKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFJCGEMMPKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F866EA0)
#define HFJCGEMMPKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8670C0)
#define HFJCGEMMPKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F866AF0)
#define HFJCGEMMPKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F866AC0)
#define HFJCGEMMPKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F866AB0)
#define HFJCGEMMPKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F866C20)
#define HFJCGEMMPKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F866B50)
#define HFJCGEMMPKB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F866B40)
#define HFJCGEMMPKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F866D90)
#define HFJCGEMMPKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F866A70)
#define HFJCGEMMPKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F866F60)
#define HFJCGEMMPKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F866F30)
#define HFJCGEMMPKB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F866B30)
#define HFJCGEMMPKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F866AA0)
#define HFJCGEMMPKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F866DC0)
#define HFJCGEMMPKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F866E20)

inline static constexpr unsigned int HFJCGEMMPKB_TypeDefinitionIndex = 36063;

	class HFJCGEMMPKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HFJCGEMMPKB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HFJCGEMMPKB*>**)UnitySDK::FromName("", "HFJCGEMMPKB")->GetStaticField(0x2B520);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFJCGEMMPKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFJCGEMMPKB*))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFJCGEMMPKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HFJCGEMMPKB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HFJCGEMMPKB*>*(*)())((::PBYTE)hIl2Cpp + HFJCGEMMPKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFJCGEMMPKB* Clone()
		{
			return ((::HFJCGEMMPKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFJCGEMMPKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFJCGEMMPKB*))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFJCGEMMPKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFJCGEMMPKB*))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFJCGEMMPKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
