#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMDJAFAHKEL;
class BJMPHAAOEFL;
class KIAKKNFLEPN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMDJAFAHKEL_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E4EC230)
#define AMDJAFAHKEL_AFDBLMGBHDJ_OFFSET UNITYSDK_OFFSET(0x1E4EC250)
#define AMDJAFAHKEL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4EC7C0)
#define AMDJAFAHKEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4ECBE0)
#define AMDJAFAHKEL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4EC1E0)
#define AMDJAFAHKEL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4EC0B0)
#define AMDJAFAHKEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4EC060)
#define AMDJAFAHKEL_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E4EC240)
#define AMDJAFAHKEL_EPEFNNDEPLH_OFFSET UNITYSDK_OFFSET(0x1E4EC260)
#define AMDJAFAHKEL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4EC300)
#define AMDJAFAHKEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4EC2A0)
#define AMDJAFAHKEL_FGHPIAJFMLP_OFFSET UNITYSDK_OFFSET(0x1E4EC290)
#define AMDJAFAHKEL_FHDGAFPJAFB_OFFSET UNITYSDK_OFFSET(0x1E4EC270)
#define AMDJAFAHKEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4EC4E0)
#define AMDJAFAHKEL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4EBFF0)
#define AMDJAFAHKEL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4ECAC0)
#define AMDJAFAHKEL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4EC990)
#define AMDJAFAHKEL_NMILMADLNKN_OFFSET UNITYSDK_OFFSET(0x1E4EC280)
#define AMDJAFAHKEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4EC050)
#define AMDJAFAHKEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4EC580)
#define AMDJAFAHKEL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4EC5E0)

inline static constexpr unsigned int AMDJAFAHKEL_TypeDefinitionIndex = 28546;

	class AMDJAFAHKEL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BJMPHAAOEFL*>* BAOELGLJGJC; // 0x10
		::KIAKKNFLEPN* ADHHMDOGBJG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::Int32 NPFBAFODCBI; // 0x28
		::System::UInt32 BPHNGKADNFE; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::AMDJAFAHKEL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AMDJAFAHKEL*>**)UnitySDK::FromName("", "AMDJAFAHKEL")->GetStaticField(0x2F640);
		}

		static ::Google::Protobuf::FieldCodec_1<::BJMPHAAOEFL*>** StaticGet_OBBKKNGABOE()
		{
			return (::Google::Protobuf::FieldCodec_1<::BJMPHAAOEFL*>**)UnitySDK::FromName("", "AMDJAFAHKEL")->GetStaticField(0x2F648);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object FLDOFDJBLJB; // 0x0
		// static const ::System::Object OAJAHLJMBLB; // 0x0
		// static const ::System::Object CKABAKADKGC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMDJAFAHKEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMDJAFAHKEL*))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMDJAFAHKEL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AMDJAFAHKEL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AMDJAFAHKEL*>*(*)())((::PBYTE)hIl2Cpp + AMDJAFAHKEL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMDJAFAHKEL* Clone()
		{
			return ((::AMDJAFAHKEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_CLONE_OFFSET))(this);
		}

		::System::Int32 ACOJNBBKMOE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 AFDBLMGBHDJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_AFDBLMGBHDJ_OFFSET))(this);
		}

		::System::Void EPEFNNDEPLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_EPEFNNDEPLH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BJMPHAAOEFL*>* FHDGAFPJAFB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BJMPHAAOEFL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_FHDGAFPJAFB_OFFSET))(this);
		}

		::KIAKKNFLEPN* NMILMADLNKN()
		{
			return ((::KIAKKNFLEPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_NMILMADLNKN_OFFSET))(this);
		}

		::System::Void FGHPIAJFMLP(::KIAKKNFLEPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIAKKNFLEPN*))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_FGHPIAJFMLP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMDJAFAHKEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMDJAFAHKEL*))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMDJAFAHKEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMDJAFAHKEL*))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMDJAFAHKEL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
