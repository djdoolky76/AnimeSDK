#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKKADHADOLO;
class OKLPMDCIEIG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NKKADHADOLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB2D2F0)
#define NKKADHADOLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB2D5E0)
#define NKKADHADOLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB2CC30)
#define NKKADHADOLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB2CB90)
#define NKKADHADOLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB2CB80)
#define NKKADHADOLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB2CEE0)
#define NKKADHADOLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB2CD40)
#define NKKADHADOLO_FKHAPMLPBBI_OFFSET UNITYSDK_OFFSET(0x1EB2CD30)
#define NKKADHADOLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB2D1B0)
#define NKKADHADOLO_GPDCBJNPPHO_OFFSET UNITYSDK_OFFSET(0x1EB2CD20)
#define NKKADHADOLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB2CB10)
#define NKKADHADOLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB2D450)
#define NKKADHADOLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB2D350)
#define NKKADHADOLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB2CB70)
#define NKKADHADOLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB2D200)
#define NKKADHADOLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB2D260)

inline static constexpr unsigned int NKKADHADOLO_TypeDefinitionIndex = 25576;

	class NKKADHADOLO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OKLPMDCIEIG* ELJDKBKKFKH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NKKADHADOLO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NKKADHADOLO*>**)UnitySDK::FromName("", "NKKADHADOLO")->GetStaticField(0x69580);
		}

		// static const ::System::Object AFELKDKIHIA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKADHADOLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NKKADHADOLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKKADHADOLO*))((::PBYTE)hIl2Cpp + NKKADHADOLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKKADHADOLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NKKADHADOLO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NKKADHADOLO*>*(*)())((::PBYTE)hIl2Cpp + NKKADHADOLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKADHADOLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NKKADHADOLO* Clone()
		{
			return ((::NKKADHADOLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKADHADOLO_CLONE_OFFSET))(this);
		}

		::OKLPMDCIEIG* GPDCBJNPPHO()
		{
			return ((::OKLPMDCIEIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKADHADOLO_GPDCBJNPPHO_OFFSET))(this);
		}

		::System::Void FKHAPMLPBBI(::OKLPMDCIEIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKLPMDCIEIG*))((::PBYTE)hIl2Cpp + NKKADHADOLO_FKHAPMLPBBI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKKADHADOLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NKKADHADOLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKKADHADOLO*))((::PBYTE)hIl2Cpp + NKKADHADOLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKADHADOLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKADHADOLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NKKADHADOLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKADHADOLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NKKADHADOLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKKADHADOLO*))((::PBYTE)hIl2Cpp + NKKADHADOLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NKKADHADOLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
