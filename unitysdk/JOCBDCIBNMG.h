#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDBDLBAPDBE;
class JOCBDCIBNMG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOCBDCIBNMG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x200031C0)
#define JOCBDCIBNMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x200034E0)
#define JOCBDCIBNMG_CLONE_OFFSET UNITYSDK_OFFSET(0x20002C30)
#define JOCBDCIBNMG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20002BC0)
#define JOCBDCIBNMG_CTOR_OFFSET UNITYSDK_OFFSET(0x20002BB0)
#define JOCBDCIBNMG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20002E70)
#define JOCBDCIBNMG_EQUALS_OFFSET UNITYSDK_OFFSET(0x20002CF0)
#define JOCBDCIBNMG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20002CC0)
#define JOCBDCIBNMG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20002FF0)
#define JOCBDCIBNMG_GHEIAEAOKAC_OFFSET UNITYSDK_OFFSET(0x20002CE0)
#define JOCBDCIBNMG_IGJOIMKFBNG_OFFSET UNITYSDK_OFFSET(0x20002CD0)
#define JOCBDCIBNMG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20002B70)
#define JOCBDCIBNMG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20003320)
#define JOCBDCIBNMG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20003290)
#define JOCBDCIBNMG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20002CB0)
#define JOCBDCIBNMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20002BA0)
#define JOCBDCIBNMG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20003080)
#define JOCBDCIBNMG_WRITETO_OFFSET UNITYSDK_OFFSET(0x200030E0)

inline static constexpr unsigned int JOCBDCIBNMG_TypeDefinitionIndex = 33691;

	class JOCBDCIBNMG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FDBDLBAPDBE* GMLPGJJJKDP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JOCBDCIBNMG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JOCBDCIBNMG*>**)UnitySDK::FromName("", "JOCBDCIBNMG")->GetStaticField(0x67650);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KIAJFAMLJEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOCBDCIBNMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOCBDCIBNMG*))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOCBDCIBNMG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JOCBDCIBNMG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JOCBDCIBNMG*>*(*)())((::PBYTE)hIl2Cpp + JOCBDCIBNMG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOCBDCIBNMG* Clone()
		{
			return ((::JOCBDCIBNMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::FDBDLBAPDBE* IGJOIMKFBNG()
		{
			return ((::FDBDLBAPDBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_IGJOIMKFBNG_OFFSET))(this);
		}

		::System::Void GHEIAEAOKAC(::FDBDLBAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDBDLBAPDBE*))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_GHEIAEAOKAC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOCBDCIBNMG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOCBDCIBNMG*))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOCBDCIBNMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOCBDCIBNMG*))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOCBDCIBNMG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
