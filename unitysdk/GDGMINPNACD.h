#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDGMINPNACD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDGMINPNACD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F737F00)
#define GDGMINPNACD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F738280)
#define GDGMINPNACD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F737AE0)
#define GDGMINPNACD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F737AA0)
#define GDGMINPNACD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F737A90)
#define GDGMINPNACD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F737C70)
#define GDGMINPNACD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F737B90)
#define GDGMINPNACD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F737D40)
#define GDGMINPNACD_HLHJBEPAFFM_OFFSET UNITYSDK_OFFSET(0x1F737B40)
#define GDGMINPNACD_IFGMGBAAKBM_OFFSET UNITYSDK_OFFSET(0x1F737B80)
#define GDGMINPNACD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F737A50)
#define GDGMINPNACD_KEEHIMOCBNK_OFFSET UNITYSDK_OFFSET(0x1F737B60)
#define GDGMINPNACD_KNGJFHKOLEO_OFFSET UNITYSDK_OFFSET(0x1F737B30)
#define GDGMINPNACD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F7380E0)
#define GDGMINPNACD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F738090)
#define GDGMINPNACD_MLMMBFLDIGB_OFFSET UNITYSDK_OFFSET(0x1F737B50)
#define GDGMINPNACD_OPDMPOKGBCA_OFFSET UNITYSDK_OFFSET(0x1F737B70)
#define GDGMINPNACD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F737A80)
#define GDGMINPNACD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F737D70)
#define GDGMINPNACD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F737DD0)

inline static constexpr unsigned int GDGMINPNACD_TypeDefinitionIndex = 34899;

	class GDGMINPNACD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KHMPKKJMHNM; // 0x18
		::System::UInt32 CHMFPHPJAIA; // 0x1C
		::System::UInt32 HHKEHNKMILI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GDGMINPNACD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDGMINPNACD*>**)UnitySDK::FromName("", "GDGMINPNACD")->GetStaticField(0x57240);
		}

		// static const ::System::Object HCNNIHOAGEM; // 0x0
		// static const ::System::Object EBOOHBBAGIC; // 0x0
		// static const ::System::Object NKLILADIPNI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDGMINPNACD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDGMINPNACD*))((::PBYTE)hIl2Cpp + GDGMINPNACD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDGMINPNACD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GDGMINPNACD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GDGMINPNACD*>*(*)())((::PBYTE)hIl2Cpp + GDGMINPNACD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDGMINPNACD* Clone()
		{
			return ((::GDGMINPNACD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_CLONE_OFFSET))(this);
		}

		::System::UInt32 KNGJFHKOLEO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_KNGJFHKOLEO_OFFSET))(this);
		}

		::System::Void HLHJBEPAFFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDGMINPNACD_HLHJBEPAFFM_OFFSET))(this, a1);
		}

		::System::UInt32 MLMMBFLDIGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_MLMMBFLDIGB_OFFSET))(this);
		}

		::System::Void KEEHIMOCBNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDGMINPNACD_KEEHIMOCBNK_OFFSET))(this, a1);
		}

		::System::UInt32 OPDMPOKGBCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_OPDMPOKGBCA_OFFSET))(this);
		}

		::System::Void IFGMGBAAKBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDGMINPNACD_IFGMGBAAKBM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDGMINPNACD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDGMINPNACD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDGMINPNACD*))((::PBYTE)hIl2Cpp + GDGMINPNACD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDGMINPNACD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDGMINPNACD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDGMINPNACD*))((::PBYTE)hIl2Cpp + GDGMINPNACD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDGMINPNACD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
