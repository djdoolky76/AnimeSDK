#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBOFEOCHDMN;
class LNPGBGDPIIK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBOFEOCHDMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E30F0A0)
#define FBOFEOCHDMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E30F3A0)
#define FBOFEOCHDMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E30EC20)
#define FBOFEOCHDMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E30EB70)
#define FBOFEOCHDMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E30EB20)
#define FBOFEOCHDMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E30EE00)
#define FBOFEOCHDMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E30EC80)
#define FBOFEOCHDMN_FPCMAMANKBE_OFFSET UNITYSDK_OFFSET(0x1E30EC70)
#define FBOFEOCHDMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E30EF20)
#define FBOFEOCHDMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E30EAB0)
#define FBOFEOCHDMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E30F1E0)
#define FBOFEOCHDMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E30F140)
#define FBOFEOCHDMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E30EB10)
#define FBOFEOCHDMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E30EF90)
#define FBOFEOCHDMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E30EFF0)

inline static constexpr unsigned int FBOFEOCHDMN_TypeDefinitionIndex = 33317;

	class FBOFEOCHDMN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LNPGBGDPIIK*>* HJLBNALHMJP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FBOFEOCHDMN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBOFEOCHDMN*>**)UnitySDK::FromName("", "FBOFEOCHDMN")->GetStaticField(0x4EF60);
		}

		static ::Google::Protobuf::FieldCodec_1<::LNPGBGDPIIK*>** StaticGet_DILOAOHLGCO()
		{
			return (::Google::Protobuf::FieldCodec_1<::LNPGBGDPIIK*>**)UnitySDK::FromName("", "FBOFEOCHDMN")->GetStaticField(0x4EF68);
		}

		// static const ::System::Object NFGOLJCCINE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOFEOCHDMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBOFEOCHDMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBOFEOCHDMN*))((::PBYTE)hIl2Cpp + FBOFEOCHDMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBOFEOCHDMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBOFEOCHDMN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBOFEOCHDMN*>*(*)())((::PBYTE)hIl2Cpp + FBOFEOCHDMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOFEOCHDMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBOFEOCHDMN* Clone()
		{
			return ((::FBOFEOCHDMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOFEOCHDMN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LNPGBGDPIIK*>* FPCMAMANKBE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LNPGBGDPIIK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOFEOCHDMN_FPCMAMANKBE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBOFEOCHDMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBOFEOCHDMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBOFEOCHDMN*))((::PBYTE)hIl2Cpp + FBOFEOCHDMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOFEOCHDMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOFEOCHDMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBOFEOCHDMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOFEOCHDMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBOFEOCHDMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBOFEOCHDMN*))((::PBYTE)hIl2Cpp + FBOFEOCHDMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBOFEOCHDMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
