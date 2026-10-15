#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMHADFNOIGP;
class LDBOCEIMACL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDBOCEIMACL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8C4DD0)
#define LDBOCEIMACL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C5220)
#define LDBOCEIMACL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8C4770)
#define LDBOCEIMACL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8C46E0)
#define LDBOCEIMACL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C46D0)
#define LDBOCEIMACL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8C4A00)
#define LDBOCEIMACL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8C4870)
#define LDBOCEIMACL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8C4860)
#define LDBOCEIMACL_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E8C4810)
#define LDBOCEIMACL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8C4B90)
#define LDBOCEIMACL_IPGIJKPNCEA_OFFSET UNITYSDK_OFFSET(0x1E8C4830)
#define LDBOCEIMACL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8C4690)
#define LDBOCEIMACL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8C5010)
#define LDBOCEIMACL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8C4F20)
#define LDBOCEIMACL_NBLBNDHNELN_OFFSET UNITYSDK_OFFSET(0x1E8C4840)
#define LDBOCEIMACL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8C4850)
#define LDBOCEIMACL_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E8C4820)
#define LDBOCEIMACL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8C46C0)
#define LDBOCEIMACL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8C4C30)
#define LDBOCEIMACL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8C4C90)

inline static constexpr unsigned int LDBOCEIMACL_TypeDefinitionIndex = 27238;

	class LDBOCEIMACL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::DMHADFNOIGP* NKMOHONGMMH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 OPPNMFMNMGC; // 0x24
		static ::Google::Protobuf::MessageParser_1<::LDBOCEIMACL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LDBOCEIMACL*>**)UnitySDK::FromName("", "LDBOCEIMACL")->GetStaticField(0x2CF20);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object IDEHFKEKOKI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBOCEIMACL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDBOCEIMACL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDBOCEIMACL*))((::PBYTE)hIl2Cpp + LDBOCEIMACL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDBOCEIMACL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LDBOCEIMACL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LDBOCEIMACL*>*(*)())((::PBYTE)hIl2Cpp + LDBOCEIMACL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBOCEIMACL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDBOCEIMACL* Clone()
		{
			return ((::LDBOCEIMACL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBOCEIMACL_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBOCEIMACL_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDBOCEIMACL_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::DMHADFNOIGP* IPGIJKPNCEA()
		{
			return ((::DMHADFNOIGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBOCEIMACL_IPGIJKPNCEA_OFFSET))(this);
		}

		::System::Void NBLBNDHNELN(::DMHADFNOIGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMHADFNOIGP*))((::PBYTE)hIl2Cpp + LDBOCEIMACL_NBLBNDHNELN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBOCEIMACL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDBOCEIMACL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDBOCEIMACL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDBOCEIMACL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDBOCEIMACL*))((::PBYTE)hIl2Cpp + LDBOCEIMACL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBOCEIMACL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBOCEIMACL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDBOCEIMACL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBOCEIMACL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDBOCEIMACL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDBOCEIMACL*))((::PBYTE)hIl2Cpp + LDBOCEIMACL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDBOCEIMACL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
