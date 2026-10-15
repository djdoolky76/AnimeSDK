#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKNCBEOKDCK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKNCBEOKDCK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5891F0)
#define HKNCBEOKDCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E589410)
#define HKNCBEOKDCK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E588E40)
#define HKNCBEOKDCK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E588E10)
#define HKNCBEOKDCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E588E00)
#define HKNCBEOKDCK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E588F70)
#define HKNCBEOKDCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E588EA0)
#define HKNCBEOKDCK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E588E90)
#define HKNCBEOKDCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5890E0)
#define HKNCBEOKDCK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E588DC0)
#define HKNCBEOKDCK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5892B0)
#define HKNCBEOKDCK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E589280)
#define HKNCBEOKDCK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E588E80)
#define HKNCBEOKDCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E588DF0)
#define HKNCBEOKDCK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E589110)
#define HKNCBEOKDCK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E589170)

inline static constexpr unsigned int HKNCBEOKDCK_TypeDefinitionIndex = 30366;

	class HKNCBEOKDCK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HKNCBEOKDCK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HKNCBEOKDCK*>**)UnitySDK::FromName("", "HKNCBEOKDCK")->GetStaticField(0x373A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HKNCBEOKDCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKNCBEOKDCK*))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKNCBEOKDCK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HKNCBEOKDCK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HKNCBEOKDCK*>*(*)())((::PBYTE)hIl2Cpp + HKNCBEOKDCK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HKNCBEOKDCK* Clone()
		{
			return ((::HKNCBEOKDCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HKNCBEOKDCK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKNCBEOKDCK*))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HKNCBEOKDCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKNCBEOKDCK*))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HKNCBEOKDCK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
