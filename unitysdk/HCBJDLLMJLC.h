#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCBJDLLMJLC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define HCBJDLLMJLC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E507320)
#define HCBJDLLMJLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E507640)
#define HCBJDLLMJLC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E506D90)
#define HCBJDLLMJLC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E506D20)
#define HCBJDLLMJLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E506D10)
#define HCBJDLLMJLC_DPKOHJLBEBB_OFFSET UNITYSDK_OFFSET(0x1E506E30)
#define HCBJDLLMJLC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E506FD0)
#define HCBJDLLMJLC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E506E50)
#define HCBJDLLMJLC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E506E20)
#define HCBJDLLMJLC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E507150)
#define HCBJDLLMJLC_IJPLICKGMHC_OFFSET UNITYSDK_OFFSET(0x1E506E40)
#define HCBJDLLMJLC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E506CD0)
#define HCBJDLLMJLC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E507480)
#define HCBJDLLMJLC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5073F0)
#define HCBJDLLMJLC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E506E10)
#define HCBJDLLMJLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E506D00)
#define HCBJDLLMJLC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5071E0)
#define HCBJDLLMJLC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E507240)

inline static constexpr unsigned int HCBJDLLMJLC_TypeDefinitionIndex = 26356;

	class HCBJDLLMJLC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JEDJCPJBEOM; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HCBJDLLMJLC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HCBJDLLMJLC*>**)UnitySDK::FromName("", "HCBJDLLMJLC")->GetStaticField(0x2A0D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HPGDFCOBPGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBJDLLMJLC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCBJDLLMJLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCBJDLLMJLC*))((::PBYTE)hIl2Cpp + HCBJDLLMJLC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCBJDLLMJLC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HCBJDLLMJLC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HCBJDLLMJLC*>*(*)())((::PBYTE)hIl2Cpp + HCBJDLLMJLC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBJDLLMJLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCBJDLLMJLC* Clone()
		{
			return ((::HCBJDLLMJLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBJDLLMJLC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBJDLLMJLC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCBJDLLMJLC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* DPKOHJLBEBB()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBJDLLMJLC_DPKOHJLBEBB_OFFSET))(this);
		}

		::System::Void IJPLICKGMHC(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + HCBJDLLMJLC_IJPLICKGMHC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCBJDLLMJLC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCBJDLLMJLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCBJDLLMJLC*))((::PBYTE)hIl2Cpp + HCBJDLLMJLC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBJDLLMJLC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBJDLLMJLC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCBJDLLMJLC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBJDLLMJLC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCBJDLLMJLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCBJDLLMJLC*))((::PBYTE)hIl2Cpp + HCBJDLLMJLC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCBJDLLMJLC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
