#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIKOBOMBMPB;
class OEDNNHAOHAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIKOBOMBMPB_BEGGOBGFPDN_OFFSET UNITYSDK_OFFSET(0x1E599180)
#define HIKOBOMBMPB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5997A0)
#define HIKOBOMBMPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E599AA0)
#define HIKOBOMBMPB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5990B0)
#define HIKOBOMBMPB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E599020)
#define HIKOBOMBMPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E599010)
#define HIKOBOMBMPB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E599340)
#define HIKOBOMBMPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5991A0)
#define HIKOBOMBMPB_FMMIADHAKOB_OFFSET UNITYSDK_OFFSET(0x1E599190)
#define HIKOBOMBMPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E599610)
#define HIKOBOMBMPB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E598FA0)
#define HIKOBOMBMPB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5998D0)
#define HIKOBOMBMPB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E599800)
#define HIKOBOMBMPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E599000)
#define HIKOBOMBMPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5996B0)
#define HIKOBOMBMPB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E599710)

inline static constexpr unsigned int HIKOBOMBMPB_TypeDefinitionIndex = 32672;

	class HIKOBOMBMPB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OEDNNHAOHAB* HICKDGBJGJM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HIKOBOMBMPB")->GetStaticField(0x3D890);
		}

		// static const ::System::Object LKIIPDMBEFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKOBOMBMPB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIKOBOMBMPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKOBOMBMPB*))((::PBYTE)hIl2Cpp + HIKOBOMBMPB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIKOBOMBMPB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HIKOBOMBMPB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKOBOMBMPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIKOBOMBMPB* Clone()
		{
			return ((::HIKOBOMBMPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKOBOMBMPB_CLONE_OFFSET))(this);
		}

		::OEDNNHAOHAB* BEGGOBGFPDN()
		{
			return ((::OEDNNHAOHAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKOBOMBMPB_BEGGOBGFPDN_OFFSET))(this);
		}

		::System::Void FMMIADHAKOB(::OEDNNHAOHAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEDNNHAOHAB*))((::PBYTE)hIl2Cpp + HIKOBOMBMPB_FMMIADHAKOB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIKOBOMBMPB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIKOBOMBMPB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIKOBOMBMPB*))((::PBYTE)hIl2Cpp + HIKOBOMBMPB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKOBOMBMPB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKOBOMBMPB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIKOBOMBMPB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKOBOMBMPB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIKOBOMBMPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKOBOMBMPB*))((::PBYTE)hIl2Cpp + HIKOBOMBMPB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIKOBOMBMPB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
