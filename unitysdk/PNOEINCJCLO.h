#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNOEINCJCLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNOEINCJCLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F270EC0)
#define PNOEINCJCLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2710E0)
#define PNOEINCJCLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F270B10)
#define PNOEINCJCLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F270AE0)
#define PNOEINCJCLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F270AD0)
#define PNOEINCJCLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F270C40)
#define PNOEINCJCLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F270B70)
#define PNOEINCJCLO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F270B60)
#define PNOEINCJCLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F270DB0)
#define PNOEINCJCLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F270A90)
#define PNOEINCJCLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F270F80)
#define PNOEINCJCLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F270F50)
#define PNOEINCJCLO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F270B50)
#define PNOEINCJCLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F270AC0)
#define PNOEINCJCLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F270DE0)
#define PNOEINCJCLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F270E40)

inline static constexpr unsigned int PNOEINCJCLO_TypeDefinitionIndex = 35958;

	class PNOEINCJCLO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PNOEINCJCLO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PNOEINCJCLO*>**)UnitySDK::FromName("", "PNOEINCJCLO")->GetStaticField(0x43930);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOEINCJCLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNOEINCJCLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNOEINCJCLO*))((::PBYTE)hIl2Cpp + PNOEINCJCLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNOEINCJCLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PNOEINCJCLO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PNOEINCJCLO*>*(*)())((::PBYTE)hIl2Cpp + PNOEINCJCLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOEINCJCLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNOEINCJCLO* Clone()
		{
			return ((::PNOEINCJCLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOEINCJCLO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOEINCJCLO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNOEINCJCLO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNOEINCJCLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNOEINCJCLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNOEINCJCLO*))((::PBYTE)hIl2Cpp + PNOEINCJCLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOEINCJCLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOEINCJCLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNOEINCJCLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOEINCJCLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNOEINCJCLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNOEINCJCLO*))((::PBYTE)hIl2Cpp + PNOEINCJCLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNOEINCJCLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
