#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCKBFKILHFF;
class OMCGJJCJIKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCKBFKILHFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7F8810)
#define KCKBFKILHFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F8B20)
#define KCKBFKILHFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7F8090)
#define KCKBFKILHFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7F7FD0)
#define KCKBFKILHFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F7FC0)
#define KCKBFKILHFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7F82F0)
#define KCKBFKILHFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7F8180)
#define KCKBFKILHFF_GCMOCPMHPKL_OFFSET UNITYSDK_OFFSET(0x1E7F8170)
#define KCKBFKILHFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7F85C0)
#define KCKBFKILHFF_JJEKOMENABP_OFFSET UNITYSDK_OFFSET(0x1E7F8160)
#define KCKBFKILHFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7F7F80)
#define KCKBFKILHFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7F8950)
#define KCKBFKILHFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7F8870)
#define KCKBFKILHFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7F7FB0)
#define KCKBFKILHFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7F8720)
#define KCKBFKILHFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7F8780)

inline static constexpr unsigned int KCKBFKILHFF_TypeDefinitionIndex = 34166;

	class KCKBFKILHFF : public ::System::Object
	{
	public:
		::OMCGJJCJIKB* BMDOPOGHMDO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KCKBFKILHFF")->GetStaticField(0xFDF0);
		}

		// static const ::System::Object FONAKFCCNPF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKBFKILHFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCKBFKILHFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCKBFKILHFF*))((::PBYTE)hIl2Cpp + KCKBFKILHFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCKBFKILHFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KCKBFKILHFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKBFKILHFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCKBFKILHFF* Clone()
		{
			return ((::KCKBFKILHFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKBFKILHFF_CLONE_OFFSET))(this);
		}

		::OMCGJJCJIKB* JJEKOMENABP()
		{
			return ((::OMCGJJCJIKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKBFKILHFF_JJEKOMENABP_OFFSET))(this);
		}

		::System::Void GCMOCPMHPKL(::OMCGJJCJIKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMCGJJCJIKB*))((::PBYTE)hIl2Cpp + KCKBFKILHFF_GCMOCPMHPKL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCKBFKILHFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCKBFKILHFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCKBFKILHFF*))((::PBYTE)hIl2Cpp + KCKBFKILHFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKBFKILHFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKBFKILHFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCKBFKILHFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKBFKILHFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCKBFKILHFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCKBFKILHFF*))((::PBYTE)hIl2Cpp + KCKBFKILHFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCKBFKILHFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
