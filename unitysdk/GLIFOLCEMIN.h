#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLIFOLCEMIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GLIFOLCEMIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4C0F10)
#define GLIFOLCEMIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C11E0)
#define GLIFOLCEMIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4C0B60)
#define GLIFOLCEMIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4C0B30)
#define GLIFOLCEMIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C0B20)
#define GLIFOLCEMIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4C0CD0)
#define GLIFOLCEMIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4C0BF0)
#define GLIFOLCEMIN_GCGPDLMMNCC_OFFSET UNITYSDK_OFFSET(0x1E4C0BB0)
#define GLIFOLCEMIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4C0DA0)
#define GLIFOLCEMIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4C0AE0)
#define GLIFOLCEMIN_LBDNODFODDP_OFFSET UNITYSDK_OFFSET(0x1E4C0BC0)
#define GLIFOLCEMIN_MCBKDODFIPG_OFFSET UNITYSDK_OFFSET(0x1E4C0BE0)
#define GLIFOLCEMIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4C1060)
#define GLIFOLCEMIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4C1020)
#define GLIFOLCEMIN_OBENMMKPEML_OFFSET UNITYSDK_OFFSET(0x1E4C0BD0)
#define GLIFOLCEMIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4C0B10)
#define GLIFOLCEMIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4C0DD0)
#define GLIFOLCEMIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4C0E30)

inline static constexpr unsigned int GLIFOLCEMIN_TypeDefinitionIndex = 29635;

	class GLIFOLCEMIN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ADOJAIIPDEA; // 0x18
		::System::UInt32 NPEGPKEPELF; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GLIFOLCEMIN")->GetStaticField(0x1F510);
		}

		// static const ::System::Object FJCMGMMPDKO; // 0x0
		// static const ::System::Object NDMFIDECLPG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIFOLCEMIN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GLIFOLCEMIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLIFOLCEMIN*))((::PBYTE)hIl2Cpp + GLIFOLCEMIN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLIFOLCEMIN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GLIFOLCEMIN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIFOLCEMIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GLIFOLCEMIN* Clone()
		{
			return ((::GLIFOLCEMIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIFOLCEMIN_CLONE_OFFSET))(this);
		}

		::System::UInt32 GCGPDLMMNCC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIFOLCEMIN_GCGPDLMMNCC_OFFSET))(this);
		}

		::System::Void LBDNODFODDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLIFOLCEMIN_LBDNODFODDP_OFFSET))(this, a1);
		}

		::System::UInt32 OBENMMKPEML()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIFOLCEMIN_OBENMMKPEML_OFFSET))(this);
		}

		::System::Void MCBKDODFIPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLIFOLCEMIN_MCBKDODFIPG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLIFOLCEMIN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GLIFOLCEMIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLIFOLCEMIN*))((::PBYTE)hIl2Cpp + GLIFOLCEMIN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIFOLCEMIN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIFOLCEMIN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GLIFOLCEMIN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIFOLCEMIN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GLIFOLCEMIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLIFOLCEMIN*))((::PBYTE)hIl2Cpp + GLIFOLCEMIN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GLIFOLCEMIN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
