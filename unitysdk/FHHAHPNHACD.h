#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHHAHPNHACD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHHAHPNHACD_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E38B280)
#define FHHAHPNHACD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E38B5C0)
#define FHHAHPNHACD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38B890)
#define FHHAHPNHACD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E38B210)
#define FHHAHPNHACD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E38B1E0)
#define FHHAHPNHACD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38B1D0)
#define FHHAHPNHACD_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E38B290)
#define FHHAHPNHACD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E38B380)
#define FHHAHPNHACD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E38B2A0)
#define FHHAHPNHACD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E38B270)
#define FHHAHPNHACD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E38B450)
#define FHHAHPNHACD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E38B190)
#define FHHAHPNHACD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E38B710)
#define FHHAHPNHACD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E38B6D0)
#define FHHAHPNHACD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E38B260)
#define FHHAHPNHACD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E38B1C0)
#define FHHAHPNHACD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E38B480)
#define FHHAHPNHACD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E38B4E0)

inline static constexpr unsigned int FHHAHPNHACD_TypeDefinitionIndex = 32563;

	class FHHAHPNHACD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FHHAHPNHACD")->GetStaticField(0x5F550);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHAHPNHACD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHHAHPNHACD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHHAHPNHACD*))((::PBYTE)hIl2Cpp + FHHAHPNHACD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHHAHPNHACD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FHHAHPNHACD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHAHPNHACD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHHAHPNHACD* Clone()
		{
			return ((::FHHAHPNHACD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHAHPNHACD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHAHPNHACD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHHAHPNHACD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHAHPNHACD_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHHAHPNHACD_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHHAHPNHACD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHHAHPNHACD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHHAHPNHACD*))((::PBYTE)hIl2Cpp + FHHAHPNHACD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHAHPNHACD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHAHPNHACD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHHAHPNHACD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHAHPNHACD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHHAHPNHACD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHHAHPNHACD*))((::PBYTE)hIl2Cpp + FHHAHPNHACD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHHAHPNHACD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
