#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFJEOHMFDPG;
class HLNNEGIIMOH;
class NPOICBFPPHK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define NPOICBFPPHK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBA0A70)
#define NPOICBFPPHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA0F90)
#define NPOICBFPPHK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBA0500)
#define NPOICBFPPHK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBA03E0)
#define NPOICBFPPHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA0380)
#define NPOICBFPPHK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBA05E0)
#define NPOICBFPPHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBA05B0)
#define NPOICBFPPHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBA0750)
#define NPOICBFPPHK_GGJNLLGNHEE_OFFSET UNITYSDK_OFFSET(0x1EBA0590)
#define NPOICBFPPHK_IIBLHODINNH_OFFSET UNITYSDK_OFFSET(0x1EBA0580)
#define NPOICBFPPHK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBA0340)
#define NPOICBFPPHK_KDILIJCPJJA_OFFSET UNITYSDK_OFFSET(0x1EBA05A0)
#define NPOICBFPPHK_KECPAFCDFHJ_OFFSET UNITYSDK_OFFSET(0x1EBA0570)
#define NPOICBFPPHK_KFCBOCECMHN_OFFSET UNITYSDK_OFFSET(0x1EBA0560)
#define NPOICBFPPHK_LHNLKCPMAKJ_OFFSET UNITYSDK_OFFSET(0x1EBA0540)
#define NPOICBFPPHK_MDEGNHJEJBH_OFFSET UNITYSDK_OFFSET(0x1EBA0550)
#define NPOICBFPPHK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBA0E30)
#define NPOICBFPPHK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBA0CA0)
#define NPOICBFPPHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBA0370)
#define NPOICBFPPHK_PNDOLKGIOJG_OFFSET UNITYSDK_OFFSET(0x1EBA0530)
#define NPOICBFPPHK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBA0820)
#define NPOICBFPPHK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBA0880)

	class NPOICBFPPHK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::AFJEOHMFDPG*>* HBAEPLPKCEE; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* PCMEBEOHJCK; // 0x20
		::HLNNEGIIMOH* PAJKADFHLJI; // 0x28
		::System::UInt32 MOHLMHMAIDL; // 0x30
		::System::UInt32 OIDGMFMBHEJ; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NPOICBFPPHK")->GetStaticField(0xDD30);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JNCJNMBBPDC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NPOICBFPPHK")->GetStaticField(0xDD38);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FGJLNNADMLL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NPOICBFPPHK")->GetStaticField(0xDD40);
		}

		// static const ::System::Object CKEBDAILMIG; // 0x0
		// static const ::System::Object ILMEEJBABAG; // 0x0
		// static const ::System::Object CNOMKPCILGG; // 0x0
		// static const ::System::Object MIFPHBKHEBD; // 0x0
		// static const ::System::Object ONPFLOJLCEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOICBFPPHK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPOICBFPPHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPOICBFPPHK*))((::PBYTE)hIl2Cpp + NPOICBFPPHK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPOICBFPPHK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NPOICBFPPHK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOICBFPPHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPOICBFPPHK* Clone()
		{
			return ((::NPOICBFPPHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOICBFPPHK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AFJEOHMFDPG*>* PNDOLKGIOJG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AFJEOHMFDPG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOICBFPPHK_PNDOLKGIOJG_OFFSET))(this);
		}

		::HLNNEGIIMOH* LHNLKCPMAKJ()
		{
			return ((::HLNNEGIIMOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOICBFPPHK_LHNLKCPMAKJ_OFFSET))(this);
		}

		::System::Void MDEGNHJEJBH(::HLNNEGIIMOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLNNEGIIMOH*))((::PBYTE)hIl2Cpp + NPOICBFPPHK_MDEGNHJEJBH_OFFSET))(this, a1);
		}

		::System::UInt32 KFCBOCECMHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOICBFPPHK_KFCBOCECMHN_OFFSET))(this);
		}

		::System::Void KECPAFCDFHJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPOICBFPPHK_KECPAFCDFHJ_OFFSET))(this, a1);
		}

		::System::UInt32 IIBLHODINNH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOICBFPPHK_IIBLHODINNH_OFFSET))(this);
		}

		::System::Void GGJNLLGNHEE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPOICBFPPHK_GGJNLLGNHEE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* KDILIJCPJJA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOICBFPPHK_KDILIJCPJJA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPOICBFPPHK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPOICBFPPHK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPOICBFPPHK*))((::PBYTE)hIl2Cpp + NPOICBFPPHK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOICBFPPHK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOICBFPPHK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPOICBFPPHK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOICBFPPHK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPOICBFPPHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPOICBFPPHK*))((::PBYTE)hIl2Cpp + NPOICBFPPHK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPOICBFPPHK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
