#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKICDPIJIMF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKICDPIJIMF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0BD650)
#define CKICDPIJIMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0BD870)
#define CKICDPIJIMF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0BD240)
#define CKICDPIJIMF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0BD210)
#define CKICDPIJIMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BD200)
#define CKICDPIJIMF_EHMAFEANNKM_OFFSET UNITYSDK_OFFSET(0x1E0BD2C0)
#define CKICDPIJIMF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0BD3D0)
#define CKICDPIJIMF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0BD2D0)
#define CKICDPIJIMF_FLDEJDGGMGD_OFFSET UNITYSDK_OFFSET(0x1E0BD2B0)
#define CKICDPIJIMF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0BD540)
#define CKICDPIJIMF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0BD190)
#define CKICDPIJIMF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0BD710)
#define CKICDPIJIMF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0BD6E0)
#define CKICDPIJIMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0BD1F0)
#define CKICDPIJIMF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0BD570)
#define CKICDPIJIMF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0BD5D0)

inline static constexpr unsigned int CKICDPIJIMF_TypeDefinitionIndex = 31678;

	class CKICDPIJIMF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EEBKDMBJHEC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CKICDPIJIMF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKICDPIJIMF*>**)UnitySDK::FromName("", "CKICDPIJIMF")->GetStaticField(0x19540);
		}

		// static const ::System::Object DCPHPJKBJBN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKICDPIJIMF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKICDPIJIMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKICDPIJIMF*))((::PBYTE)hIl2Cpp + CKICDPIJIMF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKICDPIJIMF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKICDPIJIMF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKICDPIJIMF*>*(*)())((::PBYTE)hIl2Cpp + CKICDPIJIMF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKICDPIJIMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKICDPIJIMF* Clone()
		{
			return ((::CKICDPIJIMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKICDPIJIMF_CLONE_OFFSET))(this);
		}

		::System::UInt32 FLDEJDGGMGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKICDPIJIMF_FLDEJDGGMGD_OFFSET))(this);
		}

		::System::Void EHMAFEANNKM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKICDPIJIMF_EHMAFEANNKM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKICDPIJIMF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKICDPIJIMF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKICDPIJIMF*))((::PBYTE)hIl2Cpp + CKICDPIJIMF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKICDPIJIMF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKICDPIJIMF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKICDPIJIMF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKICDPIJIMF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKICDPIJIMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKICDPIJIMF*))((::PBYTE)hIl2Cpp + CKICDPIJIMF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKICDPIJIMF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
