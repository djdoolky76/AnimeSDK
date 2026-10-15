#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPIKBFAICKP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OPIKBFAICKP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEE3910)
#define OPIKBFAICKP_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1DEE35B0)
#define OPIKBFAICKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE3BE0)
#define OPIKBFAICKP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEE3560)
#define OPIKBFAICKP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEE3530)
#define OPIKBFAICKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE3520)
#define OPIKBFAICKP_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1DEE35C0)
#define OPIKBFAICKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEE36D0)
#define OPIKBFAICKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEE35F0)
#define OPIKBFAICKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEE37A0)
#define OPIKBFAICKP_GKNMNFDAJKI_OFFSET UNITYSDK_OFFSET(0x1DEE35D0)
#define OPIKBFAICKP_JELMAAGINAP_OFFSET UNITYSDK_OFFSET(0x1DEE35E0)
#define OPIKBFAICKP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEE34E0)
#define OPIKBFAICKP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEE3A60)
#define OPIKBFAICKP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEE3A20)
#define OPIKBFAICKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEE3510)
#define OPIKBFAICKP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEE37D0)
#define OPIKBFAICKP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEE3830)

inline static constexpr unsigned int OPIKBFAICKP_TypeDefinitionIndex = 28660;

	class OPIKBFAICKP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NBFPOGFBMFE; // 0x18
		::System::UInt32 OLJDGKOCLFE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OPIKBFAICKP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OPIKBFAICKP*>**)UnitySDK::FromName("", "OPIKBFAICKP")->GetStaticField(0x30300);
		}

		// static const ::System::Object GKBPDIPOFGE; // 0x0
		// static const ::System::Object DEGKCBODDOF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIKBFAICKP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OPIKBFAICKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPIKBFAICKP*))((::PBYTE)hIl2Cpp + OPIKBFAICKP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPIKBFAICKP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OPIKBFAICKP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OPIKBFAICKP*>*(*)())((::PBYTE)hIl2Cpp + OPIKBFAICKP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIKBFAICKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OPIKBFAICKP* Clone()
		{
			return ((::OPIKBFAICKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIKBFAICKP_CLONE_OFFSET))(this);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIKBFAICKP_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OPIKBFAICKP_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::UInt32 GKNMNFDAJKI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIKBFAICKP_GKNMNFDAJKI_OFFSET))(this);
		}

		::System::Void JELMAAGINAP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OPIKBFAICKP_JELMAAGINAP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPIKBFAICKP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OPIKBFAICKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OPIKBFAICKP*))((::PBYTE)hIl2Cpp + OPIKBFAICKP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIKBFAICKP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIKBFAICKP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OPIKBFAICKP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIKBFAICKP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OPIKBFAICKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPIKBFAICKP*))((::PBYTE)hIl2Cpp + OPIKBFAICKP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OPIKBFAICKP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
