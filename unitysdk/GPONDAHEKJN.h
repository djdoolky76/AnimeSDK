#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPONDAHEKJN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GPONDAHEKJN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4CEC90)
#define GPONDAHEKJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4CEF70)
#define GPONDAHEKJN_CKILFHOEKKJ_OFFSET UNITYSDK_OFFSET(0x1E4CE850)
#define GPONDAHEKJN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4CE800)
#define GPONDAHEKJN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4CE770)
#define GPONDAHEKJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CE720)
#define GPONDAHEKJN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4CE960)
#define GPONDAHEKJN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4CE860)
#define GPONDAHEKJN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4CE840)
#define GPONDAHEKJN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4CEA50)
#define GPONDAHEKJN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4CE6E0)
#define GPONDAHEKJN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4CEDC0)
#define GPONDAHEKJN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4CED70)
#define GPONDAHEKJN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4CE830)
#define GPONDAHEKJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4CE710)
#define GPONDAHEKJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4CEB50)
#define GPONDAHEKJN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4CEBB0)

inline static constexpr unsigned int GPONDAHEKJN_TypeDefinitionIndex = 32058;

	class GPONDAHEKJN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JNBKODNAIHC; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GPONDAHEKJN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GPONDAHEKJN*>**)UnitySDK::FromName("", "GPONDAHEKJN")->GetStaticField(0x242B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DPPBBLEHDEO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GPONDAHEKJN")->GetStaticField(0x242B8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object AKFFPIIMPID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPONDAHEKJN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GPONDAHEKJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPONDAHEKJN*))((::PBYTE)hIl2Cpp + GPONDAHEKJN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPONDAHEKJN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GPONDAHEKJN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GPONDAHEKJN*>*(*)())((::PBYTE)hIl2Cpp + GPONDAHEKJN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPONDAHEKJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GPONDAHEKJN* Clone()
		{
			return ((::GPONDAHEKJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPONDAHEKJN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPONDAHEKJN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPONDAHEKJN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CKILFHOEKKJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPONDAHEKJN_CKILFHOEKKJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPONDAHEKJN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GPONDAHEKJN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GPONDAHEKJN*))((::PBYTE)hIl2Cpp + GPONDAHEKJN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPONDAHEKJN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPONDAHEKJN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GPONDAHEKJN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPONDAHEKJN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GPONDAHEKJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPONDAHEKJN*))((::PBYTE)hIl2Cpp + GPONDAHEKJN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GPONDAHEKJN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
