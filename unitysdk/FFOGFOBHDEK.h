#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBNGHMHHHLL;
class FFOGFOBHDEK;
class IGKKILFFNJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FFOGFOBHDEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3796A0)
#define FFOGFOBHDEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E379AA0)
#define FFOGFOBHDEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3792A0)
#define FFOGFOBHDEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3791A0)
#define FFOGFOBHDEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E379130)
#define FFOGFOBHDEK_EIHMMPEPCOD_OFFSET UNITYSDK_OFFSET(0x1E3792F0)
#define FFOGFOBHDEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E379370)
#define FFOGFOBHDEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E379310)
#define FFOGFOBHDEK_FMGHOGEBEJJ_OFFSET UNITYSDK_OFFSET(0x1E379300)
#define FFOGFOBHDEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3794C0)
#define FFOGFOBHDEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3790C0)
#define FFOGFOBHDEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E379870)
#define FFOGFOBHDEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E379780)
#define FFOGFOBHDEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E379120)
#define FFOGFOBHDEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E379550)
#define FFOGFOBHDEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3795B0)

inline static constexpr unsigned int FFOGFOBHDEK_TypeDefinitionIndex = 29166;

	class FFOGFOBHDEK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FBNGHMHHHLL*>* DAJAAAPJPNE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::IGKKILFFNJK*>* LICMNHAFCGJ; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::FBNGHMHHHLL*>** StaticGet_JCOLJGNIILJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::FBNGHMHHHLL*>**)UnitySDK::FromName("", "FFOGFOBHDEK")->GetStaticField(0x5E140);
		}

		static ::Google::Protobuf::MessageParser_1<::FFOGFOBHDEK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FFOGFOBHDEK*>**)UnitySDK::FromName("", "FFOGFOBHDEK")->GetStaticField(0x5E148);
		}

		static ::Google::Protobuf::FieldCodec_1<::IGKKILFFNJK*>** StaticGet_ADIHMDKACBF()
		{
			return (::Google::Protobuf::FieldCodec_1<::IGKKILFFNJK*>**)UnitySDK::FromName("", "FFOGFOBHDEK")->GetStaticField(0x5E150);
		}

		// static const ::System::Object DGFKAILADEL; // 0x0
		// static const ::System::Object KKEFDKAOBNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOGFOBHDEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FFOGFOBHDEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFOGFOBHDEK*))((::PBYTE)hIl2Cpp + FFOGFOBHDEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFOGFOBHDEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FFOGFOBHDEK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FFOGFOBHDEK*>*(*)())((::PBYTE)hIl2Cpp + FFOGFOBHDEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOGFOBHDEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FFOGFOBHDEK* Clone()
		{
			return ((::FFOGFOBHDEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOGFOBHDEK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IGKKILFFNJK*>* EIHMMPEPCOD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IGKKILFFNJK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOGFOBHDEK_EIHMMPEPCOD_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FBNGHMHHHLL*>* FMGHOGEBEJJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FBNGHMHHHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOGFOBHDEK_FMGHOGEBEJJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFOGFOBHDEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FFOGFOBHDEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FFOGFOBHDEK*))((::PBYTE)hIl2Cpp + FFOGFOBHDEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOGFOBHDEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOGFOBHDEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FFOGFOBHDEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOGFOBHDEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FFOGFOBHDEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFOGFOBHDEK*))((::PBYTE)hIl2Cpp + FFOGFOBHDEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FFOGFOBHDEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
