#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HENHAIFODIG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HENHAIFODIG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E55D440)
#define HENHAIFODIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55D660)
#define HENHAIFODIG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E55D090)
#define HENHAIFODIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E55D060)
#define HENHAIFODIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E55D050)
#define HENHAIFODIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E55D1C0)
#define HENHAIFODIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E55D0F0)
#define HENHAIFODIG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E55D0E0)
#define HENHAIFODIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E55D330)
#define HENHAIFODIG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E55D010)
#define HENHAIFODIG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E55D500)
#define HENHAIFODIG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E55D4D0)
#define HENHAIFODIG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E55D0D0)
#define HENHAIFODIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E55D040)
#define HENHAIFODIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E55D360)
#define HENHAIFODIG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E55D3C0)

inline static constexpr unsigned int HENHAIFODIG_TypeDefinitionIndex = 31676;

	class HENHAIFODIG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HENHAIFODIG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HENHAIFODIG*>**)UnitySDK::FromName("", "HENHAIFODIG")->GetStaticField(0x334C0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENHAIFODIG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HENHAIFODIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HENHAIFODIG*))((::PBYTE)hIl2Cpp + HENHAIFODIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HENHAIFODIG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HENHAIFODIG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HENHAIFODIG*>*(*)())((::PBYTE)hIl2Cpp + HENHAIFODIG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENHAIFODIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HENHAIFODIG* Clone()
		{
			return ((::HENHAIFODIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENHAIFODIG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENHAIFODIG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HENHAIFODIG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HENHAIFODIG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HENHAIFODIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HENHAIFODIG*))((::PBYTE)hIl2Cpp + HENHAIFODIG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENHAIFODIG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENHAIFODIG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HENHAIFODIG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENHAIFODIG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HENHAIFODIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HENHAIFODIG*))((::PBYTE)hIl2Cpp + HENHAIFODIG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HENHAIFODIG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
