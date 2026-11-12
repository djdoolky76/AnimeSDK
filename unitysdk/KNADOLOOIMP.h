#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNADOLOOIMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNADOLOOIMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBB97D0)
#define KNADOLOOIMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBB99F0)
#define KNADOLOOIMP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBB9420)
#define KNADOLOOIMP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBB93F0)
#define KNADOLOOIMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB93E0)
#define KNADOLOOIMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBB9550)
#define KNADOLOOIMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBB9480)
#define KNADOLOOIMP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FBB9470)
#define KNADOLOOIMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBB96C0)
#define KNADOLOOIMP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBB93A0)
#define KNADOLOOIMP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBB9890)
#define KNADOLOOIMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBB9860)
#define KNADOLOOIMP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FBB9460)
#define KNADOLOOIMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBB93D0)
#define KNADOLOOIMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBB96F0)
#define KNADOLOOIMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBB9750)

inline static constexpr unsigned int KNADOLOOIMP_TypeDefinitionIndex = 26608;

	class KNADOLOOIMP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KNADOLOOIMP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KNADOLOOIMP*>**)UnitySDK::FromName("", "KNADOLOOIMP")->GetStaticField(0x1B440);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNADOLOOIMP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNADOLOOIMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNADOLOOIMP*))((::PBYTE)hIl2Cpp + KNADOLOOIMP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNADOLOOIMP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KNADOLOOIMP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KNADOLOOIMP*>*(*)())((::PBYTE)hIl2Cpp + KNADOLOOIMP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNADOLOOIMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNADOLOOIMP* Clone()
		{
			return ((::KNADOLOOIMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNADOLOOIMP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNADOLOOIMP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNADOLOOIMP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNADOLOOIMP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNADOLOOIMP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNADOLOOIMP*))((::PBYTE)hIl2Cpp + KNADOLOOIMP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNADOLOOIMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNADOLOOIMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNADOLOOIMP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNADOLOOIMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNADOLOOIMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNADOLOOIMP*))((::PBYTE)hIl2Cpp + KNADOLOOIMP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNADOLOOIMP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
