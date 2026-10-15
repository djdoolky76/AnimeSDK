#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBLILHCLPPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBLILHCLPPL_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E132780)
#define DBLILHCLPPL_ALCFGIJOIGG_OFFSET UNITYSDK_OFFSET(0x1E132760)
#define DBLILHCLPPL_BMMFJCHEBEP_OFFSET UNITYSDK_OFFSET(0x1E132740)
#define DBLILHCLPPL_BNIGIFEHBAN_OFFSET UNITYSDK_OFFSET(0x1E132730)
#define DBLILHCLPPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E132D50)
#define DBLILHCLPPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E133190)
#define DBLILHCLPPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E132700)
#define DBLILHCLPPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1325F0)
#define DBLILHCLPPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E132560)
#define DBLILHCLPPL_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E132790)
#define DBLILHCLPPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E132800)
#define DBLILHCLPPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1327D0)
#define DBLILHCLPPL_GDPCGFIGILF_OFFSET UNITYSDK_OFFSET(0x1E132750)
#define DBLILHCLPPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1328B0)
#define DBLILHCLPPL_HBLCGJJFBIJ_OFFSET UNITYSDK_OFFSET(0x1E1327A0)
#define DBLILHCLPPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E132520)
#define DBLILHCLPPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E133000)
#define DBLILHCLPPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E132F80)
#define DBLILHCLPPL_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E1327C0)
#define DBLILHCLPPL_NIBPHGOOMEO_OFFSET UNITYSDK_OFFSET(0x1E132770)
#define DBLILHCLPPL_NNLOILOCMPE_OFFSET UNITYSDK_OFFSET(0x1E1327B0)
#define DBLILHCLPPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E132550)
#define DBLILHCLPPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E132A80)
#define DBLILHCLPPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E132AE0)

inline static constexpr unsigned int DBLILHCLPPL_TypeDefinitionIndex = 34232;

	class DBLILHCLPPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LGFEEJMBNFK; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DALKEINMPBH; // 0x20
		::System::UInt32 MOBKMIPGCKA; // 0x28
		::System::Boolean PKAGOOKBBFA; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 DGEBDPGMDGE; // 0x30
		::System::UInt32 NPFBAFODCBI; // 0x34
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LKCCLKNBIDG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DBLILHCLPPL")->GetStaticField(0x17130);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KHPCDHPFCHE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DBLILHCLPPL")->GetStaticField(0x17138);
		}

		static ::Google::Protobuf::MessageParser_1<::DBLILHCLPPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DBLILHCLPPL*>**)UnitySDK::FromName("", "DBLILHCLPPL")->GetStaticField(0x17140);
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

		static ::Google::Protobuf::MessageParser_1<::DBLILHCLPPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DBLILHCLPPL*>*(*)())((::PBYTE)hIl2Cpp + DBLILHCLPPL_JJGHOBBFNJD_OFFSET))();
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
