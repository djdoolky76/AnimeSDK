#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMKMEFMOJGJ;
class KNECKDAOKOA;
class NCFKHDIKCNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNECKDAOKOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBBD360)
#define KNECKDAOKOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBBD910)
#define KNECKDAOKOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBBCBA0)
#define KNECKDAOKOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBBCA20)
#define KNECKDAOKOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBBC9D0)
#define KNECKDAOKOA_DKFFLPJIKPC_OFFSET UNITYSDK_OFFSET(0x1FBBCC00)
#define KNECKDAOKOA_EMOIAMBEBOM_OFFSET UNITYSDK_OFFSET(0x1FBBCC10)
#define KNECKDAOKOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBBCCA0)
#define KNECKDAOKOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBBCC40)
#define KNECKDAOKOA_FCMIJGACIDK_OFFSET UNITYSDK_OFFSET(0x1FBBCC20)
#define KNECKDAOKOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBBCF10)
#define KNECKDAOKOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBBC960)
#define KNECKDAOKOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBBD650)
#define KNECKDAOKOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBBD460)
#define KNECKDAOKOA_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1FBBCC30)
#define KNECKDAOKOA_MNNAAHJGIDE_OFFSET UNITYSDK_OFFSET(0x1FBBCBF0)
#define KNECKDAOKOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBBC9C0)
#define KNECKDAOKOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBBD190)
#define KNECKDAOKOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBBD1F0)

inline static constexpr unsigned int KNECKDAOKOA_TypeDefinitionIndex = 32668;

	class KNECKDAOKOA : public ::System::Object
	{
	public:
		::NCFKHDIKCNI* OIDDMGKMANP; // 0x10
		::NCFKHDIKCNI* NOMDEJJPCMH; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::FMKMEFMOJGJ*>* DALKEINMPBH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::FMKMEFMOJGJ*>** StaticGet_KHPCDHPFCHE()
		{
			return (::Google::Protobuf::FieldCodec_1<::FMKMEFMOJGJ*>**)UnitySDK::FromName("", "KNECKDAOKOA")->GetStaticField(0x1BC60);
		}

		static ::Google::Protobuf::MessageParser_1<::KNECKDAOKOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KNECKDAOKOA*>**)UnitySDK::FromName("", "KNECKDAOKOA")->GetStaticField(0x1BC68);
		}

		// static const ::System::Object NBKDCDABHMP; // 0x0
		// static const ::System::Object GCDEHDAKDHL; // 0x0
		// static const ::System::Object DPPAFBAHEFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNECKDAOKOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNECKDAOKOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNECKDAOKOA*))((::PBYTE)hIl2Cpp + KNECKDAOKOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNECKDAOKOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KNECKDAOKOA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KNECKDAOKOA*>*(*)())((::PBYTE)hIl2Cpp + KNECKDAOKOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNECKDAOKOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNECKDAOKOA* Clone()
		{
			return ((::KNECKDAOKOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNECKDAOKOA_CLONE_OFFSET))(this);
		}

		::NCFKHDIKCNI* MNNAAHJGIDE()
		{
			return ((::NCFKHDIKCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNECKDAOKOA_MNNAAHJGIDE_OFFSET))(this);
		}

		::System::Void DKFFLPJIKPC(::NCFKHDIKCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + KNECKDAOKOA_DKFFLPJIKPC_OFFSET))(this, a1);
		}

		::NCFKHDIKCNI* EMOIAMBEBOM()
		{
			return ((::NCFKHDIKCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNECKDAOKOA_EMOIAMBEBOM_OFFSET))(this);
		}

		::System::Void FCMIJGACIDK(::NCFKHDIKCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + KNECKDAOKOA_FCMIJGACIDK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FMKMEFMOJGJ*>* MKMAMKNLJGM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FMKMEFMOJGJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNECKDAOKOA_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNECKDAOKOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNECKDAOKOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNECKDAOKOA*))((::PBYTE)hIl2Cpp + KNECKDAOKOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNECKDAOKOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNECKDAOKOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNECKDAOKOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNECKDAOKOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNECKDAOKOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNECKDAOKOA*))((::PBYTE)hIl2Cpp + KNECKDAOKOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNECKDAOKOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
