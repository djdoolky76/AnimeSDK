#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBDMGEGELFM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBDMGEGELFM_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1E0643E0)
#define CBDMGEGELFM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E064750)
#define CBDMGEGELFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E064A50)
#define CBDMGEGELFM_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1E0643F0)
#define CBDMGEGELFM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E064390)
#define CBDMGEGELFM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E064360)
#define CBDMGEGELFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E064350)
#define CBDMGEGELFM_DEIFKADBGLG_OFFSET UNITYSDK_OFFSET(0x1E064410)
#define CBDMGEGELFM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E064500)
#define CBDMGEGELFM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E064420)
#define CBDMGEGELFM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0645D0)
#define CBDMGEGELFM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E064310)
#define CBDMGEGELFM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0648D0)
#define CBDMGEGELFM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E064890)
#define CBDMGEGELFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E064340)
#define CBDMGEGELFM_PGBCDIKLECC_OFFSET UNITYSDK_OFFSET(0x1E064400)
#define CBDMGEGELFM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E064600)
#define CBDMGEGELFM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E064660)

	class CBDMGEGELFM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PDKNJCIEBHA; // 0x18
		::System::Int32 NMGAFGKJJCD; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CBDMGEGELFM")->GetStaticField(0xBA70);
		}

		// static const ::System::Object AFBDHEMJEPP; // 0x0
		// static const ::System::Object FNILHJONHLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDMGEGELFM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBDMGEGELFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBDMGEGELFM*))((::PBYTE)hIl2Cpp + CBDMGEGELFM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBDMGEGELFM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CBDMGEGELFM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDMGEGELFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBDMGEGELFM* Clone()
		{
			return ((::CBDMGEGELFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDMGEGELFM_CLONE_OFFSET))(this);
		}

		::System::UInt32 AFADJMFGCGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDMGEGELFM_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void CLHOECGMLFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBDMGEGELFM_CLHOECGMLFH_OFFSET))(this, a1);
		}

		::System::Int32 PGBCDIKLECC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDMGEGELFM_PGBCDIKLECC_OFFSET))(this);
		}

		::System::Void DEIFKADBGLG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CBDMGEGELFM_DEIFKADBGLG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBDMGEGELFM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBDMGEGELFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBDMGEGELFM*))((::PBYTE)hIl2Cpp + CBDMGEGELFM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDMGEGELFM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDMGEGELFM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBDMGEGELFM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDMGEGELFM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBDMGEGELFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBDMGEGELFM*))((::PBYTE)hIl2Cpp + CBDMGEGELFM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBDMGEGELFM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
