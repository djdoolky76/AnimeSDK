#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELOFLNEAHPD;
class ENIDJAFECBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELOFLNEAHPD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2D8410)
#define ELOFLNEAHPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D87C0)
#define ELOFLNEAHPD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2D7F70)
#define ELOFLNEAHPD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2D7E40)
#define ELOFLNEAHPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D7DB0)
#define ELOFLNEAHPD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2D8040)
#define ELOFLNEAHPD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2D7FE0)
#define ELOFLNEAHPD_FMGHOGEBEJJ_OFFSET UNITYSDK_OFFSET(0x1E2D7FC0)
#define ELOFLNEAHPD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2D8190)
#define ELOFLNEAHPD_JCIPNFNOFPN_OFFSET UNITYSDK_OFFSET(0x1E2D7FD0)
#define ELOFLNEAHPD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2D7D40)
#define ELOFLNEAHPD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2D85A0)
#define ELOFLNEAHPD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2D84F0)
#define ELOFLNEAHPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2D7DA0)
#define ELOFLNEAHPD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2D82D0)
#define ELOFLNEAHPD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2D8330)

inline static constexpr unsigned int ELOFLNEAHPD_TypeDefinitionIndex = 29841;

	class ELOFLNEAHPD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::ENIDJAFECBD*>* IKMMDLLLNGH; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DAJAAAPJPNE; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JCOLJGNIILJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ELOFLNEAHPD")->GetStaticField(0x519A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::ENIDJAFECBD*>** StaticGet_LGAHOECCFCB()
		{
			return (::Google::Protobuf::FieldCodec_1<::ENIDJAFECBD*>**)UnitySDK::FromName("", "ELOFLNEAHPD")->GetStaticField(0x519A8);
		}

		static ::Google::Protobuf::MessageParser_1<::ELOFLNEAHPD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELOFLNEAHPD*>**)UnitySDK::FromName("", "ELOFLNEAHPD")->GetStaticField(0x519B0);
		}

		// static const ::System::Object KKEFDKAOBNN; // 0x0
		// static const ::System::Object BNPGMJNOGKF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOFLNEAHPD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELOFLNEAHPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELOFLNEAHPD*))((::PBYTE)hIl2Cpp + ELOFLNEAHPD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELOFLNEAHPD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ELOFLNEAHPD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELOFLNEAHPD*>*(*)())((::PBYTE)hIl2Cpp + ELOFLNEAHPD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOFLNEAHPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELOFLNEAHPD* Clone()
		{
			return ((::ELOFLNEAHPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOFLNEAHPD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FMGHOGEBEJJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOFLNEAHPD_FMGHOGEBEJJ_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ENIDJAFECBD*>* JCIPNFNOFPN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ENIDJAFECBD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOFLNEAHPD_JCIPNFNOFPN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELOFLNEAHPD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELOFLNEAHPD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELOFLNEAHPD*))((::PBYTE)hIl2Cpp + ELOFLNEAHPD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOFLNEAHPD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOFLNEAHPD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELOFLNEAHPD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOFLNEAHPD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELOFLNEAHPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELOFLNEAHPD*))((::PBYTE)hIl2Cpp + ELOFLNEAHPD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELOFLNEAHPD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
