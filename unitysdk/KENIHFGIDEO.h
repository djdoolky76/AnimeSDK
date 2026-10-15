#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KENIHFGIDEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KENIHFGIDEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8117D0)
#define KENIHFGIDEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E811C90)
#define KENIHFGIDEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E811280)
#define KENIHFGIDEO_CPBGGJBFIGL_OFFSET UNITYSDK_OFFSET(0x1E811350)
#define KENIHFGIDEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8111C0)
#define KENIHFGIDEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E811170)
#define KENIHFGIDEO_DMLKBCMLEEP_OFFSET UNITYSDK_OFFSET(0x1E811300)
#define KENIHFGIDEO_EOIMIIKIIEC_OFFSET UNITYSDK_OFFSET(0x1E8112D0)
#define KENIHFGIDEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8113A0)
#define KENIHFGIDEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E811370)
#define KENIHFGIDEO_FNPEEEMJOLE_OFFSET UNITYSDK_OFFSET(0x1E811360)
#define KENIHFGIDEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E811460)
#define KENIHFGIDEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E811130)
#define KENIHFGIDEO_KNKJEACMEJL_OFFSET UNITYSDK_OFFSET(0x1E8112E0)
#define KENIHFGIDEO_LHOPHLMOHMJ_OFFSET UNITYSDK_OFFSET(0x1E811340)
#define KENIHFGIDEO_MBDMNCDJPDB_OFFSET UNITYSDK_OFFSET(0x1E8112B0)
#define KENIHFGIDEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E811B20)
#define KENIHFGIDEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E811A90)
#define KENIHFGIDEO_NCNJNDEGCJL_OFFSET UNITYSDK_OFFSET(0x1E8112F0)
#define KENIHFGIDEO_NGAKDGHDPAP_OFFSET UNITYSDK_OFFSET(0x1E811310)
#define KENIHFGIDEO_NOPHMGFAPKJ_OFFSET UNITYSDK_OFFSET(0x1E811320)
#define KENIHFGIDEO_OGGIEJLNGHO_OFFSET UNITYSDK_OFFSET(0x1E811330)
#define KENIHFGIDEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E811160)
#define KENIHFGIDEO_PCJOGIAJHMF_OFFSET UNITYSDK_OFFSET(0x1E8112C0)
#define KENIHFGIDEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8114D0)
#define KENIHFGIDEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E811530)

	class KENIHFGIDEO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* MCANBMLEHCK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* OPABDFGDFJJ; // 0x20
		::System::Boolean BBJIDLMAPDF; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 KGEIPBPJADI; // 0x2C
		::System::UInt32 HBNGCLNOHDH; // 0x30
		::System::UInt32 MPFELJLKAFH; // 0x34
		::System::UInt32 JCADDMLLOAH; // 0x38
		static ::System::Object** StaticGet_LLFJEHCJJEK()
		{
			return (::System::Object**)UnitySDK::FromName("", "KENIHFGIDEO")->GetStaticField(0x12DF0);
		}

		static ::System::Object** StaticGet_DJNPGLNGNDK()
		{
			return (::System::Object**)UnitySDK::FromName("", "KENIHFGIDEO")->GetStaticField(0x12DF8);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KENIHFGIDEO")->GetStaticField(0x12E00);
		}

		// static const ::System::Object CODFBJPPBGL; // 0x0
		// static const ::System::Object FCDKAPLIJLB; // 0x0
		// static const ::System::Object HJIBNNNECDK; // 0x0
		// static const ::System::Object DOHOJDEMEEN; // 0x0
		// static const ::System::Object IJCPBJFHAND; // 0x0
		// static const ::System::Object EKJIPCEFPOG; // 0x0
		// static const ::System::Object DGAMCDEAFJA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIHFGIDEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KENIHFGIDEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KENIHFGIDEO*))((::PBYTE)hIl2Cpp + KENIHFGIDEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KENIHFGIDEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KENIHFGIDEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIHFGIDEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KENIHFGIDEO* Clone()
		{
			return ((::KENIHFGIDEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIHFGIDEO_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBDMNCDJPDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIHFGIDEO_MBDMNCDJPDB_OFFSET))(this);
		}

		::System::Void PCJOGIAJHMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KENIHFGIDEO_PCJOGIAJHMF_OFFSET))(this, a1);
		}

		::System::UInt32 EOIMIIKIIEC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIHFGIDEO_EOIMIIKIIEC_OFFSET))(this);
		}

		::System::Void KNKJEACMEJL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KENIHFGIDEO_KNKJEACMEJL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* NCNJNDEGCJL()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIHFGIDEO_NCNJNDEGCJL_OFFSET))(this);
		}

		::System::UInt32 DMLKBCMLEEP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIHFGIDEO_DMLKBCMLEEP_OFFSET))(this);
		}

		::System::Void NGAKDGHDPAP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KENIHFGIDEO_NGAKDGHDPAP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* NOPHMGFAPKJ()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIHFGIDEO_NOPHMGFAPKJ_OFFSET))(this);
		}

		::System::Boolean OGGIEJLNGHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIHFGIDEO_OGGIEJLNGHO_OFFSET))(this);
		}

		::System::Void LHOPHLMOHMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KENIHFGIDEO_LHOPHLMOHMJ_OFFSET))(this, a1);
		}

		::System::UInt32 CPBGGJBFIGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIHFGIDEO_CPBGGJBFIGL_OFFSET))(this);
		}

		::System::Void FNPEEEMJOLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KENIHFGIDEO_FNPEEEMJOLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KENIHFGIDEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KENIHFGIDEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KENIHFGIDEO*))((::PBYTE)hIl2Cpp + KENIHFGIDEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIHFGIDEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIHFGIDEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KENIHFGIDEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIHFGIDEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KENIHFGIDEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KENIHFGIDEO*))((::PBYTE)hIl2Cpp + KENIHFGIDEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KENIHFGIDEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
