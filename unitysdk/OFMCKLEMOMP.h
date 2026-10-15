#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class OFMCKLEMOMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFMCKLEMOMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE4A4F0)
#define OFMCKLEMOMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE4A950)
#define OFMCKLEMOMP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE49E60)
#define OFMCKLEMOMP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE49D80)
#define OFMCKLEMOMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE49D30)
#define OFMCKLEMOMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE49F70)
#define OFMCKLEMOMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE49F40)
#define OFMCKLEMOMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE4A0B0)
#define OFMCKLEMOMP_GOLPFFCDICE_OFFSET UNITYSDK_OFFSET(0x1DE49F30)
#define OFMCKLEMOMP_HFLFIILLFEE_OFFSET UNITYSDK_OFFSET(0x1DE49EE0)
#define OFMCKLEMOMP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE49CF0)
#define OFMCKLEMOMP_KPMIFFKDIGF_OFFSET UNITYSDK_OFFSET(0x1DE49E90)
#define OFMCKLEMOMP_LLCNNPGBMAJ_OFFSET UNITYSDK_OFFSET(0x1DE49EC0)
#define OFMCKLEMOMP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE4A7E0)
#define OFMCKLEMOMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE4A710)
#define OFMCKLEMOMP_OCEJJCJNANN_OFFSET UNITYSDK_OFFSET(0x1DE49EB0)
#define OFMCKLEMOMP_OGMHHLBHKOF_OFFSET UNITYSDK_OFFSET(0x1DE49F20)
#define OFMCKLEMOMP_OOEAFGFLGGL_OFFSET UNITYSDK_OFFSET(0x1DE49F10)
#define OFMCKLEMOMP_OPHPJAJBLFF_OFFSET UNITYSDK_OFFSET(0x1DE49F00)
#define OFMCKLEMOMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE49D20)
#define OFMCKLEMOMP_PDHEDMJOEJC_OFFSET UNITYSDK_OFFSET(0x1DE49EA0)
#define OFMCKLEMOMP_PHEFDAEMAPB_OFFSET UNITYSDK_OFFSET(0x1DE49ED0)
#define OFMCKLEMOMP_PLAHKDIIJDG_OFFSET UNITYSDK_OFFSET(0x1DE49EF0)
#define OFMCKLEMOMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE4A220)
#define OFMCKLEMOMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE4A280)

	class OFMCKLEMOMP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GCOBPEGLGMN; // 0x18
		::CAGKEDMHEOI* JMOAMAOJOKJ; // 0x20
		::System::UInt32 JCGMPJONLCA; // 0x28
		::System::UInt32 FIHHMEDCFIN; // 0x2C
		::System::Boolean GJFIBDAHMNH; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 NJPDGMIEFOF; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OFMCKLEMOMP")->GetStaticField(0x179A0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_ENDBOCLHECL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OFMCKLEMOMP")->GetStaticField(0x179A8);
		}

		// static const ::System::Object JBLMLNJEBLD; // 0x0
		// static const ::System::Object HKIHIFGGNAD; // 0x0
		// static const ::System::Object MIPNMJFDFCA; // 0x0
		// static const ::System::Object ONCPCCHIOCD; // 0x0
		// static const ::System::Object FOJGGKOOPDA; // 0x0
		// static const ::System::Object GAHLJEECCFB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFMCKLEMOMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFMCKLEMOMP*))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFMCKLEMOMP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OFMCKLEMOMP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFMCKLEMOMP* Clone()
		{
			return ((::OFMCKLEMOMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KPMIFFKDIGF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_KPMIFFKDIGF_OFFSET))(this);
		}

		::System::UInt32 PDHEDMJOEJC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_PDHEDMJOEJC_OFFSET))(this);
		}

		::System::Void OCEJJCJNANN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_OCEJJCJNANN_OFFSET))(this, a1);
		}

		::System::UInt32 LLCNNPGBMAJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_LLCNNPGBMAJ_OFFSET))(this);
		}

		::System::Void PHEFDAEMAPB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_PHEFDAEMAPB_OFFSET))(this, a1);
		}

		::System::Boolean HFLFIILLFEE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_HFLFIILLFEE_OFFSET))(this);
		}

		::System::Void PLAHKDIIJDG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_PLAHKDIIJDG_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* OPHPJAJBLFF()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_OPHPJAJBLFF_OFFSET))(this);
		}

		::System::Void OOEAFGFLGGL(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_OOEAFGFLGGL_OFFSET))(this, a1);
		}

		::System::UInt32 OGMHHLBHKOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_OGMHHLBHKOF_OFFSET))(this);
		}

		::System::Void GOLPFFCDICE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_GOLPFFCDICE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFMCKLEMOMP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFMCKLEMOMP*))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFMCKLEMOMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFMCKLEMOMP*))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFMCKLEMOMP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
