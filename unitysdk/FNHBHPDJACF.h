#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNHBHPDJACF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FNHBHPDJACF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3F01C0)
#define FNHBHPDJACF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F0490)
#define FNHBHPDJACF_CHBPFJKAAEA_OFFSET UNITYSDK_OFFSET(0x1E3EFE90)
#define FNHBHPDJACF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3EFE10)
#define FNHBHPDJACF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3EFDE0)
#define FNHBHPDJACF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3EFDD0)
#define FNHBHPDJACF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3EFF80)
#define FNHBHPDJACF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3EFEA0)
#define FNHBHPDJACF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3EFE70)
#define FNHBHPDJACF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3F0050)
#define FNHBHPDJACF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3EFD90)
#define FNHBHPDJACF_JMPKKEDGNMG_OFFSET UNITYSDK_OFFSET(0x1E3EFE80)
#define FNHBHPDJACF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3F0310)
#define FNHBHPDJACF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3F02D0)
#define FNHBHPDJACF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3EFE60)
#define FNHBHPDJACF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3EFDC0)
#define FNHBHPDJACF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3F0080)
#define FNHBHPDJACF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3F00E0)

inline static constexpr unsigned int FNHBHPDJACF_TypeDefinitionIndex = 28467;

	class FNHBHPDJACF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 IHIJEFLBCEM; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FNHBHPDJACF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FNHBHPDJACF*>**)UnitySDK::FromName("", "FNHBHPDJACF")->GetStaticField(0x653E0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GBOFOCLMOHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHBHPDJACF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FNHBHPDJACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNHBHPDJACF*))((::PBYTE)hIl2Cpp + FNHBHPDJACF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNHBHPDJACF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FNHBHPDJACF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FNHBHPDJACF*>*(*)())((::PBYTE)hIl2Cpp + FNHBHPDJACF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHBHPDJACF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FNHBHPDJACF* Clone()
		{
			return ((::FNHBHPDJACF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHBHPDJACF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHBHPDJACF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNHBHPDJACF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 JMPKKEDGNMG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHBHPDJACF_JMPKKEDGNMG_OFFSET))(this);
		}

		::System::Void CHBPFJKAAEA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNHBHPDJACF_CHBPFJKAAEA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNHBHPDJACF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FNHBHPDJACF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNHBHPDJACF*))((::PBYTE)hIl2Cpp + FNHBHPDJACF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHBHPDJACF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHBHPDJACF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FNHBHPDJACF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHBHPDJACF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FNHBHPDJACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNHBHPDJACF*))((::PBYTE)hIl2Cpp + FNHBHPDJACF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FNHBHPDJACF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
