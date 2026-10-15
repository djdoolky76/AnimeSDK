#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDFGDPBEKCJ;
class LKCDLJCKCJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDFGDPBEKCJ_AMHBFDHDEON_OFFSET UNITYSDK_OFFSET(0x1E3549C0)
#define FDFGDPBEKCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E354DB0)
#define FDFGDPBEKCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E355090)
#define FDFGDPBEKCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E354990)
#define FDFGDPBEKCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E354900)
#define FDFGDPBEKCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3548C0)
#define FDFGDPBEKCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E354B10)
#define FDFGDPBEKCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3549D0)
#define FDFGDPBEKCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E354C30)
#define FDFGDPBEKCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E354880)
#define FDFGDPBEKCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E354EF0)
#define FDFGDPBEKCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E354E50)
#define FDFGDPBEKCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3548B0)
#define FDFGDPBEKCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E354CA0)
#define FDFGDPBEKCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E354D00)

inline static constexpr unsigned int FDFGDPBEKCJ_TypeDefinitionIndex = 33236;

	class FDFGDPBEKCJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LKCDLJCKCJI*>* JJOGBAGIKAN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FDFGDPBEKCJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FDFGDPBEKCJ*>**)UnitySDK::FromName("", "FDFGDPBEKCJ")->GetStaticField(0x5B220);
		}

		static ::Google::Protobuf::FieldCodec_1<::LKCDLJCKCJI*>** StaticGet_OKEPCNKLNBO()
		{
			return (::Google::Protobuf::FieldCodec_1<::LKCDLJCKCJI*>**)UnitySDK::FromName("", "FDFGDPBEKCJ")->GetStaticField(0x5B228);
		}

		// static const ::System::Object BOHFLAICECM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGDPBEKCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDFGDPBEKCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDFGDPBEKCJ*))((::PBYTE)hIl2Cpp + FDFGDPBEKCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDFGDPBEKCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FDFGDPBEKCJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FDFGDPBEKCJ*>*(*)())((::PBYTE)hIl2Cpp + FDFGDPBEKCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGDPBEKCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDFGDPBEKCJ* Clone()
		{
			return ((::FDFGDPBEKCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGDPBEKCJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LKCDLJCKCJI*>* AMHBFDHDEON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LKCDLJCKCJI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGDPBEKCJ_AMHBFDHDEON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDFGDPBEKCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDFGDPBEKCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDFGDPBEKCJ*))((::PBYTE)hIl2Cpp + FDFGDPBEKCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGDPBEKCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGDPBEKCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDFGDPBEKCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGDPBEKCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDFGDPBEKCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDFGDPBEKCJ*))((::PBYTE)hIl2Cpp + FDFGDPBEKCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDFGDPBEKCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
