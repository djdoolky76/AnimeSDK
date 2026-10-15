#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNKGKMFEHLB;
class MPPHIOJNKGB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNKGKMFEHLB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8A5C30)
#define KNKGKMFEHLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A5FD0)
#define KNKGKMFEHLB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8A5780)
#define KNKGKMFEHLB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8A56C0)
#define KNKGKMFEHLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A5670)
#define KNKGKMFEHLB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8A5930)
#define KNKGKMFEHLB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8A57E0)
#define KNKGKMFEHLB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8A57D0)
#define KNKGKMFEHLB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8A5A50)
#define KNKGKMFEHLB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8A5630)
#define KNKGKMFEHLB_KJJFGIBOIHJ_OFFSET UNITYSDK_OFFSET(0x1E8A57B0)
#define KNKGKMFEHLB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8A5E00)
#define KNKGKMFEHLB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8A5D60)
#define KNKGKMFEHLB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8A57C0)
#define KNKGKMFEHLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8A5660)
#define KNKGKMFEHLB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8A5AC0)
#define KNKGKMFEHLB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8A5B20)

inline static constexpr unsigned int KNKGKMFEHLB_TypeDefinitionIndex = 27667;

	class KNKGKMFEHLB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::MPPHIOJNKGB*>* HLJMBNMOKDE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_EOFDCHOGIPA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KNKGKMFEHLB")->GetStaticField(0x24670);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KNKGKMFEHLB")->GetStaticField(0x24678);
		}

		// static const ::System::Object EAIJKLGJIKD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKGKMFEHLB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNKGKMFEHLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNKGKMFEHLB*))((::PBYTE)hIl2Cpp + KNKGKMFEHLB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNKGKMFEHLB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KNKGKMFEHLB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKGKMFEHLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNKGKMFEHLB* Clone()
		{
			return ((::KNKGKMFEHLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKGKMFEHLB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MPPHIOJNKGB*>* KJJFGIBOIHJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MPPHIOJNKGB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKGKMFEHLB_KJJFGIBOIHJ_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKGKMFEHLB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNKGKMFEHLB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNKGKMFEHLB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNKGKMFEHLB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNKGKMFEHLB*))((::PBYTE)hIl2Cpp + KNKGKMFEHLB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKGKMFEHLB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKGKMFEHLB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNKGKMFEHLB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKGKMFEHLB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNKGKMFEHLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNKGKMFEHLB*))((::PBYTE)hIl2Cpp + KNKGKMFEHLB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNKGKMFEHLB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
