#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMFLFFJIEFC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMFLFFJIEFC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E024700)
#define BMFLFFJIEFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E024920)
#define BMFLFFJIEFC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E024350)
#define BMFLFFJIEFC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E024320)
#define BMFLFFJIEFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E024310)
#define BMFLFFJIEFC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E024480)
#define BMFLFFJIEFC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0243B0)
#define BMFLFFJIEFC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0243A0)
#define BMFLFFJIEFC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0245F0)
#define BMFLFFJIEFC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0242D0)
#define BMFLFFJIEFC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0247C0)
#define BMFLFFJIEFC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E024790)
#define BMFLFFJIEFC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E024390)
#define BMFLFFJIEFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E024300)
#define BMFLFFJIEFC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E024620)
#define BMFLFFJIEFC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E024680)

inline static constexpr unsigned int BMFLFFJIEFC_TypeDefinitionIndex = 30817;

	class BMFLFFJIEFC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BMFLFFJIEFC")->GetStaticField(0x50180);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFLFFJIEFC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMFLFFJIEFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMFLFFJIEFC*))((::PBYTE)hIl2Cpp + BMFLFFJIEFC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMFLFFJIEFC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BMFLFFJIEFC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFLFFJIEFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMFLFFJIEFC* Clone()
		{
			return ((::BMFLFFJIEFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFLFFJIEFC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFLFFJIEFC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMFLFFJIEFC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMFLFFJIEFC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMFLFFJIEFC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMFLFFJIEFC*))((::PBYTE)hIl2Cpp + BMFLFFJIEFC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFLFFJIEFC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFLFFJIEFC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMFLFFJIEFC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFLFFJIEFC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMFLFFJIEFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMFLFFJIEFC*))((::PBYTE)hIl2Cpp + BMFLFFJIEFC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMFLFFJIEFC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
