#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHAGOFKBFAP;
class PJFPIPIPOJN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJFPIPIPOJN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205608B0)
#define PJFPIPIPOJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x20560B30)
#define PJFPIPIPOJN_CIOGAGDPMJN_OFFSET UNITYSDK_OFFSET(0x20560320)
#define PJFPIPIPOJN_CLONE_OFFSET UNITYSDK_OFFSET(0x205602B0)
#define PJFPIPIPOJN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20560260)
#define PJFPIPIPOJN_CTOR_OFFSET UNITYSDK_OFFSET(0x20560250)
#define PJFPIPIPOJN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205604A0)
#define PJFPIPIPOJN_EQUALS_OFFSET UNITYSDK_OFFSET(0x20560330)
#define PJFPIPIPOJN_FENEPOCNAPP_OFFSET UNITYSDK_OFFSET(0x20560310)
#define PJFPIPIPOJN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20560770)
#define PJFPIPIPOJN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20560210)
#define PJFPIPIPOJN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205609A0)
#define PJFPIPIPOJN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20560910)
#define PJFPIPIPOJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20560240)
#define PJFPIPIPOJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205607C0)
#define PJFPIPIPOJN_WRITETO_OFFSET UNITYSDK_OFFSET(0x20560820)

inline static constexpr unsigned int PJFPIPIPOJN_TypeDefinitionIndex = 33857;

	class PJFPIPIPOJN : public ::System::Object
	{
	public:
		::HHAGOFKBFAP* ODAIMKHGFAB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PJFPIPIPOJN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PJFPIPIPOJN*>**)UnitySDK::FromName("", "PJFPIPIPOJN")->GetStaticField(0x3EFC0);
		}

		// static const ::System::Object LNNFMNLEBGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFPIPIPOJN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJFPIPIPOJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJFPIPIPOJN*))((::PBYTE)hIl2Cpp + PJFPIPIPOJN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJFPIPIPOJN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PJFPIPIPOJN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PJFPIPIPOJN*>*(*)())((::PBYTE)hIl2Cpp + PJFPIPIPOJN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFPIPIPOJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJFPIPIPOJN* Clone()
		{
			return ((::PJFPIPIPOJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFPIPIPOJN_CLONE_OFFSET))(this);
		}

		::HHAGOFKBFAP* FENEPOCNAPP()
		{
			return ((::HHAGOFKBFAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFPIPIPOJN_FENEPOCNAPP_OFFSET))(this);
		}

		::System::Void CIOGAGDPMJN(::HHAGOFKBFAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHAGOFKBFAP*))((::PBYTE)hIl2Cpp + PJFPIPIPOJN_CIOGAGDPMJN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJFPIPIPOJN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJFPIPIPOJN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJFPIPIPOJN*))((::PBYTE)hIl2Cpp + PJFPIPIPOJN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFPIPIPOJN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFPIPIPOJN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJFPIPIPOJN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFPIPIPOJN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJFPIPIPOJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJFPIPIPOJN*))((::PBYTE)hIl2Cpp + PJFPIPIPOJN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJFPIPIPOJN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
