#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BACPIBIJPPH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BACPIBIJPPH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7AFBD0)
#define BACPIBIJPPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7AFDF0)
#define BACPIBIJPPH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7AF820)
#define BACPIBIJPPH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7AF7F0)
#define BACPIBIJPPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AF7E0)
#define BACPIBIJPPH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7AF950)
#define BACPIBIJPPH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7AF880)
#define BACPIBIJPPH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7AF870)
#define BACPIBIJPPH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7AFAC0)
#define BACPIBIJPPH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7AF7A0)
#define BACPIBIJPPH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7AFC90)
#define BACPIBIJPPH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7AFC60)
#define BACPIBIJPPH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7AF860)
#define BACPIBIJPPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7AF7D0)
#define BACPIBIJPPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7AFAF0)
#define BACPIBIJPPH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7AFB50)

	class BACPIBIJPPH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BACPIBIJPPH")->GetStaticField(0x44400);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPIBIJPPH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BACPIBIJPPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BACPIBIJPPH*))((::PBYTE)hIl2Cpp + BACPIBIJPPH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BACPIBIJPPH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BACPIBIJPPH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPIBIJPPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BACPIBIJPPH* Clone()
		{
			return ((::BACPIBIJPPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPIBIJPPH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPIBIJPPH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BACPIBIJPPH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BACPIBIJPPH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BACPIBIJPPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BACPIBIJPPH*))((::PBYTE)hIl2Cpp + BACPIBIJPPH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPIBIJPPH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPIBIJPPH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BACPIBIJPPH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPIBIJPPH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BACPIBIJPPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BACPIBIJPPH*))((::PBYTE)hIl2Cpp + BACPIBIJPPH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BACPIBIJPPH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
