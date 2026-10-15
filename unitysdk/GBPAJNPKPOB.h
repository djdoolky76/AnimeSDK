#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMKMEFMOJGJ;
class GBPAJNPKPOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBPAJNPKPOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4347B0)
#define GBPAJNPKPOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E434B30)
#define GBPAJNPKPOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E434230)
#define GBPAJNPKPOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4341A0)
#define GBPAJNPKPOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E434190)
#define GBPAJNPKPOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4343C0)
#define GBPAJNPKPOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E434350)
#define GBPAJNPKPOB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E434300)
#define GBPAJNPKPOB_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E434310)
#define GBPAJNPKPOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E434560)
#define GBPAJNPKPOB_HGPHFKHLONN_OFFSET UNITYSDK_OFFSET(0x1E434330)
#define GBPAJNPKPOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E434150)
#define GBPAJNPKPOB_KACHGJNOBCO_OFFSET UNITYSDK_OFFSET(0x1E4342E0)
#define GBPAJNPKPOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E434A50)
#define GBPAJNPKPOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E434970)
#define GBPAJNPKPOB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4342F0)
#define GBPAJNPKPOB_OFGOLAEELNP_OFFSET UNITYSDK_OFFSET(0x1E4342D0)
#define GBPAJNPKPOB_OLDFFGKEHDP_OFFSET UNITYSDK_OFFSET(0x1E434340)
#define GBPAJNPKPOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E434180)
#define GBPAJNPKPOB_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E434320)
#define GBPAJNPKPOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4345C0)
#define GBPAJNPKPOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E434620)

	class GBPAJNPKPOB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FMKMEFMOJGJ* LBGNLONMEKF; // 0x18
		::System::UInt32 GGOLOPJCHOK; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 DBDCJHECJOO; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GBPAJNPKPOB")->GetStaticField(0xE580);
		}

		// static const ::System::Object OHMMOKDEBBP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HACFLGOPALO; // 0x0
		// static const ::System::Object FFCNOFNJMHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBPAJNPKPOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBPAJNPKPOB*))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBPAJNPKPOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GBPAJNPKPOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBPAJNPKPOB* Clone()
		{
			return ((::GBPAJNPKPOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OFGOLAEELNP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_OFGOLAEELNP_OFFSET))(this);
		}

		::System::Void KACHGJNOBCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_KACHGJNOBCO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_PMPGMADMADA_OFFSET))(this, a1);
		}

		::FMKMEFMOJGJ* HGPHFKHLONN()
		{
			return ((::FMKMEFMOJGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_HGPHFKHLONN_OFFSET))(this);
		}

		::System::Void OLDFFGKEHDP(::FMKMEFMOJGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMKMEFMOJGJ*))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_OLDFFGKEHDP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBPAJNPKPOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBPAJNPKPOB*))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBPAJNPKPOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBPAJNPKPOB*))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBPAJNPKPOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
