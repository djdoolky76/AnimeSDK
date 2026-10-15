#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNJAIHINJIK;
class GEFEDOAOKNO;
class HINIJKGDDBI;
class PJOHABIOPPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BNJAIHINJIK_BIPGHNLHNGB_OFFSET UNITYSDK_OFFSET(0x1E034800)
#define BNJAIHINJIK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E034F40)
#define BNJAIHINJIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E035630)
#define BNJAIHINJIK_CHBLCLPBCJJ_OFFSET UNITYSDK_OFFSET(0x1E034760)
#define BNJAIHINJIK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E034700)
#define BNJAIHINJIK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0345B0)
#define BNJAIHINJIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0345A0)
#define BNJAIHINJIK_DCBILPCPMND_OFFSET UNITYSDK_OFFSET(0x1E034750)
#define BNJAIHINJIK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E034870)
#define BNJAIHINJIK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E034810)
#define BNJAIHINJIK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E034AC0)
#define BNJAIHINJIK_GNFHIFNEDGO_OFFSET UNITYSDK_OFFSET(0x1E0347B0)
#define BNJAIHINJIK_IEKBEAAMFLH_OFFSET UNITYSDK_OFFSET(0x1E034790)
#define BNJAIHINJIK_IKNMBEOINOL_OFFSET UNITYSDK_OFFSET(0x1E0347D0)
#define BNJAIHINJIK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E034530)
#define BNJAIHINJIK_KJGICHMIHEH_OFFSET UNITYSDK_OFFSET(0x1E0347A0)
#define BNJAIHINJIK_KPMJEDFLFPH_OFFSET UNITYSDK_OFFSET(0x1E0347C0)
#define BNJAIHINJIK_MCJPIPLJPDL_OFFSET UNITYSDK_OFFSET(0x1E0347E0)
#define BNJAIHINJIK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0353D0)
#define BNJAIHINJIK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E035170)
#define BNJAIHINJIK_MLCIHCHNCAN_OFFSET UNITYSDK_OFFSET(0x1E034780)
#define BNJAIHINJIK_NHHKMMHGJKB_OFFSET UNITYSDK_OFFSET(0x1E0347F0)
#define BNJAIHINJIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E034590)
#define BNJAIHINJIK_PFMDBMIBAGE_OFFSET UNITYSDK_OFFSET(0x1E034770)
#define BNJAIHINJIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E034C90)
#define BNJAIHINJIK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E034CF0)

	class BNJAIHINJIK : public ::System::Object
	{
	public:
		::HINIJKGDDBI* KMIMLLLDKAC; // 0x10
		::GEFEDOAOKNO* ILNOBKGOEBE; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::PJOHABIOPPI* INBMIDGHPAD; // 0x28
		::System::UInt32 FOKBKIIEGLA; // 0x30
		::System::UInt32 KLLBKAHOPDI; // 0x34
		::System::UInt32 JHJNBOHPJND; // 0x38
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BNJAIHINJIK")->GetStaticField(0x527F0);
		}

		// static const ::System::Object LECNGHHAEFF; // 0x0
		// static const ::System::Object MGCFOIACPBO; // 0x0
		// static const ::System::Object BGGMJPLGMMK; // 0x0
		// static const ::System::Object ACPCDGACICN; // 0x0
		// static const ::System::Object IKJKKBHGEMP; // 0x0
		// static const ::System::Object IMNOLKKDBNP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJAIHINJIK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BNJAIHINJIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNJAIHINJIK*))((::PBYTE)hIl2Cpp + BNJAIHINJIK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNJAIHINJIK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BNJAIHINJIK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJAIHINJIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BNJAIHINJIK* Clone()
		{
			return ((::BNJAIHINJIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJAIHINJIK_CLONE_OFFSET))(this);
		}

		::PJOHABIOPPI* DCBILPCPMND()
		{
			return ((::PJOHABIOPPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJAIHINJIK_DCBILPCPMND_OFFSET))(this);
		}

		::System::Void CHBLCLPBCJJ(::PJOHABIOPPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJOHABIOPPI*))((::PBYTE)hIl2Cpp + BNJAIHINJIK_CHBLCLPBCJJ_OFFSET))(this, a1);
		}

		::System::UInt32 PFMDBMIBAGE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJAIHINJIK_PFMDBMIBAGE_OFFSET))(this);
		}

		::System::Void MLCIHCHNCAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNJAIHINJIK_MLCIHCHNCAN_OFFSET))(this, a1);
		}

		::GEFEDOAOKNO* IEKBEAAMFLH()
		{
			return ((::GEFEDOAOKNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJAIHINJIK_IEKBEAAMFLH_OFFSET))(this);
		}

		::System::Void KJGICHMIHEH(::GEFEDOAOKNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEFEDOAOKNO*))((::PBYTE)hIl2Cpp + BNJAIHINJIK_KJGICHMIHEH_OFFSET))(this, a1);
		}

		::HINIJKGDDBI* GNFHIFNEDGO()
		{
			return ((::HINIJKGDDBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJAIHINJIK_GNFHIFNEDGO_OFFSET))(this);
		}

		::System::Void KPMJEDFLFPH(::HINIJKGDDBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HINIJKGDDBI*))((::PBYTE)hIl2Cpp + BNJAIHINJIK_KPMJEDFLFPH_OFFSET))(this, a1);
		}

		::System::UInt32 IKNMBEOINOL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJAIHINJIK_IKNMBEOINOL_OFFSET))(this);
		}

		::System::Void MCJPIPLJPDL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNJAIHINJIK_MCJPIPLJPDL_OFFSET))(this, a1);
		}

		::System::UInt32 NHHKMMHGJKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJAIHINJIK_NHHKMMHGJKB_OFFSET))(this);
		}

		::System::Void BIPGHNLHNGB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNJAIHINJIK_BIPGHNLHNGB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNJAIHINJIK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BNJAIHINJIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BNJAIHINJIK*))((::PBYTE)hIl2Cpp + BNJAIHINJIK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJAIHINJIK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJAIHINJIK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BNJAIHINJIK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJAIHINJIK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BNJAIHINJIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNJAIHINJIK*))((::PBYTE)hIl2Cpp + BNJAIHINJIK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BNJAIHINJIK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
