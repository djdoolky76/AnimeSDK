#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPEGNCJDBOM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPEGNCJDBOM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FAE6410)
#define JPEGNCJDBOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAE6790)
#define JPEGNCJDBOM_CLONE_OFFSET UNITYSDK_OFFSET(0x1FAE6020)
#define JPEGNCJDBOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAE5FE0)
#define JPEGNCJDBOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAE5FD0)
#define JPEGNCJDBOM_EJLLIMLKIDF_OFFSET UNITYSDK_OFFSET(0x1FAE60E0)
#define JPEGNCJDBOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FAE6180)
#define JPEGNCJDBOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FAE6100)
#define JPEGNCJDBOM_FJMACMKBNOL_OFFSET UNITYSDK_OFFSET(0x1FAE60F0)
#define JPEGNCJDBOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FAE6250)
#define JPEGNCJDBOM_JFBPMDMAFBH_OFFSET UNITYSDK_OFFSET(0x1FAE60C0)
#define JPEGNCJDBOM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FAE5F60)
#define JPEGNCJDBOM_LMOENEMGBOC_OFFSET UNITYSDK_OFFSET(0x1FAE60B0)
#define JPEGNCJDBOM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FAE65F0)
#define JPEGNCJDBOM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FAE65A0)
#define JPEGNCJDBOM_MPIJOCEJICJ_OFFSET UNITYSDK_OFFSET(0x1FAE60D0)
#define JPEGNCJDBOM_NLPOCKDPPLE_OFFSET UNITYSDK_OFFSET(0x1FAE60A0)
#define JPEGNCJDBOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FAE5FC0)
#define JPEGNCJDBOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAE6280)
#define JPEGNCJDBOM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FAE62E0)

inline static constexpr unsigned int JPEGNCJDBOM_TypeDefinitionIndex = 32062;

	class JPEGNCJDBOM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CMDNKNEDPLO; // 0x18
		::System::UInt32 MHGCFMJBAGK; // 0x1C
		::System::UInt32 DDJMNFDCGBE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JPEGNCJDBOM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JPEGNCJDBOM*>**)UnitySDK::FromName("", "JPEGNCJDBOM")->GetStaticField(0x2E730);
		}

		// static const ::System::Object MBFNJHBFNLH; // 0x0
		// static const ::System::Object EFOJNPCIDHM; // 0x0
		// static const ::System::Object NAJBAEIPNBJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JPEGNCJDBOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPEGNCJDBOM*))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPEGNCJDBOM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JPEGNCJDBOM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JPEGNCJDBOM*>*(*)())((::PBYTE)hIl2Cpp + JPEGNCJDBOM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JPEGNCJDBOM* Clone()
		{
			return ((::JPEGNCJDBOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_CLONE_OFFSET))(this);
		}

		::System::UInt32 NLPOCKDPPLE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_NLPOCKDPPLE_OFFSET))(this);
		}

		::System::Void LMOENEMGBOC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_LMOENEMGBOC_OFFSET))(this, a1);
		}

		::System::UInt32 JFBPMDMAFBH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_JFBPMDMAFBH_OFFSET))(this);
		}

		::System::Void MPIJOCEJICJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_MPIJOCEJICJ_OFFSET))(this, a1);
		}

		::System::UInt32 EJLLIMLKIDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_EJLLIMLKIDF_OFFSET))(this);
		}

		::System::Void FJMACMKBNOL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_FJMACMKBNOL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JPEGNCJDBOM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPEGNCJDBOM*))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JPEGNCJDBOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPEGNCJDBOM*))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
