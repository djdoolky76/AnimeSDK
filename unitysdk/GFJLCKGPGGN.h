#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFJLCKGPGGN;
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

#define GFJLCKGPGGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E470660)
#define GFJLCKGPGGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4709C0)
#define GFJLCKGPGGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E470190)
#define GFJLCKGPGGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E470060)
#define GFJLCKGPGGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E46FFD0)
#define GFJLCKGPGGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E470230)
#define GFJLCKGPGGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E470200)
#define GFJLCKGPGGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E470380)
#define GFJLCKGPGGN_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E4701F0)
#define GFJLCKGPGGN_JHEFPOGNBND_OFFSET UNITYSDK_OFFSET(0x1E4701C0)
#define GFJLCKGPGGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E46FF90)
#define GFJLCKGPGGN_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E4701E0)
#define GFJLCKGPGGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E470880)
#define GFJLCKGPGGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4707C0)
#define GFJLCKGPGGN_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E4701D0)
#define GFJLCKGPGGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E46FFC0)
#define GFJLCKGPGGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4704C0)
#define GFJLCKGPGGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E470520)

inline static constexpr unsigned int GFJLCKGPGGN_TypeDefinitionIndex = 34306;

	class GFJLCKGPGGN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::StrongChallengeAvatar*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLFDMJMJDND; // 0x20
		::System::UInt32 HJEGLCJEOKC; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::Proto::StrongChallengeAvatar*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::StrongChallengeAvatar*>**)UnitySDK::FromName("", "GFJLCKGPGGN")->GetStaticField(0x14780);
		}

		static ::Google::Protobuf::MessageParser_1<::GFJLCKGPGGN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GFJLCKGPGGN*>**)UnitySDK::FromName("", "GFJLCKGPGGN")->GetStaticField(0x14788);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JKBHDLODNOE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GFJLCKGPGGN")->GetStaticField(0x14790);
		}

		// static const ::System::Object CPBPPPJBFGH; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object IEIFMNNMINA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJLCKGPGGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFJLCKGPGGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFJLCKGPGGN*))((::PBYTE)hIl2Cpp + GFJLCKGPGGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFJLCKGPGGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GFJLCKGPGGN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GFJLCKGPGGN*>*(*)())((::PBYTE)hIl2Cpp + GFJLCKGPGGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJLCKGPGGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFJLCKGPGGN* Clone()
		{
			return ((::GFJLCKGPGGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJLCKGPGGN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JHEFPOGNBND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJLCKGPGGN_JHEFPOGNBND_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::StrongChallengeAvatar*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::StrongChallengeAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJLCKGPGGN_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJLCKGPGGN_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFJLCKGPGGN_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFJLCKGPGGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFJLCKGPGGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFJLCKGPGGN*))((::PBYTE)hIl2Cpp + GFJLCKGPGGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJLCKGPGGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJLCKGPGGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFJLCKGPGGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJLCKGPGGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFJLCKGPGGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFJLCKGPGGN*))((::PBYTE)hIl2Cpp + GFJLCKGPGGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFJLCKGPGGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
