#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAFMBLMMAAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class StrongChallengeAvatar; }
namespace System { class Object; }
namespace System { class String; }

#define NAFMBLMMAAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EABF920)
#define NAFMBLMMAAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EABFCD0)
#define NAFMBLMMAAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EABF470)
#define NAFMBLMMAAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EABF340)
#define NAFMBLMMAAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EABF2B0)
#define NAFMBLMMAAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EABF540)
#define NAFMBLMMAAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EABF4E0)
#define NAFMBLMMAAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EABF690)
#define NAFMBLMMAAG_JHEFPOGNBND_OFFSET UNITYSDK_OFFSET(0x1EABF4D0)
#define NAFMBLMMAAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EABF240)
#define NAFMBLMMAAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EABFAB0)
#define NAFMBLMMAAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EABFA00)
#define NAFMBLMMAAG_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1EABF4C0)
#define NAFMBLMMAAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EABF2A0)
#define NAFMBLMMAAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EABF7E0)
#define NAFMBLMMAAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EABF840)

inline static constexpr unsigned int NAFMBLMMAAG_TypeDefinitionIndex = 34296;

	class NAFMBLMMAAG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLFDMJMJDND; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::StrongChallengeAvatar*>* CBFGBDBJHID; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NAFMBLMMAAG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NAFMBLMMAAG*>**)UnitySDK::FromName("", "NAFMBLMMAAG")->GetStaticField(0x5C090);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JKBHDLODNOE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NAFMBLMMAAG")->GetStaticField(0x5C098);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::StrongChallengeAvatar*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::StrongChallengeAvatar*>**)UnitySDK::FromName("", "NAFMBLMMAAG")->GetStaticField(0x5C0A0);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object CPBPPPJBFGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFMBLMMAAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NAFMBLMMAAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAFMBLMMAAG*))((::PBYTE)hIl2Cpp + NAFMBLMMAAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAFMBLMMAAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NAFMBLMMAAG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NAFMBLMMAAG*>*(*)())((::PBYTE)hIl2Cpp + NAFMBLMMAAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFMBLMMAAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NAFMBLMMAAG* Clone()
		{
			return ((::NAFMBLMMAAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFMBLMMAAG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::StrongChallengeAvatar*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::StrongChallengeAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFMBLMMAAG_MJOEMBBMBON_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JHEFPOGNBND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFMBLMMAAG_JHEFPOGNBND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAFMBLMMAAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NAFMBLMMAAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAFMBLMMAAG*))((::PBYTE)hIl2Cpp + NAFMBLMMAAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFMBLMMAAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFMBLMMAAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NAFMBLMMAAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFMBLMMAAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NAFMBLMMAAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAFMBLMMAAG*))((::PBYTE)hIl2Cpp + NAFMBLMMAAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NAFMBLMMAAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
