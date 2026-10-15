#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOMHILBJNDK;
class JGAMMPGMCNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EOMHILBJNDK_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1E3002F0)
#define EOMHILBJNDK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3007E0)
#define EOMHILBJNDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E300AB0)
#define EOMHILBJNDK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E300250)
#define EOMHILBJNDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3001E0)
#define EOMHILBJNDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3001D0)
#define EOMHILBJNDK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E300490)
#define EOMHILBJNDK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E300310)
#define EOMHILBJNDK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3002E0)
#define EOMHILBJNDK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E300610)
#define EOMHILBJNDK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E300190)
#define EOMHILBJNDK_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1E300300)
#define EOMHILBJNDK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E300920)
#define EOMHILBJNDK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3008B0)
#define EOMHILBJNDK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3002D0)
#define EOMHILBJNDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3001C0)
#define EOMHILBJNDK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3006A0)
#define EOMHILBJNDK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E300700)

inline static constexpr unsigned int EOMHILBJNDK_TypeDefinitionIndex = 33696;

	class EOMHILBJNDK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JGAMMPGMCNI* NLIJNNMCAAO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EOMHILBJNDK")->GetStaticField(0x55360);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DMAFCIBFMPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMHILBJNDK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EOMHILBJNDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOMHILBJNDK*))((::PBYTE)hIl2Cpp + EOMHILBJNDK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOMHILBJNDK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EOMHILBJNDK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMHILBJNDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EOMHILBJNDK* Clone()
		{
			return ((::EOMHILBJNDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMHILBJNDK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMHILBJNDK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOMHILBJNDK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::JGAMMPGMCNI* ADGLNFILOHI()
		{
			return ((::JGAMMPGMCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMHILBJNDK_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::JGAMMPGMCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAMMPGMCNI*))((::PBYTE)hIl2Cpp + EOMHILBJNDK_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOMHILBJNDK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EOMHILBJNDK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EOMHILBJNDK*))((::PBYTE)hIl2Cpp + EOMHILBJNDK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMHILBJNDK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMHILBJNDK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EOMHILBJNDK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMHILBJNDK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EOMHILBJNDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOMHILBJNDK*))((::PBYTE)hIl2Cpp + EOMHILBJNDK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EOMHILBJNDK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
