#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAFBNNALHDK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AAFBNNALHDK_ABKHHAMIPMB_OFFSET UNITYSDK_OFFSET(0x1DDB8ED0)
#define AAFBNNALHDK_ACHJFOAPLOH_OFFSET UNITYSDK_OFFSET(0x1DDB8F10)
#define AAFBNNALHDK_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DDB8EA0)
#define AAFBNNALHDK_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DDB8EB0)
#define AAFBNNALHDK_ALIDAFMCJGG_OFFSET UNITYSDK_OFFSET(0x1DDB8EF0)
#define AAFBNNALHDK_BGMFOMPLJPH_OFFSET UNITYSDK_OFFSET(0x1DDB8E90)
#define AAFBNNALHDK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDB93E0)
#define AAFBNNALHDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB9810)
#define AAFBNNALHDK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDB8E40)
#define AAFBNNALHDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDB8DB0)
#define AAFBNNALHDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB8D60)
#define AAFBNNALHDK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDB8FD0)
#define AAFBNNALHDK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDB8F20)
#define AAFBNNALHDK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDB9050)
#define AAFBNNALHDK_GGIPNHGMPCN_OFFSET UNITYSDK_OFFSET(0x1DDB8EE0)
#define AAFBNNALHDK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDB8CF0)
#define AAFBNNALHDK_LDAIAJMHEDB_OFFSET UNITYSDK_OFFSET(0x1DDB8EC0)
#define AAFBNNALHDK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDB96E0)
#define AAFBNNALHDK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDB9670)
#define AAFBNNALHDK_NMCKJLHKMOL_OFFSET UNITYSDK_OFFSET(0x1DDB8F00)
#define AAFBNNALHDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDB8D50)
#define AAFBNNALHDK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDB9160)
#define AAFBNNALHDK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDB91C0)

	class AAFBNNALHDK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FAIEBOPKJBF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MEDMPPNJOEP; // 0x20
		::System::UInt32 LJDBCGPFFDH; // 0x24
		::System::UInt32 MDHELICKNPE; // 0x28
		::System::UInt32 PMPDGKABMNP; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_FEGHGPFMAOE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "AAFBNNALHDK")->GetStaticField(0x322E0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AAFBNNALHDK")->GetStaticField(0x322E8);
		}

		// static const ::System::Object GMAJMEJMFBL; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object JJFBMJPBPFA; // 0x0
		// static const ::System::Object HLKDEGJOKIO; // 0x0
		// static const ::System::Object HEJKOLAAING; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFBNNALHDK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AAFBNNALHDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAFBNNALHDK*))((::PBYTE)hIl2Cpp + AAFBNNALHDK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAFBNNALHDK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AAFBNNALHDK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFBNNALHDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AAFBNNALHDK* Clone()
		{
			return ((::AAFBNNALHDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFBNNALHDK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BGMFOMPLJPH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFBNNALHDK_BGMFOMPLJPH_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFBNNALHDK_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAFBNNALHDK_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::UInt32 LDAIAJMHEDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFBNNALHDK_LDAIAJMHEDB_OFFSET))(this);
		}

		::System::Void ABKHHAMIPMB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAFBNNALHDK_ABKHHAMIPMB_OFFSET))(this, a1);
		}

		::System::UInt32 GGIPNHGMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFBNNALHDK_GGIPNHGMPCN_OFFSET))(this);
		}

		::System::Void ALIDAFMCJGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAFBNNALHDK_ALIDAFMCJGG_OFFSET))(this, a1);
		}

		::System::UInt32 NMCKJLHKMOL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFBNNALHDK_NMCKJLHKMOL_OFFSET))(this);
		}

		::System::Void ACHJFOAPLOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAFBNNALHDK_ACHJFOAPLOH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAFBNNALHDK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AAFBNNALHDK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AAFBNNALHDK*))((::PBYTE)hIl2Cpp + AAFBNNALHDK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFBNNALHDK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFBNNALHDK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AAFBNNALHDK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFBNNALHDK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AAFBNNALHDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAFBNNALHDK*))((::PBYTE)hIl2Cpp + AAFBNNALHDK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AAFBNNALHDK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
