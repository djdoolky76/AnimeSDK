#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIMPJFMPEPA;
class OELLEKNNEMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OELLEKNNEMK_ANIGJLBJCOO_OFFSET UNITYSDK_OFFSET(0x1DE014F0)
#define OELLEKNNEMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE01960)
#define OELLEKNNEMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE01CF0)
#define OELLEKNNEMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE014B0)
#define OELLEKNNEMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE01420)
#define OELLEKNNEMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE013E0)
#define OELLEKNNEMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE01660)
#define OELLEKNNEMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE01510)
#define OELLEKNNEMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE01780)
#define OELLEKNNEMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE013A0)
#define OELLEKNNEMK_KMNOPJDAHGO_OFFSET UNITYSDK_OFFSET(0x1DE01500)
#define OELLEKNNEMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE01B30)
#define OELLEKNNEMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE01A90)
#define OELLEKNNEMK_OOOMGOCOLCE_OFFSET UNITYSDK_OFFSET(0x1DE014E0)
#define OELLEKNNEMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE013D0)
#define OELLEKNNEMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE017F0)
#define OELLEKNNEMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE01850)

inline static constexpr unsigned int OELLEKNNEMK_TypeDefinitionIndex = 25917;

	class OELLEKNNEMK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HIMPJFMPEPA*>* HJHFJJDKFAH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 HFCBDBHMJAN; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::HIMPJFMPEPA*>** StaticGet_DJMPPGMKFHO()
		{
			return (::Google::Protobuf::FieldCodec_1<::HIMPJFMPEPA*>**)UnitySDK::FromName("", "OELLEKNNEMK")->GetStaticField(0x144F0);
		}

		static ::Google::Protobuf::MessageParser_1<::OELLEKNNEMK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OELLEKNNEMK*>**)UnitySDK::FromName("", "OELLEKNNEMK")->GetStaticField(0x144F8);
		}

		// static const ::System::Object LLLBJFAJIMJ; // 0x0
		// static const ::System::Object CDKGLMIKBDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELLEKNNEMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OELLEKNNEMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OELLEKNNEMK*))((::PBYTE)hIl2Cpp + OELLEKNNEMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELLEKNNEMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OELLEKNNEMK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OELLEKNNEMK*>*(*)())((::PBYTE)hIl2Cpp + OELLEKNNEMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELLEKNNEMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OELLEKNNEMK* Clone()
		{
			return ((::OELLEKNNEMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELLEKNNEMK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HIMPJFMPEPA*>* OOOMGOCOLCE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HIMPJFMPEPA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELLEKNNEMK_OOOMGOCOLCE_OFFSET))(this);
		}

		::System::UInt32 ANIGJLBJCOO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OELLEKNNEMK_ANIGJLBJCOO_OFFSET))(this);
		}

		::System::Void KMNOPJDAHGO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OELLEKNNEMK_KMNOPJDAHGO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OELLEKNNEMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OELLEKNNEMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OELLEKNNEMK*))((::PBYTE)hIl2Cpp + OELLEKNNEMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OELLEKNNEMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELLEKNNEMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OELLEKNNEMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OELLEKNNEMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OELLEKNNEMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OELLEKNNEMK*))((::PBYTE)hIl2Cpp + OELLEKNNEMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OELLEKNNEMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
