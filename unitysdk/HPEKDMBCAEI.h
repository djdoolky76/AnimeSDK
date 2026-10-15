#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPEKDMBCAEI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPEKDMBCAEI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5F4530)
#define HPEKDMBCAEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F4750)
#define HPEKDMBCAEI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5F4180)
#define HPEKDMBCAEI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5F4150)
#define HPEKDMBCAEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F4140)
#define HPEKDMBCAEI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5F42B0)
#define HPEKDMBCAEI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5F41E0)
#define HPEKDMBCAEI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5F41D0)
#define HPEKDMBCAEI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5F4420)
#define HPEKDMBCAEI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5F4100)
#define HPEKDMBCAEI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5F45F0)
#define HPEKDMBCAEI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5F45C0)
#define HPEKDMBCAEI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5F41C0)
#define HPEKDMBCAEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5F4130)
#define HPEKDMBCAEI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5F4450)
#define HPEKDMBCAEI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5F44B0)

inline static constexpr unsigned int HPEKDMBCAEI_TypeDefinitionIndex = 31664;

	class HPEKDMBCAEI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HPEKDMBCAEI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HPEKDMBCAEI*>**)UnitySDK::FromName("", "HPEKDMBCAEI")->GetStaticField(0x50320);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEKDMBCAEI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPEKDMBCAEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPEKDMBCAEI*))((::PBYTE)hIl2Cpp + HPEKDMBCAEI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPEKDMBCAEI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HPEKDMBCAEI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HPEKDMBCAEI*>*(*)())((::PBYTE)hIl2Cpp + HPEKDMBCAEI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEKDMBCAEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPEKDMBCAEI* Clone()
		{
			return ((::HPEKDMBCAEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEKDMBCAEI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEKDMBCAEI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPEKDMBCAEI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPEKDMBCAEI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPEKDMBCAEI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPEKDMBCAEI*))((::PBYTE)hIl2Cpp + HPEKDMBCAEI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEKDMBCAEI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEKDMBCAEI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPEKDMBCAEI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEKDMBCAEI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPEKDMBCAEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPEKDMBCAEI*))((::PBYTE)hIl2Cpp + HPEKDMBCAEI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPEKDMBCAEI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
