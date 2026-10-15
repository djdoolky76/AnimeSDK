#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEILAINOLPO;
class NEDEIDNOLIM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEDEIDNOLIM_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1EAF0810)
#define NEDEIDNOLIM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAF0D00)
#define NEDEIDNOLIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF1010)
#define NEDEIDNOLIM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAF0760)
#define NEDEIDNOLIM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAF06E0)
#define NEDEIDNOLIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF06D0)
#define NEDEIDNOLIM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAF09B0)
#define NEDEIDNOLIM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAF0830)
#define NEDEIDNOLIM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAF0800)
#define NEDEIDNOLIM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAF0B30)
#define NEDEIDNOLIM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAF0690)
#define NEDEIDNOLIM_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1EAF0820)
#define NEDEIDNOLIM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAF0E60)
#define NEDEIDNOLIM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAF0DD0)
#define NEDEIDNOLIM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAF07F0)
#define NEDEIDNOLIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAF06C0)
#define NEDEIDNOLIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAF0BC0)
#define NEDEIDNOLIM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAF0C20)

inline static constexpr unsigned int NEDEIDNOLIM_TypeDefinitionIndex = 33513;

	class NEDEIDNOLIM : public ::System::Object
	{
	public:
		::EEILAINOLPO* NLIJNNMCAAO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NEDEIDNOLIM")->GetStaticField(0x5DB00);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DMAFCIBFMPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDEIDNOLIM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NEDEIDNOLIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEDEIDNOLIM*))((::PBYTE)hIl2Cpp + NEDEIDNOLIM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEDEIDNOLIM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NEDEIDNOLIM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDEIDNOLIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEDEIDNOLIM* Clone()
		{
			return ((::NEDEIDNOLIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDEIDNOLIM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDEIDNOLIM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEDEIDNOLIM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::EEILAINOLPO* ADGLNFILOHI()
		{
			return ((::EEILAINOLPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDEIDNOLIM_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::EEILAINOLPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEILAINOLPO*))((::PBYTE)hIl2Cpp + NEDEIDNOLIM_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEDEIDNOLIM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEDEIDNOLIM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEDEIDNOLIM*))((::PBYTE)hIl2Cpp + NEDEIDNOLIM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDEIDNOLIM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDEIDNOLIM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NEDEIDNOLIM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDEIDNOLIM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NEDEIDNOLIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEDEIDNOLIM*))((::PBYTE)hIl2Cpp + NEDEIDNOLIM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NEDEIDNOLIM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
