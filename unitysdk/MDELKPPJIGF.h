#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDELKPPJIGF;
class OGHPKFMNNHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MDELKPPJIGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9D3B40)
#define MDELKPPJIGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D3EA0)
#define MDELKPPJIGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9D3600)
#define MDELKPPJIGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9D3590)
#define MDELKPPJIGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D3580)
#define MDELKPPJIGF_ECAABINLDDB_OFFSET UNITYSDK_OFFSET(0x1E9D3690)
#define MDELKPPJIGF_EGHKIALBDOF_OFFSET UNITYSDK_OFFSET(0x1E9D36B0)
#define MDELKPPJIGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9D3840)
#define MDELKPPJIGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9D36C0)
#define MDELKPPJIGF_GCMLDLLJGDJ_OFFSET UNITYSDK_OFFSET(0x1E9D3680)
#define MDELKPPJIGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9D39C0)
#define MDELKPPJIGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9D3540)
#define MDELKPPJIGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9D3CC0)
#define MDELKPPJIGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9D3C10)
#define MDELKPPJIGF_NPFFKBKJCGE_OFFSET UNITYSDK_OFFSET(0x1E9D36A0)
#define MDELKPPJIGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9D3570)
#define MDELKPPJIGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9D3A00)
#define MDELKPPJIGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9D3A60)

inline static constexpr unsigned int MDELKPPJIGF_TypeDefinitionIndex = 27365;

	class MDELKPPJIGF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OGHPKFMNNHL* NHBKEOBJJDJ; // 0x18
		::System::UInt32 FKAIMIIAGPK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MDELKPPJIGF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MDELKPPJIGF*>**)UnitySDK::FromName("", "MDELKPPJIGF")->GetStaticField(0x4B8D0);
		}

		// static const ::System::Object OJOGFBJAPMA; // 0x0
		// static const ::System::Object MIMFEIKJPKN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDELKPPJIGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MDELKPPJIGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDELKPPJIGF*))((::PBYTE)hIl2Cpp + MDELKPPJIGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDELKPPJIGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MDELKPPJIGF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MDELKPPJIGF*>*(*)())((::PBYTE)hIl2Cpp + MDELKPPJIGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDELKPPJIGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MDELKPPJIGF* Clone()
		{
			return ((::MDELKPPJIGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDELKPPJIGF_CLONE_OFFSET))(this);
		}

		::System::UInt32 GCMLDLLJGDJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDELKPPJIGF_GCMLDLLJGDJ_OFFSET))(this);
		}

		::System::Void ECAABINLDDB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDELKPPJIGF_ECAABINLDDB_OFFSET))(this, a1);
		}

		::OGHPKFMNNHL* NPFFKBKJCGE()
		{
			return ((::OGHPKFMNNHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDELKPPJIGF_NPFFKBKJCGE_OFFSET))(this);
		}

		::System::Void EGHKIALBDOF(::OGHPKFMNNHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGHPKFMNNHL*))((::PBYTE)hIl2Cpp + MDELKPPJIGF_EGHKIALBDOF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDELKPPJIGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MDELKPPJIGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MDELKPPJIGF*))((::PBYTE)hIl2Cpp + MDELKPPJIGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDELKPPJIGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDELKPPJIGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MDELKPPJIGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDELKPPJIGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MDELKPPJIGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDELKPPJIGF*))((::PBYTE)hIl2Cpp + MDELKPPJIGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MDELKPPJIGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
