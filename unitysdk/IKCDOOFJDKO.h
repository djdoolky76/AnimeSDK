#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKCDOOFJDKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IKCDOOFJDKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E69CD00)
#define IKCDOOFJDKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E69D180)
#define IKCDOOFJDKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E69C750)
#define IKCDOOFJDKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E69C6B0)
#define IKCDOOFJDKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E69C660)
#define IKCDOOFJDKO_EDJMMIMJKEJ_OFFSET UNITYSDK_OFFSET(0x1E69C7B0)
#define IKCDOOFJDKO_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E69C7F0)
#define IKCDOOFJDKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E69C8C0)
#define IKCDOOFJDKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E69C830)
#define IKCDOOFJDKO_FDPMDCOAEIL_OFFSET UNITYSDK_OFFSET(0x1E69C7A0)
#define IKCDOOFJDKO_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E69C800)
#define IKCDOOFJDKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E69C950)
#define IKCDOOFJDKO_ICCDNIGEONP_OFFSET UNITYSDK_OFFSET(0x1E69C7D0)
#define IKCDOOFJDKO_JBOGGKIODGA_OFFSET UNITYSDK_OFFSET(0x1E69C7E0)
#define IKCDOOFJDKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E69C620)
#define IKCDOOFJDKO_KDMNLGDLHPP_OFFSET UNITYSDK_OFFSET(0x1E69C820)
#define IKCDOOFJDKO_KPPKJIINOIG_OFFSET UNITYSDK_OFFSET(0x1E69C810)
#define IKCDOOFJDKO_LEPHOHOKAOE_OFFSET UNITYSDK_OFFSET(0x1E69C780)
#define IKCDOOFJDKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E69D050)
#define IKCDOOFJDKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E69CFD0)
#define IKCDOOFJDKO_NKOFMFBAJKO_OFFSET UNITYSDK_OFFSET(0x1E69C7C0)
#define IKCDOOFJDKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E69C650)
#define IKCDOOFJDKO_PCMFGAPBPGK_OFFSET UNITYSDK_OFFSET(0x1E69C790)
#define IKCDOOFJDKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E69CA60)
#define IKCDOOFJDKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E69CAC0)

inline static constexpr unsigned int IKCDOOFJDKO_TypeDefinitionIndex = 25928;

	class IKCDOOFJDKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OGGHGEPMGIM; // 0x18
		::System::UInt32 GEMFJILOPLL; // 0x20
		::System::UInt32 LJDAJDIGGIN; // 0x24
		::System::UInt32 KHEEFNDOFIF; // 0x28
		::System::UInt32 AFIDADPNANO; // 0x2C
		::System::UInt32 DBHLHPDBNFD; // 0x30
		static ::Google::Protobuf::MessageParser_1<::IKCDOOFJDKO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IKCDOOFJDKO*>**)UnitySDK::FromName("", "IKCDOOFJDKO")->GetStaticField(0x18000);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HLNCABGNLHL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IKCDOOFJDKO")->GetStaticField(0x18008);
		}

		// static const ::System::Object DJALGNPJINF; // 0x0
		// static const ::System::Object HHAPFDHANFC; // 0x0
		// static const ::System::Object JJELBDKAKGN; // 0x0
		// static const ::System::Object CPPFKOJENJH; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object DCAOLJIEPIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IKCDOOFJDKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKCDOOFJDKO*))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKCDOOFJDKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IKCDOOFJDKO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IKCDOOFJDKO*>*(*)())((::PBYTE)hIl2Cpp + IKCDOOFJDKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IKCDOOFJDKO* Clone()
		{
			return ((::IKCDOOFJDKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LEPHOHOKAOE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_LEPHOHOKAOE_OFFSET))(this);
		}

		::System::UInt32 PCMFGAPBPGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_PCMFGAPBPGK_OFFSET))(this);
		}

		::System::Void FDPMDCOAEIL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_FDPMDCOAEIL_OFFSET))(this, a1);
		}

		::System::UInt32 EDJMMIMJKEJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_EDJMMIMJKEJ_OFFSET))(this);
		}

		::System::Void NKOFMFBAJKO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_NKOFMFBAJKO_OFFSET))(this, a1);
		}

		::System::UInt32 ICCDNIGEONP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_ICCDNIGEONP_OFFSET))(this);
		}

		::System::Void JBOGGKIODGA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_JBOGGKIODGA_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::UInt32 KPPKJIINOIG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_KPPKJIINOIG_OFFSET))(this);
		}

		::System::Void KDMNLGDLHPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_KDMNLGDLHPP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IKCDOOFJDKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKCDOOFJDKO*))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IKCDOOFJDKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKCDOOFJDKO*))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IKCDOOFJDKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
