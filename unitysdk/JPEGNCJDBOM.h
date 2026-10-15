#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPEGNCJDBOM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPEGNCJDBOM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7D20D0)
#define JPEGNCJDBOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D2460)
#define JPEGNCJDBOM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7D1CE0)
#define JPEGNCJDBOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7D1CA0)
#define JPEGNCJDBOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D1C90)
#define JPEGNCJDBOM_EJLLIMLKIDF_OFFSET UNITYSDK_OFFSET(0x1E7D1DA0)
#define JPEGNCJDBOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7D1E40)
#define JPEGNCJDBOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7D1DC0)
#define JPEGNCJDBOM_FJMACMKBNOL_OFFSET UNITYSDK_OFFSET(0x1E7D1DB0)
#define JPEGNCJDBOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7D1F10)
#define JPEGNCJDBOM_JFBPMDMAFBH_OFFSET UNITYSDK_OFFSET(0x1E7D1D60)
#define JPEGNCJDBOM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7D1C20)
#define JPEGNCJDBOM_LMOENEMGBOC_OFFSET UNITYSDK_OFFSET(0x1E7D1D90)
#define JPEGNCJDBOM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7D22B0)
#define JPEGNCJDBOM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7D2260)
#define JPEGNCJDBOM_MPIJOCEJICJ_OFFSET UNITYSDK_OFFSET(0x1E7D1D70)
#define JPEGNCJDBOM_NLPOCKDPPLE_OFFSET UNITYSDK_OFFSET(0x1E7D1D80)
#define JPEGNCJDBOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7D1C80)
#define JPEGNCJDBOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7D1F40)
#define JPEGNCJDBOM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7D1FA0)

	class JPEGNCJDBOM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MHGCFMJBAGK; // 0x18
		::System::UInt32 DDJMNFDCGBE; // 0x1C
		::System::UInt32 CMDNKNEDPLO; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JPEGNCJDBOM")->GetStaticField(0xAC60);
		}

		// static const ::System::Object EFOJNPCIDHM; // 0x0
		// static const ::System::Object MBFNJHBFNLH; // 0x0
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JPEGNCJDBOM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JPEGNCJDBOM* Clone()
		{
			return ((::JPEGNCJDBOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_CLONE_OFFSET))(this);
		}

		::System::UInt32 JFBPMDMAFBH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_JFBPMDMAFBH_OFFSET))(this);
		}

		::System::Void MPIJOCEJICJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_MPIJOCEJICJ_OFFSET))(this, a1);
		}

		::System::UInt32 NLPOCKDPPLE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_NLPOCKDPPLE_OFFSET))(this);
		}

		::System::Void LMOENEMGBOC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPEGNCJDBOM_LMOENEMGBOC_OFFSET))(this, a1);
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
