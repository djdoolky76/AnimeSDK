#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIFJNMDDNPF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EIFJNMDDNPF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E27B800)
#define EIFJNMDDNPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E27BA20)
#define EIFJNMDDNPF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E27B450)
#define EIFJNMDDNPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E27B420)
#define EIFJNMDDNPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E27B410)
#define EIFJNMDDNPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E27B580)
#define EIFJNMDDNPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E27B4B0)
#define EIFJNMDDNPF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E27B4A0)
#define EIFJNMDDNPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E27B6F0)
#define EIFJNMDDNPF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E27B3D0)
#define EIFJNMDDNPF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E27B8C0)
#define EIFJNMDDNPF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E27B890)
#define EIFJNMDDNPF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E27B490)
#define EIFJNMDDNPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E27B400)
#define EIFJNMDDNPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E27B720)
#define EIFJNMDDNPF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E27B780)

inline static constexpr unsigned int EIFJNMDDNPF_TypeDefinitionIndex = 27124;

	class EIFJNMDDNPF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EIFJNMDDNPF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EIFJNMDDNPF*>**)UnitySDK::FromName("", "EIFJNMDDNPF")->GetStaticField(0x4ABB0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJNMDDNPF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EIFJNMDDNPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIFJNMDDNPF*))((::PBYTE)hIl2Cpp + EIFJNMDDNPF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIFJNMDDNPF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EIFJNMDDNPF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EIFJNMDDNPF*>*(*)())((::PBYTE)hIl2Cpp + EIFJNMDDNPF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJNMDDNPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EIFJNMDDNPF* Clone()
		{
			return ((::EIFJNMDDNPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJNMDDNPF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJNMDDNPF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIFJNMDDNPF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EIFJNMDDNPF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EIFJNMDDNPF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIFJNMDDNPF*))((::PBYTE)hIl2Cpp + EIFJNMDDNPF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJNMDDNPF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJNMDDNPF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EIFJNMDDNPF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJNMDDNPF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EIFJNMDDNPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIFJNMDDNPF*))((::PBYTE)hIl2Cpp + EIFJNMDDNPF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EIFJNMDDNPF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
