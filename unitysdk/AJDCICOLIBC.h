#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJDCICOLIBC;
class ALNGMGOJDOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AJDCICOLIBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3BF010)
#define AJDCICOLIBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BF400)
#define AJDCICOLIBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3BEAC0)
#define AJDCICOLIBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3BEA50)
#define AJDCICOLIBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3BEA40)
#define AJDCICOLIBC_EDHGOHPFOFB_OFFSET UNITYSDK_OFFSET(0x1E3BEB40)
#define AJDCICOLIBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3BED00)
#define AJDCICOLIBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3BEB80)
#define AJDCICOLIBC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3BEB70)
#define AJDCICOLIBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3BEE80)
#define AJDCICOLIBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3BEA00)
#define AJDCICOLIBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3BF1E0)
#define AJDCICOLIBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3BF0E0)
#define AJDCICOLIBC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3BEB60)
#define AJDCICOLIBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3BEA30)
#define AJDCICOLIBC_PDMEGKFCOEE_OFFSET UNITYSDK_OFFSET(0x1E3BEB50)
#define AJDCICOLIBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3BEED0)
#define AJDCICOLIBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3BEF30)

	class AJDCICOLIBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ALNGMGOJDOA* NBDGOJNBINH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AJDCICOLIBC")->GetStaticField(0x34AC0);
		}

		// static const ::System::Object IDIAOOLKKBC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJDCICOLIBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDCICOLIBC*))((::PBYTE)hIl2Cpp + AJDCICOLIBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJDCICOLIBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AJDCICOLIBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJDCICOLIBC* Clone()
		{
			return ((::AJDCICOLIBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC_CLONE_OFFSET))(this);
		}

		::ALNGMGOJDOA* EDHGOHPFOFB()
		{
			return ((::ALNGMGOJDOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC_EDHGOHPFOFB_OFFSET))(this);
		}

		::System::Void PDMEGKFCOEE(::ALNGMGOJDOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALNGMGOJDOA*))((::PBYTE)hIl2Cpp + AJDCICOLIBC_PDMEGKFCOEE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJDCICOLIBC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJDCICOLIBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJDCICOLIBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJDCICOLIBC*))((::PBYTE)hIl2Cpp + AJDCICOLIBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJDCICOLIBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJDCICOLIBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDCICOLIBC*))((::PBYTE)hIl2Cpp + AJDCICOLIBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJDCICOLIBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
