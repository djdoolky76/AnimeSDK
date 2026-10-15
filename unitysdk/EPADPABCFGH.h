#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPADPABCFGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPADPABCFGH_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E300D90)
#define EPADPABCFGH_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1E300DC0)
#define EPADPABCFGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E301100)
#define EPADPABCFGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E301480)
#define EPADPABCFGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E300D10)
#define EPADPABCFGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E300CD0)
#define EPADPABCFGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E300CC0)
#define EPADPABCFGH_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E300DA0)
#define EPADPABCFGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E300E70)
#define EPADPABCFGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E300DF0)
#define EPADPABCFGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E300F40)
#define EPADPABCFGH_GINCKEFEOFI_OFFSET UNITYSDK_OFFSET(0x1E300DE0)
#define EPADPABCFGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E300C50)
#define EPADPABCFGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3012E0)
#define EPADPABCFGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E301290)
#define EPADPABCFGH_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1E300DB0)
#define EPADPABCFGH_PBGNHNNJCNK_OFFSET UNITYSDK_OFFSET(0x1E300DD0)
#define EPADPABCFGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E300CB0)
#define EPADPABCFGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E300F70)
#define EPADPABCFGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E300FD0)

inline static constexpr unsigned int EPADPABCFGH_TypeDefinitionIndex = 31652;

	class EPADPABCFGH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KLINKNMHOCI; // 0x18
		::System::UInt32 IMAFPDLBAIA; // 0x1C
		::System::UInt32 NPFBAFODCBI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EPADPABCFGH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPADPABCFGH*>**)UnitySDK::FromName("", "EPADPABCFGH")->GetStaticField(0x31080);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object GKKKEHJAKII; // 0x0
		// static const ::System::Object KKEJKDJCMPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPADPABCFGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPADPABCFGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPADPABCFGH*))((::PBYTE)hIl2Cpp + EPADPABCFGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPADPABCFGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EPADPABCFGH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EPADPABCFGH*>*(*)())((::PBYTE)hIl2Cpp + EPADPABCFGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPADPABCFGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPADPABCFGH* Clone()
		{
			return ((::EPADPABCFGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPADPABCFGH_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPADPABCFGH_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPADPABCFGH_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 MHHDBKELGIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPADPABCFGH_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPADPABCFGH_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::System::UInt32 PBGNHNNJCNK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPADPABCFGH_PBGNHNNJCNK_OFFSET))(this);
		}

		::System::Void GINCKEFEOFI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPADPABCFGH_GINCKEFEOFI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPADPABCFGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPADPABCFGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPADPABCFGH*))((::PBYTE)hIl2Cpp + EPADPABCFGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPADPABCFGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPADPABCFGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPADPABCFGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPADPABCFGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPADPABCFGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPADPABCFGH*))((::PBYTE)hIl2Cpp + EPADPABCFGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPADPABCFGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
