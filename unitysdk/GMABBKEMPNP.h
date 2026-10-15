#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMABBKEMPNP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMABBKEMPNP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4C8950)
#define GMABBKEMPNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C8B70)
#define GMABBKEMPNP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4C85A0)
#define GMABBKEMPNP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4C8570)
#define GMABBKEMPNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C8560)
#define GMABBKEMPNP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4C86D0)
#define GMABBKEMPNP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4C8600)
#define GMABBKEMPNP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4C85F0)
#define GMABBKEMPNP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4C8840)
#define GMABBKEMPNP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4C8520)
#define GMABBKEMPNP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4C8A10)
#define GMABBKEMPNP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4C89E0)
#define GMABBKEMPNP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4C85E0)
#define GMABBKEMPNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4C8550)
#define GMABBKEMPNP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4C8870)
#define GMABBKEMPNP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4C88D0)

inline static constexpr unsigned int GMABBKEMPNP_TypeDefinitionIndex = 34096;

	class GMABBKEMPNP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GMABBKEMPNP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GMABBKEMPNP*>**)UnitySDK::FromName("", "GMABBKEMPNP")->GetStaticField(0x20160);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMABBKEMPNP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMABBKEMPNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMABBKEMPNP*))((::PBYTE)hIl2Cpp + GMABBKEMPNP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMABBKEMPNP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GMABBKEMPNP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GMABBKEMPNP*>*(*)())((::PBYTE)hIl2Cpp + GMABBKEMPNP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMABBKEMPNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMABBKEMPNP* Clone()
		{
			return ((::GMABBKEMPNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMABBKEMPNP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMABBKEMPNP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMABBKEMPNP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMABBKEMPNP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMABBKEMPNP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMABBKEMPNP*))((::PBYTE)hIl2Cpp + GMABBKEMPNP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMABBKEMPNP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMABBKEMPNP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMABBKEMPNP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMABBKEMPNP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMABBKEMPNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMABBKEMPNP*))((::PBYTE)hIl2Cpp + GMABBKEMPNP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMABBKEMPNP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
