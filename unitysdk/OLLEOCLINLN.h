#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLLEOCLINLN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OLLEOCLINLN_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DE7B330)
#define OLLEOCLINLN_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DE7B340)
#define OLLEOCLINLN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE7B670)
#define OLLEOCLINLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE7B940)
#define OLLEOCLINLN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE7B2C0)
#define OLLEOCLINLN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE7B290)
#define OLLEOCLINLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE7B280)
#define OLLEOCLINLN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE7B430)
#define OLLEOCLINLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE7B350)
#define OLLEOCLINLN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE7B320)
#define OLLEOCLINLN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE7B500)
#define OLLEOCLINLN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE7B240)
#define OLLEOCLINLN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE7B7C0)
#define OLLEOCLINLN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE7B780)
#define OLLEOCLINLN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE7B310)
#define OLLEOCLINLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE7B270)
#define OLLEOCLINLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE7B530)
#define OLLEOCLINLN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE7B590)

inline static constexpr unsigned int OLLEOCLINLN_TypeDefinitionIndex = 26348;

	class OLLEOCLINLN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OLLEOCLINLN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OLLEOCLINLN*>**)UnitySDK::FromName("", "OLLEOCLINLN")->GetStaticField(0x20FB0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OLLEOCLINLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLLEOCLINLN*))((::PBYTE)hIl2Cpp + OLLEOCLINLN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLLEOCLINLN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OLLEOCLINLN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OLLEOCLINLN*>*(*)())((::PBYTE)hIl2Cpp + OLLEOCLINLN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OLLEOCLINLN* Clone()
		{
			return ((::OLLEOCLINLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLLEOCLINLN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLLEOCLINLN_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLLEOCLINLN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OLLEOCLINLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLLEOCLINLN*))((::PBYTE)hIl2Cpp + OLLEOCLINLN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OLLEOCLINLN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OLLEOCLINLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLLEOCLINLN*))((::PBYTE)hIl2Cpp + OLLEOCLINLN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OLLEOCLINLN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
