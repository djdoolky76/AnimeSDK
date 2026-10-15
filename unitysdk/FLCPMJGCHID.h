#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLCPMJGCHID;
class HHAGOFKBFAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FLCPMJGCHID_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3B77C0)
#define FLCPMJGCHID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B7AD0)
#define FLCPMJGCHID_CIOGAGDPMJN_OFFSET UNITYSDK_OFFSET(0x1E3B7300)
#define FLCPMJGCHID_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3B7280)
#define FLCPMJGCHID_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3B7220)
#define FLCPMJGCHID_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B7210)
#define FLCPMJGCHID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3B74B0)
#define FLCPMJGCHID_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3B7330)
#define FLCPMJGCHID_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3B7320)
#define FLCPMJGCHID_FENEPOCNAPP_OFFSET UNITYSDK_OFFSET(0x1E3B72F0)
#define FLCPMJGCHID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3B7630)
#define FLCPMJGCHID_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3B71D0)
#define FLCPMJGCHID_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3B7920)
#define FLCPMJGCHID_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3B7890)
#define FLCPMJGCHID_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3B7310)
#define FLCPMJGCHID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3B7200)
#define FLCPMJGCHID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3B7680)
#define FLCPMJGCHID_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3B76E0)

inline static constexpr unsigned int FLCPMJGCHID_TypeDefinitionIndex = 32958;

	class FLCPMJGCHID : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HHAGOFKBFAP* ODAIMKHGFAB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FLCPMJGCHID")->GetStaticField(0x64230);
		}

		// static const ::System::Object LNNFMNLEBGM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPMJGCHID_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FLCPMJGCHID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLCPMJGCHID*))((::PBYTE)hIl2Cpp + FLCPMJGCHID_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLCPMJGCHID_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FLCPMJGCHID_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPMJGCHID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FLCPMJGCHID* Clone()
		{
			return ((::FLCPMJGCHID*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPMJGCHID_CLONE_OFFSET))(this);
		}

		::HHAGOFKBFAP* FENEPOCNAPP()
		{
			return ((::HHAGOFKBFAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPMJGCHID_FENEPOCNAPP_OFFSET))(this);
		}

		::System::Void CIOGAGDPMJN(::HHAGOFKBFAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHAGOFKBFAP*))((::PBYTE)hIl2Cpp + FLCPMJGCHID_CIOGAGDPMJN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPMJGCHID_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLCPMJGCHID_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLCPMJGCHID_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FLCPMJGCHID* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FLCPMJGCHID*))((::PBYTE)hIl2Cpp + FLCPMJGCHID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPMJGCHID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPMJGCHID_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FLCPMJGCHID_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPMJGCHID_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FLCPMJGCHID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLCPMJGCHID*))((::PBYTE)hIl2Cpp + FLCPMJGCHID_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FLCPMJGCHID_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
