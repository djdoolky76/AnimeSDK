#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGAMMPGMCNI;
class NAGABJLKFON;
class PFLOIHLLMEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NAGABJLKFON_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1EA92B30)
#define NAGABJLKFON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA93220)
#define NAGABJLKFON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA935A0)
#define NAGABJLKFON_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA92A50)
#define NAGABJLKFON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA929A0)
#define NAGABJLKFON_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA92990)
#define NAGABJLKFON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA92DA0)
#define NAGABJLKFON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA92B70)
#define NAGABJLKFON_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA92B60)
#define NAGABJLKFON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA92FD0)
#define NAGABJLKFON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA92950)
#define NAGABJLKFON_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1EA92B40)
#define NAGABJLKFON_LIAOBOCBJEG_OFFSET UNITYSDK_OFFSET(0x1EA92B10)
#define NAGABJLKFON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA933E0)
#define NAGABJLKFON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA93330)
#define NAGABJLKFON_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA92B50)
#define NAGABJLKFON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA92980)
#define NAGABJLKFON_PCHLPNFKCFH_OFFSET UNITYSDK_OFFSET(0x1EA92B20)
#define NAGABJLKFON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA93080)
#define NAGABJLKFON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA930E0)

inline static constexpr unsigned int NAGABJLKFON_TypeDefinitionIndex = 33678;

	class NAGABJLKFON : public ::System::Object
	{
	public:
		::JGAMMPGMCNI* NLIJNNMCAAO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::PFLOIHLLMEE* DKCCHALJNAD; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::NAGABJLKFON*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NAGABJLKFON*>**)UnitySDK::FromName("", "NAGABJLKFON")->GetStaticField(0x5C8E0);
		}

		// static const ::System::Object KAJMJPDMGMF; // 0x0
		// static const ::System::Object DMAFCIBFMPD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGABJLKFON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NAGABJLKFON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAGABJLKFON*))((::PBYTE)hIl2Cpp + NAGABJLKFON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAGABJLKFON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NAGABJLKFON*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NAGABJLKFON*>*(*)())((::PBYTE)hIl2Cpp + NAGABJLKFON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGABJLKFON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NAGABJLKFON* Clone()
		{
			return ((::NAGABJLKFON*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGABJLKFON_CLONE_OFFSET))(this);
		}

		::PFLOIHLLMEE* LIAOBOCBJEG()
		{
			return ((::PFLOIHLLMEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGABJLKFON_LIAOBOCBJEG_OFFSET))(this);
		}

		::System::Void PCHLPNFKCFH(::PFLOIHLLMEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFLOIHLLMEE*))((::PBYTE)hIl2Cpp + NAGABJLKFON_PCHLPNFKCFH_OFFSET))(this, a1);
		}

		::JGAMMPGMCNI* ADGLNFILOHI()
		{
			return ((::JGAMMPGMCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGABJLKFON_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::JGAMMPGMCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAMMPGMCNI*))((::PBYTE)hIl2Cpp + NAGABJLKFON_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGABJLKFON_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAGABJLKFON_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAGABJLKFON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NAGABJLKFON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAGABJLKFON*))((::PBYTE)hIl2Cpp + NAGABJLKFON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGABJLKFON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGABJLKFON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NAGABJLKFON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGABJLKFON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NAGABJLKFON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAGABJLKFON*))((::PBYTE)hIl2Cpp + NAGABJLKFON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NAGABJLKFON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
