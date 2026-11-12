#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIKOBOMBMPB;
class OEDNNHAOHAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIKOBOMBMPB_BEGGOBGFPDN_OFFSET UNITYSDK_OFFSET(0x1F894400)
#define HIKOBOMBMPB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F894A20)
#define HIKOBOMBMPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F894D20)
#define HIKOBOMBMPB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F894330)
#define HIKOBOMBMPB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8942A0)
#define HIKOBOMBMPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F894290)
#define HIKOBOMBMPB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F8945C0)
#define HIKOBOMBMPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F894420)
#define HIKOBOMBMPB_FMMIADHAKOB_OFFSET UNITYSDK_OFFSET(0x1F894410)
#define HIKOBOMBMPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F894890)
#define HIKOBOMBMPB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F894220)
#define HIKOBOMBMPB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F894B50)
#define HIKOBOMBMPB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F894A80)
#define HIKOBOMBMPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F894280)
#define HIKOBOMBMPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F894930)
#define HIKOBOMBMPB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F894990)

inline static constexpr unsigned int HIKOBOMBMPB_TypeDefinitionIndex = 33587;

	class HIKOBOMBMPB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OEDNNHAOHAB* HICKDGBJGJM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HIKOBOMBMPB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIKOBOMBMPB*>**)UnitySDK::FromName("", "HIKOBOMBMPB")->GetStaticField(0x31A40);
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

		static ::Google::Protobuf::MessageParser_1<::HIKOBOMBMPB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIKOBOMBMPB*>*(*)())((::PBYTE)hIl2Cpp + HIKOBOMBMPB_JJGHOBBFNJD_OFFSET))();
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
