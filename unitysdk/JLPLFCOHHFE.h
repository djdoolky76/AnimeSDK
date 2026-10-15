#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGAMMPGMCNI;
class JLPLFCOHHFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLPLFCOHHFE_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1E785C30)
#define JLPLFCOHHFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E786120)
#define JLPLFCOHHFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7863F0)
#define JLPLFCOHHFE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E785B90)
#define JLPLFCOHHFE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E785B20)
#define JLPLFCOHHFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E785B10)
#define JLPLFCOHHFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E785DD0)
#define JLPLFCOHHFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E785C50)
#define JLPLFCOHHFE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E785C20)
#define JLPLFCOHHFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E785F50)
#define JLPLFCOHHFE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E785AD0)
#define JLPLFCOHHFE_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1E785C40)
#define JLPLFCOHHFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E786260)
#define JLPLFCOHHFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7861F0)
#define JLPLFCOHHFE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E785C10)
#define JLPLFCOHHFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E785B00)
#define JLPLFCOHHFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E785FE0)
#define JLPLFCOHHFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E786040)

	class JLPLFCOHHFE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JGAMMPGMCNI* NLIJNNMCAAO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JLPLFCOHHFE")->GetStaticField(0x6BD60);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DMAFCIBFMPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPLFCOHHFE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLPLFCOHHFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLPLFCOHHFE*))((::PBYTE)hIl2Cpp + JLPLFCOHHFE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLPLFCOHHFE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JLPLFCOHHFE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPLFCOHHFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLPLFCOHHFE* Clone()
		{
			return ((::JLPLFCOHHFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPLFCOHHFE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPLFCOHHFE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLPLFCOHHFE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::JGAMMPGMCNI* ADGLNFILOHI()
		{
			return ((::JGAMMPGMCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPLFCOHHFE_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::JGAMMPGMCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAMMPGMCNI*))((::PBYTE)hIl2Cpp + JLPLFCOHHFE_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLPLFCOHHFE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLPLFCOHHFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLPLFCOHHFE*))((::PBYTE)hIl2Cpp + JLPLFCOHHFE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPLFCOHHFE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPLFCOHHFE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLPLFCOHHFE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPLFCOHHFE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLPLFCOHHFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLPLFCOHHFE*))((::PBYTE)hIl2Cpp + JLPLFCOHHFE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLPLFCOHHFE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
