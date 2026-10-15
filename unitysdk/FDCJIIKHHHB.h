#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDCJIIKHHHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDCJIIKHHHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3251B0)
#define FDCJIIKHHHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3253D0)
#define FDCJIIKHHHB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E324E00)
#define FDCJIIKHHHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E324DD0)
#define FDCJIIKHHHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E324DC0)
#define FDCJIIKHHHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E324F30)
#define FDCJIIKHHHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E324E60)
#define FDCJIIKHHHB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E324E50)
#define FDCJIIKHHHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3250A0)
#define FDCJIIKHHHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E324D80)
#define FDCJIIKHHHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E325270)
#define FDCJIIKHHHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E325240)
#define FDCJIIKHHHB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E324E40)
#define FDCJIIKHHHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E324DB0)
#define FDCJIIKHHHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3250D0)
#define FDCJIIKHHHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E325130)

inline static constexpr unsigned int FDCJIIKHHHB_TypeDefinitionIndex = 30746;

	class FDCJIIKHHHB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FDCJIIKHHHB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FDCJIIKHHHB*>**)UnitySDK::FromName("", "FDCJIIKHHHB")->GetStaticField(0x52020);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCJIIKHHHB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDCJIIKHHHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDCJIIKHHHB*))((::PBYTE)hIl2Cpp + FDCJIIKHHHB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDCJIIKHHHB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FDCJIIKHHHB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FDCJIIKHHHB*>*(*)())((::PBYTE)hIl2Cpp + FDCJIIKHHHB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCJIIKHHHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDCJIIKHHHB* Clone()
		{
			return ((::FDCJIIKHHHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCJIIKHHHB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCJIIKHHHB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDCJIIKHHHB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDCJIIKHHHB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDCJIIKHHHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDCJIIKHHHB*))((::PBYTE)hIl2Cpp + FDCJIIKHHHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCJIIKHHHB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCJIIKHHHB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDCJIIKHHHB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCJIIKHHHB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDCJIIKHHHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDCJIIKHHHB*))((::PBYTE)hIl2Cpp + FDCJIIKHHHB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDCJIIKHHHB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
