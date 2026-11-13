#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKCNOIGHOPM;
class MPNKBNOCCLD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MPNKBNOCCLD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20142B90)
#define MPNKBNOCCLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x20142F30)
#define MPNKBNOCCLD_CLONE_OFFSET UNITYSDK_OFFSET(0x201426F0)
#define MPNKBNOCCLD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20142630)
#define MPNKBNOCCLD_CTOR_OFFSET UNITYSDK_OFFSET(0x201425E0)
#define MPNKBNOCCLD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201428A0)
#define MPNKBNOCCLD_EQUALS_OFFSET UNITYSDK_OFFSET(0x20142750)
#define MPNKBNOCCLD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20142740)
#define MPNKBNOCCLD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x201429C0)
#define MPNKBNOCCLD_HGAGOEECAGH_OFFSET UNITYSDK_OFFSET(0x20142720)
#define MPNKBNOCCLD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x201425A0)
#define MPNKBNOCCLD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20142D60)
#define MPNKBNOCCLD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20142CC0)
#define MPNKBNOCCLD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20142730)
#define MPNKBNOCCLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201425D0)
#define MPNKBNOCCLD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20142A30)
#define MPNKBNOCCLD_WRITETO_OFFSET UNITYSDK_OFFSET(0x20142A90)

inline static constexpr unsigned int MPNKBNOCCLD_TypeDefinitionIndex = 27292;

	class MPNKBNOCCLD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::GKCNOIGHOPM*>* OJHDKOHNMEM; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::GKCNOIGHOPM*>** StaticGet_LNKJLGDPAFE()
		{
			return (::Google::Protobuf::FieldCodec_1<::GKCNOIGHOPM*>**)UnitySDK::FromName("", "MPNKBNOCCLD")->GetStaticField(0x55E30);
		}

		static ::Google::Protobuf::MessageParser_1<::MPNKBNOCCLD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MPNKBNOCCLD*>**)UnitySDK::FromName("", "MPNKBNOCCLD")->GetStaticField(0x55E38);
		}

		// static const ::System::Object FJPBLNJEOLG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNKBNOCCLD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MPNKBNOCCLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPNKBNOCCLD*))((::PBYTE)hIl2Cpp + MPNKBNOCCLD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPNKBNOCCLD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MPNKBNOCCLD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MPNKBNOCCLD*>*(*)())((::PBYTE)hIl2Cpp + MPNKBNOCCLD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNKBNOCCLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MPNKBNOCCLD* Clone()
		{
			return ((::MPNKBNOCCLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNKBNOCCLD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GKCNOIGHOPM*>* HGAGOEECAGH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GKCNOIGHOPM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNKBNOCCLD_HGAGOEECAGH_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNKBNOCCLD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPNKBNOCCLD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MPNKBNOCCLD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MPNKBNOCCLD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MPNKBNOCCLD*))((::PBYTE)hIl2Cpp + MPNKBNOCCLD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNKBNOCCLD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNKBNOCCLD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MPNKBNOCCLD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNKBNOCCLD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MPNKBNOCCLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPNKBNOCCLD*))((::PBYTE)hIl2Cpp + MPNKBNOCCLD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MPNKBNOCCLD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
