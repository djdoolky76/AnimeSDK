#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMKMEFMOJGJ;
class GNMCIEPEBPK;
class NCFKHDIKCNI;
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

#define GNMCIEPEBPK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4E57A0)
#define GNMCIEPEBPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E5CE0)
#define GNMCIEPEBPK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4E5180)
#define GNMCIEPEBPK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4E5020)
#define GNMCIEPEBPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E4FB0)
#define GNMCIEPEBPK_EMOIAMBEBOM_OFFSET UNITYSDK_OFFSET(0x1E4E51E0)
#define GNMCIEPEBPK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4E5270)
#define GNMCIEPEBPK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4E5210)
#define GNMCIEPEBPK_FCMIJGACIDK_OFFSET UNITYSDK_OFFSET(0x1E4E51F0)
#define GNMCIEPEBPK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4E5470)
#define GNMCIEPEBPK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4E4F40)
#define GNMCIEPEBPK_LCFNAKKKFBM_OFFSET UNITYSDK_OFFSET(0x1E4E5200)
#define GNMCIEPEBPK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4E5A40)
#define GNMCIEPEBPK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4E58D0)
#define GNMCIEPEBPK_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E4E51D0)
#define GNMCIEPEBPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4E4FA0)
#define GNMCIEPEBPK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4E5600)
#define GNMCIEPEBPK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4E5660)

	class GNMCIEPEBPK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FMKMEFMOJGJ*>* DALKEINMPBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::NCFKHDIKCNI* NOMDEJJPCMH; // 0x20
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* DOPNNCFPBCL; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_KHPCDHPFCHE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GNMCIEPEBPK")->GetStaticField(0x23B00);
		}

		static ::System::Object** StaticGet_HKPMEDGIAEM()
		{
			return (::System::Object**)UnitySDK::FromName("", "GNMCIEPEBPK")->GetStaticField(0x23B08);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GNMCIEPEBPK")->GetStaticField(0x23B10);
		}

		// static const ::System::Object DPPAFBAHEFH; // 0x0
		// static const ::System::Object GCDEHDAKDHL; // 0x0
		// static const ::System::Object NCMODHGPIDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCIEPEBPK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNMCIEPEBPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNMCIEPEBPK*))((::PBYTE)hIl2Cpp + GNMCIEPEBPK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNMCIEPEBPK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GNMCIEPEBPK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCIEPEBPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNMCIEPEBPK* Clone()
		{
			return ((::GNMCIEPEBPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCIEPEBPK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FMKMEFMOJGJ*>* MKMAMKNLJGM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FMKMEFMOJGJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCIEPEBPK_MKMAMKNLJGM_OFFSET))(this);
		}

		::NCFKHDIKCNI* EMOIAMBEBOM()
		{
			return ((::NCFKHDIKCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCIEPEBPK_EMOIAMBEBOM_OFFSET))(this);
		}

		::System::Void FCMIJGACIDK(::NCFKHDIKCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + GNMCIEPEBPK_FCMIJGACIDK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* LCFNAKKKFBM()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCIEPEBPK_LCFNAKKKFBM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNMCIEPEBPK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNMCIEPEBPK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNMCIEPEBPK*))((::PBYTE)hIl2Cpp + GNMCIEPEBPK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCIEPEBPK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCIEPEBPK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNMCIEPEBPK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCIEPEBPK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNMCIEPEBPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNMCIEPEBPK*))((::PBYTE)hIl2Cpp + GNMCIEPEBPK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNMCIEPEBPK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
