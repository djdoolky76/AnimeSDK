#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMBCNFKFABK;
class JECNOELJLKO;
class LMLNNHKJEIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMBCNFKFABK_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1E01D720)
#define BMBCNFKFABK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E01DBA0)
#define BMBCNFKFABK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E01E120)
#define BMBCNFKFABK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E01D6C0)
#define BMBCNFKFABK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E01D5A0)
#define BMBCNFKFABK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E01D550)
#define BMBCNFKFABK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E01D770)
#define BMBCNFKFABK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E01D740)
#define BMBCNFKFABK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E01D710)
#define BMBCNFKFABK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E01D950)
#define BMBCNFKFABK_GOAHOGGOLOJ_OFFSET UNITYSDK_OFFSET(0x1E01D6F0)
#define BMBCNFKFABK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E01D510)
#define BMBCNFKFABK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E01DE80)
#define BMBCNFKFABK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E01DD00)
#define BMBCNFKFABK_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1E01D730)
#define BMBCNFKFABK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E01D700)
#define BMBCNFKFABK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E01D540)
#define BMBCNFKFABK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E01D9D0)
#define BMBCNFKFABK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E01DA30)

	class BMBCNFKFABK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* BDGHBBABABH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::JECNOELJLKO* CMDGAIOLHKP; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BMBCNFKFABK")->GetStaticField(0x4DC90);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_HPDECJBEECG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BMBCNFKFABK")->GetStaticField(0x4DC98);
		}

		// static const ::System::Object OIDEIBKKMCB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMBCNFKFABK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMBCNFKFABK*))((::PBYTE)hIl2Cpp + BMBCNFKFABK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMBCNFKFABK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BMBCNFKFABK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMBCNFKFABK* Clone()
		{
			return ((::BMBCNFKFABK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* GOAHOGGOLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_GOAHOGGOLOJ_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMBCNFKFABK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::JECNOELJLKO* ANALOEDDDHD()
		{
			return ((::JECNOELJLKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::JECNOELJLKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JECNOELJLKO*))((::PBYTE)hIl2Cpp + BMBCNFKFABK_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBCNFKFABK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMBCNFKFABK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMBCNFKFABK*))((::PBYTE)hIl2Cpp + BMBCNFKFABK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMBCNFKFABK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMBCNFKFABK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMBCNFKFABK*))((::PBYTE)hIl2Cpp + BMBCNFKFABK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMBCNFKFABK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
