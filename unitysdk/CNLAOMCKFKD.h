#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNLAOMCKFKD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CNLAOMCKFKD_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E10A0D0)
#define CNLAOMCKFKD_BKJJOFBNEOI_OFFSET UNITYSDK_OFFSET(0x1E10A0C0)
#define CNLAOMCKFKD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E10A490)
#define CNLAOMCKFKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E10A790)
#define CNLAOMCKFKD_CEMGFJGFGMP_OFFSET UNITYSDK_OFFSET(0x1E10A080)
#define CNLAOMCKFKD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E10A000)
#define CNLAOMCKFKD_CPEEIHDCIFD_OFFSET UNITYSDK_OFFSET(0x1E10A090)
#define CNLAOMCKFKD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E109FD0)
#define CNLAOMCKFKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E109FC0)
#define CNLAOMCKFKD_ENEJAIHHLDO_OFFSET UNITYSDK_OFFSET(0x1E10A0B0)
#define CNLAOMCKFKD_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E10A0E0)
#define CNLAOMCKFKD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E10A180)
#define CNLAOMCKFKD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E10A0F0)
#define CNLAOMCKFKD_FHOLHJHEOMJ_OFFSET UNITYSDK_OFFSET(0x1E10A0A0)
#define CNLAOMCKFKD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E10A260)
#define CNLAOMCKFKD_HOIOCKAEOGP_OFFSET UNITYSDK_OFFSET(0x1E10A070)
#define CNLAOMCKFKD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E109F50)
#define CNLAOMCKFKD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E10A6F0)
#define CNLAOMCKFKD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E10A6A0)
#define CNLAOMCKFKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E109FB0)
#define CNLAOMCKFKD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E10A2A0)
#define CNLAOMCKFKD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E10A300)

inline static constexpr unsigned int CNLAOMCKFKD_TypeDefinitionIndex = 34708;

	class CNLAOMCKFKD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NMABHKCOLCM; // 0x18
		::System::UInt32 LDKFAGOONEB; // 0x1C
		::System::UInt32 JCJAAAEGIIO; // 0x20
		::System::UInt32 NPFBAFODCBI; // 0x24
		static ::Google::Protobuf::MessageParser_1<::CNLAOMCKFKD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CNLAOMCKFKD*>**)UnitySDK::FromName("", "CNLAOMCKFKD")->GetStaticField(0x1FD10);
		}

		// static const ::System::Object JIDBDLOLKHO; // 0x0
		// static const ::System::Object IADILMFABOH; // 0x0
		// static const ::System::Object NCKJJHMBKFH; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNLAOMCKFKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNLAOMCKFKD*))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNLAOMCKFKD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CNLAOMCKFKD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CNLAOMCKFKD*>*(*)())((::PBYTE)hIl2Cpp + CNLAOMCKFKD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNLAOMCKFKD* Clone()
		{
			return ((::CNLAOMCKFKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_CLONE_OFFSET))(this);
		}

		::System::UInt32 HOIOCKAEOGP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_HOIOCKAEOGP_OFFSET))(this);
		}

		::System::Void CEMGFJGFGMP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_CEMGFJGFGMP_OFFSET))(this, a1);
		}

		::System::UInt32 CPEEIHDCIFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_CPEEIHDCIFD_OFFSET))(this);
		}

		::System::Void FHOLHJHEOMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_FHOLHJHEOMJ_OFFSET))(this, a1);
		}

		::System::UInt32 ENEJAIHHLDO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_ENEJAIHHLDO_OFFSET))(this);
		}

		::System::Void BKJJOFBNEOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_BKJJOFBNEOI_OFFSET))(this, a1);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNLAOMCKFKD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNLAOMCKFKD*))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNLAOMCKFKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNLAOMCKFKD*))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNLAOMCKFKD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
