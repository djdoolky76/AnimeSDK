#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAKFAEEILGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AAKFAEEILGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EFBFAA0)
#define AAKFAEEILGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFBFCC0)
#define AAKFAEEILGA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EFBF6F0)
#define AAKFAEEILGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFBF6C0)
#define AAKFAEEILGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBF6B0)
#define AAKFAEEILGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EFBF820)
#define AAKFAEEILGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFBF750)
#define AAKFAEEILGA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EFBF740)
#define AAKFAEEILGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFBF990)
#define AAKFAEEILGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EFBF670)
#define AAKFAEEILGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EFBFB60)
#define AAKFAEEILGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EFBFB30)
#define AAKFAEEILGA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EFBF730)
#define AAKFAEEILGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EFBF6A0)
#define AAKFAEEILGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFBF9C0)
#define AAKFAEEILGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EFBFA20)

inline static constexpr unsigned int AAKFAEEILGA_TypeDefinitionIndex = 28817;

	class AAKFAEEILGA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AAKFAEEILGA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AAKFAEEILGA*>**)UnitySDK::FromName("", "AAKFAEEILGA")->GetStaticField(0x31EF0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKFAEEILGA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AAKFAEEILGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAKFAEEILGA*))((::PBYTE)hIl2Cpp + AAKFAEEILGA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAKFAEEILGA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AAKFAEEILGA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AAKFAEEILGA*>*(*)())((::PBYTE)hIl2Cpp + AAKFAEEILGA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKFAEEILGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AAKFAEEILGA* Clone()
		{
			return ((::AAKFAEEILGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKFAEEILGA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKFAEEILGA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAKFAEEILGA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAKFAEEILGA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AAKFAEEILGA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AAKFAEEILGA*))((::PBYTE)hIl2Cpp + AAKFAEEILGA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKFAEEILGA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKFAEEILGA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AAKFAEEILGA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKFAEEILGA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AAKFAEEILGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAKFAEEILGA*))((::PBYTE)hIl2Cpp + AAKFAEEILGA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AAKFAEEILGA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
