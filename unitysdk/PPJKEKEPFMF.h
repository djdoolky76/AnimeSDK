#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPJKEKEPFMF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PPJKEKEPFMF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F28DCD0)
#define PPJKEKEPFMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F28DFA0)
#define PPJKEKEPFMF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F28D920)
#define PPJKEKEPFMF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F28D8F0)
#define PPJKEKEPFMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F28D8E0)
#define PPJKEKEPFMF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F28DA90)
#define PPJKEKEPFMF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F28D9B0)
#define PPJKEKEPFMF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F28D980)
#define PPJKEKEPFMF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F28DB60)
#define PPJKEKEPFMF_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1F28D990)
#define PPJKEKEPFMF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F28D8A0)
#define PPJKEKEPFMF_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1F28D9A0)
#define PPJKEKEPFMF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F28DE20)
#define PPJKEKEPFMF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F28DDE0)
#define PPJKEKEPFMF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F28D970)
#define PPJKEKEPFMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F28D8D0)
#define PPJKEKEPFMF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F28DB90)
#define PPJKEKEPFMF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F28DBF0)

inline static constexpr unsigned int PPJKEKEPFMF_TypeDefinitionIndex = 26775;

	class PPJKEKEPFMF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PPJKEKEPFMF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PPJKEKEPFMF*>**)UnitySDK::FromName("", "PPJKEKEPFMF")->GetStaticField(0x495F0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJKEKEPFMF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PPJKEKEPFMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPJKEKEPFMF*))((::PBYTE)hIl2Cpp + PPJKEKEPFMF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPJKEKEPFMF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PPJKEKEPFMF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PPJKEKEPFMF*>*(*)())((::PBYTE)hIl2Cpp + PPJKEKEPFMF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJKEKEPFMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PPJKEKEPFMF* Clone()
		{
			return ((::PPJKEKEPFMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJKEKEPFMF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJKEKEPFMF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPJKEKEPFMF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJKEKEPFMF_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPJKEKEPFMF_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPJKEKEPFMF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PPJKEKEPFMF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPJKEKEPFMF*))((::PBYTE)hIl2Cpp + PPJKEKEPFMF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJKEKEPFMF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJKEKEPFMF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PPJKEKEPFMF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJKEKEPFMF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PPJKEKEPFMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPJKEKEPFMF*))((::PBYTE)hIl2Cpp + PPJKEKEPFMF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PPJKEKEPFMF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
