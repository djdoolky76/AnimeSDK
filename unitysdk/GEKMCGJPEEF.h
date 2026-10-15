#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEKMCGJPEEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GEKMCGJPEEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E42E410)
#define GEKMCGJPEEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E42E630)
#define GEKMCGJPEEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E42E060)
#define GEKMCGJPEEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E42E030)
#define GEKMCGJPEEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E42E020)
#define GEKMCGJPEEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E42E190)
#define GEKMCGJPEEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E42E0C0)
#define GEKMCGJPEEF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E42E0B0)
#define GEKMCGJPEEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E42E300)
#define GEKMCGJPEEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E42DFE0)
#define GEKMCGJPEEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E42E4D0)
#define GEKMCGJPEEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E42E4A0)
#define GEKMCGJPEEF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E42E0A0)
#define GEKMCGJPEEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E42E010)
#define GEKMCGJPEEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E42E330)
#define GEKMCGJPEEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E42E390)

inline static constexpr unsigned int GEKMCGJPEEF_TypeDefinitionIndex = 26360;

	class GEKMCGJPEEF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GEKMCGJPEEF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GEKMCGJPEEF*>**)UnitySDK::FromName("", "GEKMCGJPEEF")->GetStaticField(0x11EF0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKMCGJPEEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GEKMCGJPEEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEKMCGJPEEF*))((::PBYTE)hIl2Cpp + GEKMCGJPEEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEKMCGJPEEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GEKMCGJPEEF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GEKMCGJPEEF*>*(*)())((::PBYTE)hIl2Cpp + GEKMCGJPEEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKMCGJPEEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GEKMCGJPEEF* Clone()
		{
			return ((::GEKMCGJPEEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKMCGJPEEF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKMCGJPEEF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEKMCGJPEEF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEKMCGJPEEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GEKMCGJPEEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEKMCGJPEEF*))((::PBYTE)hIl2Cpp + GEKMCGJPEEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKMCGJPEEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKMCGJPEEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GEKMCGJPEEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKMCGJPEEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GEKMCGJPEEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEKMCGJPEEF*))((::PBYTE)hIl2Cpp + GEKMCGJPEEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GEKMCGJPEEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
