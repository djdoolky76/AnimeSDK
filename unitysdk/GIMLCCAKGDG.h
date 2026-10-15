#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIMLCCAKGDG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GIMLCCAKGDG_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E4A1BA0)
#define GIMLCCAKGDG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4A1ED0)
#define GIMLCCAKGDG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A21A0)
#define GIMLCCAKGDG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4A1B20)
#define GIMLCCAKGDG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4A1AF0)
#define GIMLCCAKGDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A1AE0)
#define GIMLCCAKGDG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4A1C90)
#define GIMLCCAKGDG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4A1BB0)
#define GIMLCCAKGDG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4A1B80)
#define GIMLCCAKGDG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4A1D60)
#define GIMLCCAKGDG_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E4A1B90)
#define GIMLCCAKGDG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4A1AA0)
#define GIMLCCAKGDG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4A2020)
#define GIMLCCAKGDG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4A1FE0)
#define GIMLCCAKGDG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4A1B70)
#define GIMLCCAKGDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4A1AD0)
#define GIMLCCAKGDG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4A1D90)
#define GIMLCCAKGDG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4A1DF0)

inline static constexpr unsigned int GIMLCCAKGDG_TypeDefinitionIndex = 28957;

	class GIMLCCAKGDG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 IBEBBFIHLLP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GIMLCCAKGDG")->GetStaticField(0x1AC20);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMLCCAKGDG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIMLCCAKGDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIMLCCAKGDG*))((::PBYTE)hIl2Cpp + GIMLCCAKGDG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIMLCCAKGDG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GIMLCCAKGDG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMLCCAKGDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIMLCCAKGDG* Clone()
		{
			return ((::GIMLCCAKGDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMLCCAKGDG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMLCCAKGDG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIMLCCAKGDG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMLCCAKGDG_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIMLCCAKGDG_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIMLCCAKGDG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GIMLCCAKGDG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIMLCCAKGDG*))((::PBYTE)hIl2Cpp + GIMLCCAKGDG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMLCCAKGDG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMLCCAKGDG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GIMLCCAKGDG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMLCCAKGDG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GIMLCCAKGDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIMLCCAKGDG*))((::PBYTE)hIl2Cpp + GIMLCCAKGDG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GIMLCCAKGDG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
