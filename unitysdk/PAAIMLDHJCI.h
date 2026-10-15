#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAAIMLDHJCI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PAAIMLDHJCI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEE9370)
#define PAAIMLDHJCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE96F0)
#define PAAIMLDHJCI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEE8F50)
#define PAAIMLDHJCI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEE8F10)
#define PAAIMLDHJCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE8F00)
#define PAAIMLDHJCI_DNPBHEMIBPK_OFFSET UNITYSDK_OFFSET(0x1DEE8FD0)
#define PAAIMLDHJCI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEE90E0)
#define PAAIMLDHJCI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEE9000)
#define PAAIMLDHJCI_FJOEOGHFPCN_OFFSET UNITYSDK_OFFSET(0x1DEE8FB0)
#define PAAIMLDHJCI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEE91B0)
#define PAAIMLDHJCI_HDEJJEDGFHA_OFFSET UNITYSDK_OFFSET(0x1DEE8FE0)
#define PAAIMLDHJCI_HFJCFBIMLMP_OFFSET UNITYSDK_OFFSET(0x1DEE8FF0)
#define PAAIMLDHJCI_IMFBLHADADC_OFFSET UNITYSDK_OFFSET(0x1DEE8FC0)
#define PAAIMLDHJCI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEE8EC0)
#define PAAIMLDHJCI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEE9550)
#define PAAIMLDHJCI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEE9500)
#define PAAIMLDHJCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEE8EF0)
#define PAAIMLDHJCI_PMJMBILPDPL_OFFSET UNITYSDK_OFFSET(0x1DEE8FA0)
#define PAAIMLDHJCI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEE91E0)
#define PAAIMLDHJCI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEE9240)

	class PAAIMLDHJCI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PANHBLLDMGI; // 0x18
		::System::UInt32 CFECEAODGPG; // 0x1C
		::System::UInt32 ILBGKJHIEJA; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PAAIMLDHJCI")->GetStaticField(0x31130);
		}

		// static const ::System::Object LCGDMIKJFJI; // 0x0
		// static const ::System::Object EMPDMPHKKGB; // 0x0
		// static const ::System::Object JAAODGJBLJH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PAAIMLDHJCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAAIMLDHJCI*))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAAIMLDHJCI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PAAIMLDHJCI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PAAIMLDHJCI* Clone()
		{
			return ((::PAAIMLDHJCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_CLONE_OFFSET))(this);
		}

		::System::UInt32 PMJMBILPDPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_PMJMBILPDPL_OFFSET))(this);
		}

		::System::Void FJOEOGHFPCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_FJOEOGHFPCN_OFFSET))(this, a1);
		}

		::System::UInt32 IMFBLHADADC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_IMFBLHADADC_OFFSET))(this);
		}

		::System::Void DNPBHEMIBPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_DNPBHEMIBPK_OFFSET))(this, a1);
		}

		::System::UInt32 HDEJJEDGFHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_HDEJJEDGFHA_OFFSET))(this);
		}

		::System::Void HFJCFBIMLMP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_HFJCFBIMLMP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PAAIMLDHJCI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PAAIMLDHJCI*))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PAAIMLDHJCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAAIMLDHJCI*))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PAAIMLDHJCI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
