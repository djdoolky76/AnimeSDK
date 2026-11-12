#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFMENAAGPDN;
class JMGLAJFHNIM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JMGLAJFHNIM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FABACF0)
#define JMGLAJFHNIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FABB110)
#define JMGLAJFHNIM_CLONE_OFFSET UNITYSDK_OFFSET(0x1FABA7B0)
#define JMGLAJFHNIM_CPIPGEHNHLF_OFFSET UNITYSDK_OFFSET(0x1FABA820)
#define JMGLAJFHNIM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FABA6F0)
#define JMGLAJFHNIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1FABA6A0)
#define JMGLAJFHNIM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FABA990)
#define JMGLAJFHNIM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FABA830)
#define JMGLAJFHNIM_FCAIJANDDDP_OFFSET UNITYSDK_OFFSET(0x1FABA810)
#define JMGLAJFHNIM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FABAAC0)
#define JMGLAJFHNIM_GJIBPKKENEO_OFFSET UNITYSDK_OFFSET(0x1FABA7F0)
#define JMGLAJFHNIM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FABA660)
#define JMGLAJFHNIM_LGMLMDFDIBJ_OFFSET UNITYSDK_OFFSET(0x1FABA7E0)
#define JMGLAJFHNIM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FABAF20)
#define JMGLAJFHNIM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FABAE70)
#define JMGLAJFHNIM_OCACDPCLIBF_OFFSET UNITYSDK_OFFSET(0x1FABA800)
#define JMGLAJFHNIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FABA690)
#define JMGLAJFHNIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FABAB30)
#define JMGLAJFHNIM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FABAB90)

inline static constexpr unsigned int JMGLAJFHNIM_TypeDefinitionIndex = 28803;

	class JMGLAJFHNIM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BFMENAAGPDN*>* LDELHDNAAHO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AFFBGDFNCBG; // 0x20
		::System::UInt32 HMPAFLDIPPB; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::BFMENAAGPDN*>** StaticGet_ACJGDHMKKJO()
		{
			return (::Google::Protobuf::FieldCodec_1<::BFMENAAGPDN*>**)UnitySDK::FromName("", "JMGLAJFHNIM")->GetStaticField(0x536B0);
		}

		static ::Google::Protobuf::MessageParser_1<::JMGLAJFHNIM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JMGLAJFHNIM*>**)UnitySDK::FromName("", "JMGLAJFHNIM")->GetStaticField(0x536B8);
		}

		// static const ::System::Object MLABBDNGIEJ; // 0x0
		// static const ::System::Object OICKCNEBADE; // 0x0
		// static const ::System::Object LIFIJBIKBDJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JMGLAJFHNIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMGLAJFHNIM*))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMGLAJFHNIM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JMGLAJFHNIM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JMGLAJFHNIM*>*(*)())((::PBYTE)hIl2Cpp + JMGLAJFHNIM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JMGLAJFHNIM* Clone()
		{
			return ((::JMGLAJFHNIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_CLONE_OFFSET))(this);
		}

		::System::UInt32 LGMLMDFDIBJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_LGMLMDFDIBJ_OFFSET))(this);
		}

		::System::Void GJIBPKKENEO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_GJIBPKKENEO_OFFSET))(this, a1);
		}

		::System::UInt32 OCACDPCLIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_OCACDPCLIBF_OFFSET))(this);
		}

		::System::Void FCAIJANDDDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_FCAIJANDDDP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BFMENAAGPDN*>* CPIPGEHNHLF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BFMENAAGPDN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_CPIPGEHNHLF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JMGLAJFHNIM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JMGLAJFHNIM*))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JMGLAJFHNIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMGLAJFHNIM*))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JMGLAJFHNIM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
