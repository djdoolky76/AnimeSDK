#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBLILHCLPPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBLILHCLPPL_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E15FD00)
#define DBLILHCLPPL_ALCFGIJOIGG_OFFSET UNITYSDK_OFFSET(0x1E15FCE0)
#define DBLILHCLPPL_BMMFJCHEBEP_OFFSET UNITYSDK_OFFSET(0x1E15FCC0)
#define DBLILHCLPPL_BNIGIFEHBAN_OFFSET UNITYSDK_OFFSET(0x1E15FCB0)
#define DBLILHCLPPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1602D0)
#define DBLILHCLPPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E160710)
#define DBLILHCLPPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E15FC80)
#define DBLILHCLPPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E15FB70)
#define DBLILHCLPPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15FAE0)
#define DBLILHCLPPL_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E15FD10)
#define DBLILHCLPPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E15FD80)
#define DBLILHCLPPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E15FD50)
#define DBLILHCLPPL_GDPCGFIGILF_OFFSET UNITYSDK_OFFSET(0x1E15FCD0)
#define DBLILHCLPPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E15FE30)
#define DBLILHCLPPL_HBLCGJJFBIJ_OFFSET UNITYSDK_OFFSET(0x1E15FD20)
#define DBLILHCLPPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E15FAA0)
#define DBLILHCLPPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E160580)
#define DBLILHCLPPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E160500)
#define DBLILHCLPPL_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E15FD40)
#define DBLILHCLPPL_NIBPHGOOMEO_OFFSET UNITYSDK_OFFSET(0x1E15FCF0)
#define DBLILHCLPPL_NNLOILOCMPE_OFFSET UNITYSDK_OFFSET(0x1E15FD30)
#define DBLILHCLPPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E15FAD0)
#define DBLILHCLPPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E160000)
#define DBLILHCLPPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E160060)

	class DBLILHCLPPL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DALKEINMPBH; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LGFEEJMBNFK; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::Boolean PKAGOOKBBFA; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 NPFBAFODCBI; // 0x2C
		::System::UInt32 DGEBDPGMDGE; // 0x30
		::System::UInt32 MOBKMIPGCKA; // 0x34
		static ::Google::Protobuf::FieldCodec** StaticGet_KHPCDHPFCHE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DBLILHCLPPL")->GetStaticField(0x18070);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DBLILHCLPPL")->GetStaticField(0x18078);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_LKCCLKNBIDG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DBLILHCLPPL")->GetStaticField(0x18080);
		}

		// static const ::System::Object AMKANJMGAED; // 0x0
		// static const ::System::Object PGJPIGLOHIC; // 0x0
		// static const ::System::Object NIHKKKBLKNO; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object APNPNAEJMOG; // 0x0
		// static const ::System::Object DPPAFBAHEFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLILHCLPPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBLILHCLPPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBLILHCLPPL*))((::PBYTE)hIl2Cpp + DBLILHCLPPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBLILHCLPPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DBLILHCLPPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLILHCLPPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBLILHCLPPL* Clone()
		{
			return ((::DBLILHCLPPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLILHCLPPL_CLONE_OFFSET))(this);
		}

		::System::UInt32 BNIGIFEHBAN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLILHCLPPL_BNIGIFEHBAN_OFFSET))(this);
		}

		::System::Void BMMFJCHEBEP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBLILHCLPPL_BMMFJCHEBEP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GDPCGFIGILF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLILHCLPPL_GDPCGFIGILF_OFFSET))(this);
		}

		::System::Boolean ALCFGIJOIGG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLILHCLPPL_ALCFGIJOIGG_OFFSET))(this);
		}

		::System::Void NIBPHGOOMEO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBLILHCLPPL_NIBPHGOOMEO_OFFSET))(this, a1);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLILHCLPPL_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBLILHCLPPL_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 HBLCGJJFBIJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLILHCLPPL_HBLCGJJFBIJ_OFFSET))(this);
		}

		::System::Void NNLOILOCMPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBLILHCLPPL_NNLOILOCMPE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MKMAMKNLJGM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLILHCLPPL_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBLILHCLPPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBLILHCLPPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBLILHCLPPL*))((::PBYTE)hIl2Cpp + DBLILHCLPPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLILHCLPPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLILHCLPPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBLILHCLPPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLILHCLPPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBLILHCLPPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBLILHCLPPL*))((::PBYTE)hIl2Cpp + DBLILHCLPPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBLILHCLPPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
