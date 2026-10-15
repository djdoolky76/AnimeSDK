#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIFNKEPOOPA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BIFNKEPOOPA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE015B0)
#define BIFNKEPOOPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE018C0)
#define BIFNKEPOOPA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE01130)
#define BIFNKEPOOPA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE010F0)
#define BIFNKEPOOPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE010E0)
#define BIFNKEPOOPA_DACHIEKJFLB_OFFSET UNITYSDK_OFFSET(0x1DE011B0)
#define BIFNKEPOOPA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE012D0)
#define BIFNKEPOOPA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE011E0)
#define BIFNKEPOOPA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE011D0)
#define BIFNKEPOOPA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE013B0)
#define BIFNKEPOOPA_GFAKOBNKIHL_OFFSET UNITYSDK_OFFSET(0x1DE011A0)
#define BIFNKEPOOPA_HNHHFFHAAOF_OFFSET UNITYSDK_OFFSET(0x1DE01180)
#define BIFNKEPOOPA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE010A0)
#define BIFNKEPOOPA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE01720)
#define BIFNKEPOOPA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE016D0)
#define BIFNKEPOOPA_MLMDGHMGMPD_OFFSET UNITYSDK_OFFSET(0x1DE01190)
#define BIFNKEPOOPA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE011C0)
#define BIFNKEPOOPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE010D0)
#define BIFNKEPOOPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE013E0)
#define BIFNKEPOOPA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE01440)

	class BIFNKEPOOPA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::Boolean MNEDBKBAJJF; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 BHEFLPIBPPF; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BIFNKEPOOPA")->GetStaticField(0x48180);
		}

		// static const ::System::Object EOGEPKBLOBE; // 0x0
		// static const ::System::Object BIIHPOKABJA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BIFNKEPOOPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIFNKEPOOPA*))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIFNKEPOOPA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BIFNKEPOOPA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BIFNKEPOOPA* Clone()
		{
			return ((::BIFNKEPOOPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_CLONE_OFFSET))(this);
		}

		::System::Boolean HNHHFFHAAOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_HNHHFFHAAOF_OFFSET))(this);
		}

		::System::Void MLMDGHMGMPD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_MLMDGHMGMPD_OFFSET))(this, a1);
		}

		::System::UInt32 GFAKOBNKIHL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_GFAKOBNKIHL_OFFSET))(this);
		}

		::System::Void DACHIEKJFLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_DACHIEKJFLB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BIFNKEPOOPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BIFNKEPOOPA*))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BIFNKEPOOPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIFNKEPOOPA*))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BIFNKEPOOPA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
