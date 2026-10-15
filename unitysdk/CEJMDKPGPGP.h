#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEJMDKPGPGP;
class DFJPGILAAON;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEJMDKPGPGP_ANJAMMBMJIE_OFFSET UNITYSDK_OFFSET(0x1E0967A0)
#define CEJMDKPGPGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E096D30)
#define CEJMDKPGPGP_CBGEKBBDMMO_OFFSET UNITYSDK_OFFSET(0x1E096790)
#define CEJMDKPGPGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E097120)
#define CEJMDKPGPGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E096700)
#define CEJMDKPGPGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E096680)
#define CEJMDKPGPGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E096670)
#define CEJMDKPGPGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E096990)
#define CEJMDKPGPGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0967F0)
#define CEJMDKPGPGP_FLGKHNLIAOL_OFFSET UNITYSDK_OFFSET(0x1E0967C0)
#define CEJMDKPGPGP_FMMFNNOAAEK_OFFSET UNITYSDK_OFFSET(0x1E0967E0)
#define CEJMDKPGPGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E096B10)
#define CEJMDKPGPGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E096630)
#define CEJMDKPGPGP_KMGGNNGDLCO_OFFSET UNITYSDK_OFFSET(0x1E0967D0)
#define CEJMDKPGPGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E096F30)
#define CEJMDKPGPGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E096E10)
#define CEJMDKPGPGP_OBNDPBNPOLJ_OFFSET UNITYSDK_OFFSET(0x1E0967B0)
#define CEJMDKPGPGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E096660)
#define CEJMDKPGPGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E096B60)
#define CEJMDKPGPGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E096BC0)

	class CEJMDKPGPGP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::DFJPGILAAON* PJFFAIDNPAP; // 0x18
		::System::Boolean CCNIHPKICOK; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 LIFLOCBONIF; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CEJMDKPGPGP")->GetStaticField(0x123F0);
		}

		// static const ::System::Object PLGABPIAIHO; // 0x0
		// static const ::System::Object FCKBLNMJMIM; // 0x0
		// static const ::System::Object KOAPPFHOOEJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEJMDKPGPGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEJMDKPGPGP*))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEJMDKPGPGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CEJMDKPGPGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEJMDKPGPGP* Clone()
		{
			return ((::CEJMDKPGPGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_CLONE_OFFSET))(this);
		}

		::DFJPGILAAON* CBGEKBBDMMO()
		{
			return ((::DFJPGILAAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_CBGEKBBDMMO_OFFSET))(this);
		}

		::System::Void ANJAMMBMJIE(::DFJPGILAAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJPGILAAON*))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_ANJAMMBMJIE_OFFSET))(this, a1);
		}

		::System::UInt32 OBNDPBNPOLJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_OBNDPBNPOLJ_OFFSET))(this);
		}

		::System::Void FLGKHNLIAOL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_FLGKHNLIAOL_OFFSET))(this, a1);
		}

		::System::Boolean KMGGNNGDLCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_KMGGNNGDLCO_OFFSET))(this);
		}

		::System::Void FMMFNNOAAEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_FMMFNNOAAEK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEJMDKPGPGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEJMDKPGPGP*))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEJMDKPGPGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEJMDKPGPGP*))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEJMDKPGPGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
