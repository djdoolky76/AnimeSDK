#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJJFBFPCBCI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJJFBFPCBCI_AENLMNHBPAH_OFFSET UNITYSDK_OFFSET(0x1E694C70)
#define IJJFBFPCBCI_BPMNOBOCHGI_OFFSET UNITYSDK_OFFSET(0x1E694CC0)
#define IJJFBFPCBCI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E695070)
#define IJJFBFPCBCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E695370)
#define IJJFBFPCBCI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E694BE0)
#define IJJFBFPCBCI_CNKIIBBFBMD_OFFSET UNITYSDK_OFFSET(0x1E694CB0)
#define IJJFBFPCBCI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E694BB0)
#define IJJFBFPCBCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E694BA0)
#define IJJFBFPCBCI_DIMFNPHBDNA_OFFSET UNITYSDK_OFFSET(0x1E694C50)
#define IJJFBFPCBCI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E694D60)
#define IJJFBFPCBCI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E694CD0)
#define IJJFBFPCBCI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E694E40)
#define IJJFBFPCBCI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E694B30)
#define IJJFBFPCBCI_KHCNECHDHLF_OFFSET UNITYSDK_OFFSET(0x1E694CA0)
#define IJJFBFPCBCI_MDOFLDBOMMN_OFFSET UNITYSDK_OFFSET(0x1E694C60)
#define IJJFBFPCBCI_MEKBLBOPFIL_OFFSET UNITYSDK_OFFSET(0x1E694C80)
#define IJJFBFPCBCI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6952D0)
#define IJJFBFPCBCI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E695280)
#define IJJFBFPCBCI_ODCDHOMPECF_OFFSET UNITYSDK_OFFSET(0x1E694C90)
#define IJJFBFPCBCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E694B90)
#define IJJFBFPCBCI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E694E80)
#define IJJFBFPCBCI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E694EE0)

	class IJJFBFPCBCI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 POIPOBFNLNM; // 0x18
		::System::UInt32 DFGKNBHIHEK; // 0x1C
		::System::UInt32 LGNNJKFHDOC; // 0x20
		::System::UInt32 GMPIBKKHDDO; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IJJFBFPCBCI")->GetStaticField(0x4D6E0);
		}

		// static const ::System::Object FPIMLFGEHCB; // 0x0
		// static const ::System::Object OEICCFNPAEG; // 0x0
		// static const ::System::Object ODJCFGGLBGO; // 0x0
		// static const ::System::Object NIBNGCECKEL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IJJFBFPCBCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJJFBFPCBCI*))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJJFBFPCBCI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IJJFBFPCBCI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IJJFBFPCBCI* Clone()
		{
			return ((::IJJFBFPCBCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_CLONE_OFFSET))(this);
		}

		::System::UInt32 DIMFNPHBDNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_DIMFNPHBDNA_OFFSET))(this);
		}

		::System::Void MDOFLDBOMMN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_MDOFLDBOMMN_OFFSET))(this, a1);
		}

		::System::UInt32 AENLMNHBPAH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_AENLMNHBPAH_OFFSET))(this);
		}

		::System::Void MEKBLBOPFIL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_MEKBLBOPFIL_OFFSET))(this, a1);
		}

		::System::UInt32 ODCDHOMPECF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_ODCDHOMPECF_OFFSET))(this);
		}

		::System::Void KHCNECHDHLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_KHCNECHDHLF_OFFSET))(this, a1);
		}

		::System::UInt32 CNKIIBBFBMD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_CNKIIBBFBMD_OFFSET))(this);
		}

		::System::Void BPMNOBOCHGI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_BPMNOBOCHGI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IJJFBFPCBCI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJJFBFPCBCI*))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IJJFBFPCBCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJJFBFPCBCI*))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IJJFBFPCBCI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
