#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJOGCABFGMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OJOGCABFGMI_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x1DE8C460)
#define OJOGCABFGMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE8C7A0)
#define OJOGCABFGMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE8CA70)
#define OJOGCABFGMI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE8C3F0)
#define OJOGCABFGMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE8C3C0)
#define OJOGCABFGMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8C3B0)
#define OJOGCABFGMI_EGCLOPOJINE_OFFSET UNITYSDK_OFFSET(0x1DE8C440)
#define OJOGCABFGMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE8C560)
#define OJOGCABFGMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE8C480)
#define OJOGCABFGMI_FEBLKDMIGII_OFFSET UNITYSDK_OFFSET(0x1DE8C450)
#define OJOGCABFGMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE8C630)
#define OJOGCABFGMI_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0x1DE8C470)
#define OJOGCABFGMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE8C370)
#define OJOGCABFGMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE8C8F0)
#define OJOGCABFGMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE8C8B0)
#define OJOGCABFGMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE8C3A0)
#define OJOGCABFGMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE8C660)
#define OJOGCABFGMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE8C6C0)

inline static constexpr unsigned int OJOGCABFGMI_TypeDefinitionIndex = 28121;

	class OJOGCABFGMI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CLADFMOEPCK; // 0x18
		::System::UInt32 BIIPLBKCBCB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OJOGCABFGMI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OJOGCABFGMI*>**)UnitySDK::FromName("", "OJOGCABFGMI")->GetStaticField(0x202D0);
		}

		// static const ::System::Object HFJINAGIMMN; // 0x0
		// static const ::System::Object MIPCBMDOFEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOGCABFGMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OJOGCABFGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJOGCABFGMI*))((::PBYTE)hIl2Cpp + OJOGCABFGMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJOGCABFGMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OJOGCABFGMI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OJOGCABFGMI*>*(*)())((::PBYTE)hIl2Cpp + OJOGCABFGMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOGCABFGMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OJOGCABFGMI* Clone()
		{
			return ((::OJOGCABFGMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOGCABFGMI_CLONE_OFFSET))(this);
		}

		::System::UInt32 EGCLOPOJINE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOGCABFGMI_EGCLOPOJINE_OFFSET))(this);
		}

		::System::Void FEBLKDMIGII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OJOGCABFGMI_FEBLKDMIGII_OFFSET))(this, a1);
		}

		::System::UInt32 BGDKFHEBDFJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOGCABFGMI_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void HEHJAJFJJMP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OJOGCABFGMI_HEHJAJFJJMP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJOGCABFGMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OJOGCABFGMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OJOGCABFGMI*))((::PBYTE)hIl2Cpp + OJOGCABFGMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOGCABFGMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOGCABFGMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OJOGCABFGMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOGCABFGMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OJOGCABFGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJOGCABFGMI*))((::PBYTE)hIl2Cpp + OJOGCABFGMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OJOGCABFGMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
