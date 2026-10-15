#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIDFCGLODFB;
class ILMFJKCGBCK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILMFJKCGBCK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6B1D10)
#define ILMFJKCGBCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B2210)
#define ILMFJKCGBCK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6B1720)
#define ILMFJKCGBCK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6B15A0)
#define ILMFJKCGBCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B1530)
#define ILMFJKCGBCK_DFBHIIJMHHH_OFFSET UNITYSDK_OFFSET(0x1E6B17D0)
#define ILMFJKCGBCK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6B1850)
#define ILMFJKCGBCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6B17F0)
#define ILMFJKCGBCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6B19C0)
#define ILMFJKCGBCK_IJAOHIKLLIE_OFFSET UNITYSDK_OFFSET(0x1E6B17E0)
#define ILMFJKCGBCK_JFILFMMMFBB_OFFSET UNITYSDK_OFFSET(0x1E6B17C0)
#define ILMFJKCGBCK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6B14C0)
#define ILMFJKCGBCK_JPFMMCENEMG_OFFSET UNITYSDK_OFFSET(0x1E6B17A0)
#define ILMFJKCGBCK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6B20A0)
#define ILMFJKCGBCK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6B1F10)
#define ILMFJKCGBCK_MLBPDLMPMEB_OFFSET UNITYSDK_OFFSET(0x1E6B1790)
#define ILMFJKCGBCK_NGDIDMCFAHN_OFFSET UNITYSDK_OFFSET(0x1E6B17B0)
#define ILMFJKCGBCK_PAJFAANOKNF_OFFSET UNITYSDK_OFFSET(0x1E6B1770)
#define ILMFJKCGBCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6B1520)
#define ILMFJKCGBCK_PIPLJLGAGEI_OFFSET UNITYSDK_OFFSET(0x1E6B1780)
#define ILMFJKCGBCK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6B1A90)
#define ILMFJKCGBCK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6B1AF0)

	class ILMFJKCGBCK : public ::System::Object
	{
	public:
		::EIDFCGLODFB* IMIDIAOHJLP; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EIDFCGLODFB*>* MNGCHFFDKMJ; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::EIDFCGLODFB*>* CHHJEOACGKJ; // 0x28
		::System::UInt32 HLCFBKJJDLB; // 0x30
		::System::UInt32 NMFGJGCNBKI; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ILMFJKCGBCK")->GetStaticField(0x567B0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DFMHGFKKIDC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ILMFJKCGBCK")->GetStaticField(0x567B8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NCDKEKEGKPJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ILMFJKCGBCK")->GetStaticField(0x567C0);
		}

		// static const ::System::Object FOIBKINLOLG; // 0x0
		// static const ::System::Object IJLFJGEHMMN; // 0x0
		// static const ::System::Object AMIKJNCAMPH; // 0x0
		// static const ::System::Object FDNAEKMGNNF; // 0x0
		// static const ::System::Object MIGJFDELDPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILMFJKCGBCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILMFJKCGBCK*))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILMFJKCGBCK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ILMFJKCGBCK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILMFJKCGBCK* Clone()
		{
			return ((::ILMFJKCGBCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EIDFCGLODFB*>* PAJFAANOKNF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EIDFCGLODFB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_PAJFAANOKNF_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EIDFCGLODFB*>* PIPLJLGAGEI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EIDFCGLODFB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_PIPLJLGAGEI_OFFSET))(this);
		}

		::EIDFCGLODFB* MLBPDLMPMEB()
		{
			return ((::EIDFCGLODFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_MLBPDLMPMEB_OFFSET))(this);
		}

		::System::Void JPFMMCENEMG(::EIDFCGLODFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIDFCGLODFB*))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_JPFMMCENEMG_OFFSET))(this, a1);
		}

		::System::UInt32 NGDIDMCFAHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_NGDIDMCFAHN_OFFSET))(this);
		}

		::System::Void JFILFMMMFBB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_JFILFMMMFBB_OFFSET))(this, a1);
		}

		::System::UInt32 DFBHIIJMHHH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_DFBHIIJMHHH_OFFSET))(this);
		}

		::System::Void IJAOHIKLLIE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_IJAOHIKLLIE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILMFJKCGBCK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILMFJKCGBCK*))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILMFJKCGBCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILMFJKCGBCK*))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILMFJKCGBCK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
