#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHCDMMNHNHO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHCDMMNHNHO_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E484900)
#define GHCDMMNHNHO_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E484910)
#define GHCDMMNHNHO_BJPIMFNJHAG_OFFSET UNITYSDK_OFFSET(0x1E484940)
#define GHCDMMNHNHO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E484CF0)
#define GHCDMMNHNHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E485090)
#define GHCDMMNHNHO_CLKJAIBJGPE_OFFSET UNITYSDK_OFFSET(0x1E484930)
#define GHCDMMNHNHO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4848B0)
#define GHCDMMNHNHO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E484870)
#define GHCDMMNHNHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E484860)
#define GHCDMMNHNHO_DNNKNKPGCPB_OFFSET UNITYSDK_OFFSET(0x1E484950)
#define GHCDMMNHNHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E484A40)
#define GHCDMMNHNHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E484960)
#define GHCDMMNHNHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E484B10)
#define GHCDMMNHNHO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E484820)
#define GHCDMMNHNHO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E484EE0)
#define GHCDMMNHNHO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E484E90)
#define GHCDMMNHNHO_NKEHHEMHAPF_OFFSET UNITYSDK_OFFSET(0x1E484920)
#define GHCDMMNHNHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E484850)
#define GHCDMMNHNHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E484B40)
#define GHCDMMNHNHO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E484BA0)

inline static constexpr unsigned int GHCDMMNHNHO_TypeDefinitionIndex = 25475;

	class GHCDMMNHNHO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OGPNLMIIJCO; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		::System::Int32 CMLCABMLFGG; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GHCDMMNHNHO")->GetStaticField(0x16A30);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object KKGDOCECGMH; // 0x0
		// static const ::System::Object HCCMOEAHHJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHCDMMNHNHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHCDMMNHNHO*))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHCDMMNHNHO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GHCDMMNHNHO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHCDMMNHNHO* Clone()
		{
			return ((::GHCDMMNHNHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Int32 NKEHHEMHAPF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_NKEHHEMHAPF_OFFSET))(this);
		}

		::System::Void CLKJAIBJGPE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_CLKJAIBJGPE_OFFSET))(this, a1);
		}

		::System::UInt32 BJPIMFNJHAG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_BJPIMFNJHAG_OFFSET))(this);
		}

		::System::Void DNNKNKPGCPB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_DNNKNKPGCPB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHCDMMNHNHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHCDMMNHNHO*))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHCDMMNHNHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHCDMMNHNHO*))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHCDMMNHNHO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
