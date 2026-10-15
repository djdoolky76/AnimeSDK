#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGAMMPGMCNI;
class JMAHJPIJEND;
class PFLOIHLLMEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JMAHJPIJEND_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1E75B180)
#define JMAHJPIJEND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E75B890)
#define JMAHJPIJEND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E75BC10)
#define JMAHJPIJEND_CLONE_OFFSET UNITYSDK_OFFSET(0x1E75B0C0)
#define JMAHJPIJEND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E75B010)
#define JMAHJPIJEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1E75B000)
#define JMAHJPIJEND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E75B410)
#define JMAHJPIJEND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E75B1E0)
#define JMAHJPIJEND_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E75B1D0)
#define JMAHJPIJEND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E75B640)
#define JMAHJPIJEND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E75AFC0)
#define JMAHJPIJEND_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1E75B190)
#define JMAHJPIJEND_LIAOBOCBJEG_OFFSET UNITYSDK_OFFSET(0x1E75B1A0)
#define JMAHJPIJEND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E75BA50)
#define JMAHJPIJEND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E75B9A0)
#define JMAHJPIJEND_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E75B1C0)
#define JMAHJPIJEND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E75AFF0)
#define JMAHJPIJEND_PCHLPNFKCFH_OFFSET UNITYSDK_OFFSET(0x1E75B1B0)
#define JMAHJPIJEND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E75B6F0)
#define JMAHJPIJEND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E75B750)

inline static constexpr unsigned int JMAHJPIJEND_TypeDefinitionIndex = 33674;

	class JMAHJPIJEND : public ::System::Object
	{
	public:
		::JGAMMPGMCNI* NLIJNNMCAAO; // 0x10
		::PFLOIHLLMEE* DKCCHALJNAD; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::JMAHJPIJEND*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JMAHJPIJEND*>**)UnitySDK::FromName("", "JMAHJPIJEND")->GetStaticField(0x64F50);
		}

		// static const ::System::Object DMAFCIBFMPD; // 0x0
		// static const ::System::Object KAJMJPDMGMF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHJPIJEND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JMAHJPIJEND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMAHJPIJEND*))((::PBYTE)hIl2Cpp + JMAHJPIJEND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMAHJPIJEND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JMAHJPIJEND*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JMAHJPIJEND*>*(*)())((::PBYTE)hIl2Cpp + JMAHJPIJEND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHJPIJEND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JMAHJPIJEND* Clone()
		{
			return ((::JMAHJPIJEND*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHJPIJEND_CLONE_OFFSET))(this);
		}

		::JGAMMPGMCNI* ADGLNFILOHI()
		{
			return ((::JGAMMPGMCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHJPIJEND_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::JGAMMPGMCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAMMPGMCNI*))((::PBYTE)hIl2Cpp + JMAHJPIJEND_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::PFLOIHLLMEE* LIAOBOCBJEG()
		{
			return ((::PFLOIHLLMEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHJPIJEND_LIAOBOCBJEG_OFFSET))(this);
		}

		::System::Void PCHLPNFKCFH(::PFLOIHLLMEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFLOIHLLMEE*))((::PBYTE)hIl2Cpp + JMAHJPIJEND_PCHLPNFKCFH_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHJPIJEND_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JMAHJPIJEND_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMAHJPIJEND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JMAHJPIJEND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JMAHJPIJEND*))((::PBYTE)hIl2Cpp + JMAHJPIJEND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHJPIJEND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHJPIJEND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JMAHJPIJEND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHJPIJEND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JMAHJPIJEND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMAHJPIJEND*))((::PBYTE)hIl2Cpp + JMAHJPIJEND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JMAHJPIJEND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
