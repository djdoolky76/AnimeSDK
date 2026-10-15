#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDAIOFEPGCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDAIOFEPGCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7073B0)
#define JDAIOFEPGCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E707650)
#define JDAIOFEPGCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E706ED0)
#define JDAIOFEPGCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E706E90)
#define JDAIOFEPGCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E706E80)
#define JDAIOFEPGCC_DEHKMAKBNLB_OFFSET UNITYSDK_OFFSET(0x1E706F70)
#define JDAIOFEPGCC_EOBMCIDLHGC_OFFSET UNITYSDK_OFFSET(0x1E706FC0)
#define JDAIOFEPGCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E707060)
#define JDAIOFEPGCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E706FD0)
#define JDAIOFEPGCC_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1E706F60)
#define JDAIOFEPGCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E707150)
#define JDAIOFEPGCC_GHJMLABOMJI_OFFSET UNITYSDK_OFFSET(0x1E706F90)
#define JDAIOFEPGCC_IGFLCGBDBHF_OFFSET UNITYSDK_OFFSET(0x1E706F80)
#define JDAIOFEPGCC_IGGEKOHMMDN_OFFSET UNITYSDK_OFFSET(0x1E706FB0)
#define JDAIOFEPGCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E706E10)
#define JDAIOFEPGCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7075A0)
#define JDAIOFEPGCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E707550)
#define JDAIOFEPGCC_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1E706F50)
#define JDAIOFEPGCC_OLCBDMMJPON_OFFSET UNITYSDK_OFFSET(0x1E706FA0)
#define JDAIOFEPGCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E706E70)
#define JDAIOFEPGCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E707180)
#define JDAIOFEPGCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7071E0)

	class JDAIOFEPGCC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean MFECHEJABII; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 IHHANCNMDMA; // 0x1C
		::System::UInt32 AIDIOAPJNJG; // 0x20
		::System::UInt32 GFMHFBDKDOE; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JDAIOFEPGCC")->GetStaticField(0x32310);
		}

		// static const ::System::Object CPDECFMCKEM; // 0x0
		// static const ::System::Object BBNMEBBEHBC; // 0x0
		// static const ::System::Object FCLKOFBAFMC; // 0x0
		// static const ::System::Object JCACPKOJDFB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDAIOFEPGCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDAIOFEPGCC*))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDAIOFEPGCC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JDAIOFEPGCC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDAIOFEPGCC* Clone()
		{
			return ((::JDAIOFEPGCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::Boolean DEHKMAKBNLB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_DEHKMAKBNLB_OFFSET))(this);
		}

		::System::Void IGFLCGBDBHF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_IGFLCGBDBHF_OFFSET))(this, a1);
		}

		::System::UInt32 GHJMLABOMJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_GHJMLABOMJI_OFFSET))(this);
		}

		::System::Void OLCBDMMJPON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_OLCBDMMJPON_OFFSET))(this, a1);
		}

		::System::UInt32 IGGEKOHMMDN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_IGGEKOHMMDN_OFFSET))(this);
		}

		::System::Void EOBMCIDLHGC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_EOBMCIDLHGC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDAIOFEPGCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDAIOFEPGCC*))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDAIOFEPGCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDAIOFEPGCC*))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDAIOFEPGCC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
