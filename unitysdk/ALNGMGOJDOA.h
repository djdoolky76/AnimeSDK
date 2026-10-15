#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALNGMGOJDOA;
class HPIEHAMDJAP;
class MLHLIMIJHDD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALNGMGOJDOA_AHNBODLCGCA_OFFSET UNITYSDK_OFFSET(0x1E5138A0)
#define ALNGMGOJDOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E513CF0)
#define ALNGMGOJDOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E514120)
#define ALNGMGOJDOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E513850)
#define ALNGMGOJDOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E513700)
#define ALNGMGOJDOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E513670)
#define ALNGMGOJDOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5138F0)
#define ALNGMGOJDOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5138C0)
#define ALNGMGOJDOA_FGEGCGNCFMN_OFFSET UNITYSDK_OFFSET(0x1E5138B0)
#define ALNGMGOJDOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E513A90)
#define ALNGMGOJDOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E513630)
#define ALNGMGOJDOA_KJNAECOIBLO_OFFSET UNITYSDK_OFFSET(0x1E513880)
#define ALNGMGOJDOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E513F70)
#define ALNGMGOJDOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E513E30)
#define ALNGMGOJDOA_ODJMOKFKMIE_OFFSET UNITYSDK_OFFSET(0x1E513890)
#define ALNGMGOJDOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E513660)
#define ALNGMGOJDOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E513B50)
#define ALNGMGOJDOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E513BB0)

	class ALNGMGOJDOA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HPIEHAMDJAP*>* JFGMMFDNIFB; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* KLPMKLJEAKJ; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::MLHLIMIJHDD*>* MFKBNJMCODD; // 0x28
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* MGFJNHOFKOB; // 0x30
		static ::System::Object** StaticGet_LEMHKMKOEDO()
		{
			return (::System::Object**)UnitySDK::FromName("", "ALNGMGOJDOA")->GetStaticField(0x3A090);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_EGGIJBHFOAM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ALNGMGOJDOA")->GetStaticField(0x3A098);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_HFOMHPDGAIK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ALNGMGOJDOA")->GetStaticField(0x3A0A0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ALNGMGOJDOA")->GetStaticField(0x3A0A8);
		}

		static ::System::Object** StaticGet_KFLKJLFPMPP()
		{
			return (::System::Object**)UnitySDK::FromName("", "ALNGMGOJDOA")->GetStaticField(0x3A0B0);
		}

		// static const ::System::Object IFKKIIFLDLB; // 0x0
		// static const ::System::Object PECNAADIAFB; // 0x0
		// static const ::System::Object NNEJPDIMMON; // 0x0
		// static const ::System::Object NCOPBFNHNKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNGMGOJDOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALNGMGOJDOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALNGMGOJDOA*))((::PBYTE)hIl2Cpp + ALNGMGOJDOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALNGMGOJDOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ALNGMGOJDOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNGMGOJDOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALNGMGOJDOA* Clone()
		{
			return ((::ALNGMGOJDOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNGMGOJDOA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* KJNAECOIBLO()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNGMGOJDOA_KJNAECOIBLO_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* ODJMOKFKMIE()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNGMGOJDOA_ODJMOKFKMIE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HPIEHAMDJAP*>* AHNBODLCGCA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HPIEHAMDJAP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNGMGOJDOA_AHNBODLCGCA_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MLHLIMIJHDD*>* FGEGCGNCFMN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MLHLIMIJHDD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNGMGOJDOA_FGEGCGNCFMN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALNGMGOJDOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALNGMGOJDOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALNGMGOJDOA*))((::PBYTE)hIl2Cpp + ALNGMGOJDOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNGMGOJDOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNGMGOJDOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALNGMGOJDOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNGMGOJDOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALNGMGOJDOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALNGMGOJDOA*))((::PBYTE)hIl2Cpp + ALNGMGOJDOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALNGMGOJDOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
