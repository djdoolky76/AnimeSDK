#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLJIILDNDPL.h"
#include "unitysdk/System/Object.h"
class FAIHLAKPABN;
class NABNCJEJGLG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NABNCJEJGLG_BNAKJCEGDFL_OFFSET UNITYSDK_OFFSET(0x1EABD510)
#define NABNCJEJGLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EABDA10)
#define NABNCJEJGLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EABDE70)
#define NABNCJEJGLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EABD4A0)
#define NABNCJEJGLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EABD3E0)
#define NABNCJEJGLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EABD390)
#define NABNCJEJGLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EABD680)
#define NABNCJEJGLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EABD520)
#define NABNCJEJGLG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EABD500)
#define NABNCJEJGLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EABD7B0)
#define NABNCJEJGLG_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1EABD4E0)
#define NABNCJEJGLG_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1EABD4D0)
#define NABNCJEJGLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EABD350)
#define NABNCJEJGLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EABDC80)
#define NABNCJEJGLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EABDBD0)
#define NABNCJEJGLG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EABD4F0)
#define NABNCJEJGLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EABD380)
#define NABNCJEJGLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EABD820)
#define NABNCJEJGLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EABD880)

	class NABNCJEJGLG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FAIHLAKPABN*>* NDEEIPNCINM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::MLJIILDNDPL GMPNCOBOFDM; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NABNCJEJGLG")->GetStaticField(0x5BF50);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_IONPMGIIDOE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NABNCJEJGLG")->GetStaticField(0x5BF58);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OHIAHIBONCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNCJEJGLG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NABNCJEJGLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NABNCJEJGLG*))((::PBYTE)hIl2Cpp + NABNCJEJGLG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NABNCJEJGLG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NABNCJEJGLG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNCJEJGLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NABNCJEJGLG* Clone()
		{
			return ((::NABNCJEJGLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNCJEJGLG_CLONE_OFFSET))(this);
		}

		::MLJIILDNDPL JBIOGKPHKKC()
		{
			return ((::MLJIILDNDPL(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNCJEJGLG_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::MLJIILDNDPL a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLJIILDNDPL))((::PBYTE)hIl2Cpp + NABNCJEJGLG_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNCJEJGLG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NABNCJEJGLG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FAIHLAKPABN*>* BNAKJCEGDFL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FAIHLAKPABN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNCJEJGLG_BNAKJCEGDFL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NABNCJEJGLG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NABNCJEJGLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NABNCJEJGLG*))((::PBYTE)hIl2Cpp + NABNCJEJGLG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNCJEJGLG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNCJEJGLG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NABNCJEJGLG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNCJEJGLG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NABNCJEJGLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NABNCJEJGLG*))((::PBYTE)hIl2Cpp + NABNCJEJGLG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NABNCJEJGLG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
