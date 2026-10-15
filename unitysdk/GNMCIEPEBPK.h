#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMKMEFMOJGJ;
class GNMCIEPEBPK;
class NCFKHDIKCNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNMCIEPEBPK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4B8120)
#define GNMCIEPEBPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B8660)
#define GNMCIEPEBPK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4B7B00)
#define GNMCIEPEBPK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4B79A0)
#define GNMCIEPEBPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B7930)
#define GNMCIEPEBPK_EMOIAMBEBOM_OFFSET UNITYSDK_OFFSET(0x1E4B7B60)
#define GNMCIEPEBPK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4B7BF0)
#define GNMCIEPEBPK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4B7B90)
#define GNMCIEPEBPK_FCMIJGACIDK_OFFSET UNITYSDK_OFFSET(0x1E4B7B70)
#define GNMCIEPEBPK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4B7DF0)
#define GNMCIEPEBPK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4B78C0)
#define GNMCIEPEBPK_LCFNAKKKFBM_OFFSET UNITYSDK_OFFSET(0x1E4B7B80)
#define GNMCIEPEBPK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4B83C0)
#define GNMCIEPEBPK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4B8250)
#define GNMCIEPEBPK_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E4B7B50)
#define GNMCIEPEBPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4B7920)
#define GNMCIEPEBPK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4B7F80)
#define GNMCIEPEBPK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4B7FE0)

inline static constexpr unsigned int GNMCIEPEBPK_TypeDefinitionIndex = 31863;

	class GNMCIEPEBPK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* DOPNNCFPBCL; // 0x18
		::NCFKHDIKCNI* NOMDEJJPCMH; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::FMKMEFMOJGJ*>* DALKEINMPBH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::FMKMEFMOJGJ*>** StaticGet_KHPCDHPFCHE()
		{
			return (::Google::Protobuf::FieldCodec_1<::FMKMEFMOJGJ*>**)UnitySDK::FromName("", "GNMCIEPEBPK")->GetStaticField(0x215B0);
		}

		static ::Google::Protobuf::MessageParser_1<::GNMCIEPEBPK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GNMCIEPEBPK*>**)UnitySDK::FromName("", "GNMCIEPEBPK")->GetStaticField(0x215B8);
		}

		static ::System::Object** StaticGet_HKPMEDGIAEM()
		{
			return (::System::Object**)UnitySDK::FromName("", "GNMCIEPEBPK")->GetStaticField(0x215C0);
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

		static ::Google::Protobuf::MessageParser_1<::GNMCIEPEBPK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GNMCIEPEBPK*>*(*)())((::PBYTE)hIl2Cpp + GNMCIEPEBPK_JJGHOBBFNJD_OFFSET))();
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
