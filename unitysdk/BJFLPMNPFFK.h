#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJFLPMNPFFK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BJFLPMNPFFK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE094C0)
#define BJFLPMNPFFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE096E0)
#define BJFLPMNPFFK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE090B0)
#define BJFLPMNPFFK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE09080)
#define BJFLPMNPFFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE09070)
#define BJFLPMNPFFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE09240)
#define BJFLPMNPFFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE09140)
#define BJFLPMNPFFK_GAEJCNLBMOG_OFFSET UNITYSDK_OFFSET(0x1DE09120)
#define BJFLPMNPFFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE093B0)
#define BJFLPMNPFFK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE09000)
#define BJFLPMNPFFK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE09580)
#define BJFLPMNPFFK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE09550)
#define BJFLPMNPFFK_NHNGGGEBOAC_OFFSET UNITYSDK_OFFSET(0x1DE09130)
#define BJFLPMNPFFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE09060)
#define BJFLPMNPFFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE093E0)
#define BJFLPMNPFFK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE09440)

	class BJFLPMNPFFK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HIOHMLINHPC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BJFLPMNPFFK")->GetStaticField(0x48FE0);
		}

		// static const ::System::Object MIFCIPEBBEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFLPMNPFFK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BJFLPMNPFFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJFLPMNPFFK*))((::PBYTE)hIl2Cpp + BJFLPMNPFFK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJFLPMNPFFK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BJFLPMNPFFK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFLPMNPFFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BJFLPMNPFFK* Clone()
		{
			return ((::BJFLPMNPFFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFLPMNPFFK_CLONE_OFFSET))(this);
		}

		::System::UInt32 GAEJCNLBMOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFLPMNPFFK_GAEJCNLBMOG_OFFSET))(this);
		}

		::System::Void NHNGGGEBOAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJFLPMNPFFK_NHNGGGEBOAC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJFLPMNPFFK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BJFLPMNPFFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJFLPMNPFFK*))((::PBYTE)hIl2Cpp + BJFLPMNPFFK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFLPMNPFFK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFLPMNPFFK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BJFLPMNPFFK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFLPMNPFFK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BJFLPMNPFFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJFLPMNPFFK*))((::PBYTE)hIl2Cpp + BJFLPMNPFFK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BJFLPMNPFFK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
