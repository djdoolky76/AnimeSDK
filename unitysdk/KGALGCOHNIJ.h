#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INBMHMPKACI;
class KGALGCOHNIJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGALGCOHNIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E832C30)
#define KGALGCOHNIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E832FB0)
#define KGALGCOHNIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E832780)
#define KGALGCOHNIJ_CMBJPMLOBOE_OFFSET UNITYSDK_OFFSET(0x1E8327D0)
#define KGALGCOHNIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8326F0)
#define KGALGCOHNIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8326B0)
#define KGALGCOHNIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E832930)
#define KGALGCOHNIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8327E0)
#define KGALGCOHNIJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8327C0)
#define KGALGCOHNIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E832A60)
#define KGALGCOHNIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E832670)
#define KGALGCOHNIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E832DE0)
#define KGALGCOHNIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E832D40)
#define KGALGCOHNIJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8327B0)
#define KGALGCOHNIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8326A0)
#define KGALGCOHNIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E832AD0)
#define KGALGCOHNIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E832B30)

inline static constexpr unsigned int KGALGCOHNIJ_TypeDefinitionIndex = 30571;

	class KGALGCOHNIJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::INBMHMPKACI*>* ELFKGPIMMCO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::INBMHMPKACI*>** StaticGet_JPGOOEBDHCN()
		{
			return (::Google::Protobuf::FieldCodec_1<::INBMHMPKACI*>**)UnitySDK::FromName("", "KGALGCOHNIJ")->GetStaticField(0x151B0);
		}

		static ::Google::Protobuf::MessageParser_1<::KGALGCOHNIJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KGALGCOHNIJ*>**)UnitySDK::FromName("", "KGALGCOHNIJ")->GetStaticField(0x151B8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BIIMBGOFABJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALGCOHNIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGALGCOHNIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGALGCOHNIJ*))((::PBYTE)hIl2Cpp + KGALGCOHNIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGALGCOHNIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KGALGCOHNIJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KGALGCOHNIJ*>*(*)())((::PBYTE)hIl2Cpp + KGALGCOHNIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALGCOHNIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGALGCOHNIJ* Clone()
		{
			return ((::KGALGCOHNIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALGCOHNIJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALGCOHNIJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGALGCOHNIJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::INBMHMPKACI*>* CMBJPMLOBOE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::INBMHMPKACI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALGCOHNIJ_CMBJPMLOBOE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGALGCOHNIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGALGCOHNIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGALGCOHNIJ*))((::PBYTE)hIl2Cpp + KGALGCOHNIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALGCOHNIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALGCOHNIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGALGCOHNIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALGCOHNIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGALGCOHNIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGALGCOHNIJ*))((::PBYTE)hIl2Cpp + KGALGCOHNIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGALGCOHNIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
